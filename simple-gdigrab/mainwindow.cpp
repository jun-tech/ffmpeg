#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

extern "C"{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libavutil/imgutils.h>
#include <libavdevice/avdevice.h>
#include <libavutil/opt.h>

#include <libavutil/time.h>
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 初始化时间
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::readFrame);
    // 赋值
    this->ui->pushUrl->setText(QLatin1String(outFilename));
}

MainWindow::~MainWindow()
{
    if(isOpen){
        this->stopScreen();
    }
    this->freeScreen();
    qDebug() << "销毁录屏";
    delete ui;
}

void MainWindow::initScreen()
{
    // 覆盖地址
    outFilename = this->ui->pushUrl->text().toStdString().c_str();

    avdevice_register_all();
    avformat_network_init();

    // 优化延迟效果 begin 1
    //    ifmtCtx = avformat_alloc_context();
    //    printf("size %ld\tduration %ld\n", ifmtCtx->probesize,
    //               ifmtCtx->max_analyze_duration);
    //    ifmtCtx->probesize = 20000000;
    //    ifmtCtx->max_analyze_duration = 2000;
    // 优化延迟效果 end 1

    AVInputFormat *ifmt = av_find_input_format("dshow");
    if (!ifmt)
    {
        qDebug()<<"can't find input device\n";
        return;
    }

    // 优化延迟效果 begin 2
    //    av_dict_set(&options, "fflags", "nobuffer", 0);
    // 优化延迟效果 end 2

    //    av_dict_set(&options,"video_size","640x480",0);

    // 1. 打开输入
    // 1.1 打开输入文件，获取封装格式相关信息
    av_dict_set_int(&options, "rtbufsize", 18432000, 0);
    //    av_dict_set_int(&options, "r", 25, 0);

    if ((ret = avformat_open_input(&ifmtCtx, inFilename, ifmt, &options)) < 0)
    {
        qDebug()<<"can't open input file: "<< inFilename;
        return;
    }

    // 1.2 解码一段数据，获取流相关信息
    if ((ret = avformat_find_stream_info(ifmtCtx, 0)) < 0)
    {
        qDebug()<<"failed to retrieve input stream information";
        return;
    }

    // 1.3 获取输入ctx
    for (i=0; i<ifmtCtx->nb_streams; ++i)
    {
        if (ifmtCtx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO)
        {
            videoIndex = i;
            break;
        }
    }

    printf("%s:%d, videoIndex = %d\n", __FUNCTION__, __LINE__, videoIndex);

    av_dump_format(ifmtCtx, 0, inFilename, 0);

    // 1.4 查找输入解码器
    pCodec = avcodec_find_decoder(ifmtCtx->streams[videoIndex]->codecpar->codec_id);
    if (!pCodec)
    {
        qDebug()<<"can't find codec";
        return;
    }

    pCodecCtx = avcodec_alloc_context3(pCodec);

    if (!pCodecCtx)
    {
        qDebug()<<"can't alloc codec context";
        return;
    }

    avcodec_parameters_to_context(pCodecCtx, ifmtCtx->streams[videoIndex]->codecpar);

    //  1.5 打开输入解码器
    if (avcodec_open2(pCodecCtx, pCodec, NULL) < 0)
    {
        qDebug()<<"can't open codec\n";
        return;
    }


    // 1.6 查找H264编码器
    pH264Codec = avcodec_find_encoder(AV_CODEC_ID_H264);
    if (!pH264Codec)
    {
        qDebug()<<"can't find h264 codec.\n";
        return;
    }

    // 1.6.1 设置参数
    pH264CodecCtx = avcodec_alloc_context3(pH264Codec);
    pH264CodecCtx->codec_id = AV_CODEC_ID_H264;
    pH264CodecCtx->codec_type = AVMEDIA_TYPE_VIDEO;
    pH264CodecCtx->pix_fmt = AV_PIX_FMT_YUV420P;
    pH264CodecCtx->width = pCodecCtx->width;
    pH264CodecCtx->height = pCodecCtx->height;
    pH264CodecCtx->time_base.num = 1;
    pH264CodecCtx->time_base.den = 25;	//帧率（即一秒钟多少张图片）
    pH264CodecCtx->bit_rate = 400000;	//比特率（调节这个大小可以改变编码后视频的质量）
    pH264CodecCtx->gop_size = 250;
    pH264CodecCtx->qmin = 10;   //调节清晰度和编码速度 //这个值调节编码后输出数据量越大输出数据量越小，越大编码速度越快，清晰度越差
    pH264CodecCtx->qmax = 51;   //调节清晰度和编码速度
    //    pH264CodecCtx->qcompress=0.6;
    //         pH264CodecCtx->max_b_frames = 0; //低延迟，去掉B帧会出现花屏，不建议开启
    //some formats want stream headers to be separate
    //	if (pH264CodecCtx->flags & AVFMT_GLOBALHEADER)
    {
        pH264CodecCtx->flags |= AV_CODEC_FLAG_GLOBAL_HEADER | AV_CODEC_FLAG_LOW_DELAY;
    }

    // 1.7 打开H.264编码器
    av_dict_set(&params, "buffer_size", "1024000", 0);// 1.buffer_size：减少卡顿或者花屏现象，相当于增加或扩大了缓冲区，给予编码和发送足够的时间。
    // 低延迟 bg
    //    av_dict_set(&params, "preset", "superfast", 0);
    av_dict_set(&params, "preset", "ultrafast", 0);
    av_dict_set(&params, "profile", "baseline", 0);
    // 低延迟 ed
    av_dict_set(&params, "tune", "zerolatency", 0);	//实现实时编码
    //    av_dict_set(&params, "video_size", "1920*1080", 0);


    if (avcodec_open2(pH264CodecCtx, pH264Codec, &params) < 0)
    {
        qDebug()<<"can't open video encoder.\n";
        return;
    }

    // 2. 打开输出
    // 2.1 分配输出ctx
    if (strstr(outFilename, "rtmp://"))
    {
        ofmtName = "flv";
    }
    else if (strstr(outFilename, "udp://"))
    {
        ofmtName = "mpegts";
    }
    else
    {
        ofmtName = NULL;
    }

    ret = avformat_alloc_output_context2(&ofmtCtx, NULL, ofmtName, outFilename);
    if (!ofmtCtx)
    {
        qDebug()<<"can't create output context. " << ret;
        return;
    }

    // 2.2 创建输出流
    for (i=0; i<ifmtCtx->nb_streams; ++i)
    {
        AVStream *outStream = avformat_new_stream(ofmtCtx, NULL);
        if (!outStream)
        {
            qDebug()<<"failed to allocate output stream\n";
            return;
        }

        avcodec_parameters_from_context(outStream->codecpar, pH264CodecCtx);
    }

    av_dump_format(ofmtCtx, 0, outFilename, 1);

    if (!(ofmtCtx->oformat->flags & AVFMT_NOFILE))
    {
        // 2.3 创建并初始化一个AVIOContext, 用以访问URL（outFilename）指定的资源
        ret = avio_open(&ofmtCtx->pb, outFilename, AVIO_FLAG_WRITE);
        if (ret < 0)
        {
            qDebug()<<"can't open output URL: " << outFilename;
            return;
        }
    }

    // 3. 数据处理
    // 3.1 写输出文件
    ret = avformat_write_header(ofmtCtx, NULL);
    if (ret < 0)
    {
        qDebug()<<"Error accourred when opening output file\n";
        return;
    }


    pFrame = av_frame_alloc();
    pFrameYUV = av_frame_alloc();

    outBuffer = (unsigned char*) av_malloc(
                av_image_get_buffer_size(AV_PIX_FMT_YUV420P, pCodecCtx->width,
                                         pCodecCtx->height, 1));
    av_image_fill_arrays(pFrameYUV->data, pFrameYUV->linesize, outBuffer,
                         AV_PIX_FMT_YUV420P, pCodecCtx->width, pCodecCtx->height, 1);

    pImgConvertCtx = sws_getContext(pCodecCtx->width, pCodecCtx->height,
                                    pCodecCtx->pix_fmt, pCodecCtx->width, pCodecCtx->height,
                                    AV_PIX_FMT_YUV420P, SWS_BICUBIC, NULL, NULL, NULL);

    qDebug() << "初始化设备成功...";
}

void MainWindow::stopScreen()
{
    this->timer->stop();
    frameIndex = 0;
    videoIndex = -1;
    ret = 0;
    av_write_trailer(ofmtCtx);
    this->freeScreen();
    isOpen = false;
    qDebug() << "暂停录屏";
}

// 开启录屏
void MainWindow::on_pushButton_clicked()
{
    if(isOpen){
        this->stopScreen();
        this->ui->pushButton->setText("重新录屏");
        isOpen = false;
        return;
    }
    isOpen = true;
    this->initScreen();
    this->ui->pushButton->setText(QString("推送录屏中"));
    // 开始定时读帧
    timer->start(1000/25);
}

void MainWindow::readFrame()
{
    qDebug() << "read frame "<< frameIndex;
    this->ui->readFV->setText(QString::number(frameIndex));
    // 3.2 从输入流读取一个packet
    ret = av_read_frame(ifmtCtx, &pkt);
    if (ret < 0)
    {
        qDebug() << "read frame fail";
        return;
    }

    if (pkt.stream_index == videoIndex)
    {
        ret = avcodec_send_packet(pCodecCtx, &pkt);
        if (ret < 0)
        {
            qDebug() << "Decode  fail";
        }

        if (avcodec_receive_frame(pCodecCtx, pFrame) >= 0)
        {
            sws_scale(pImgConvertCtx,
                      (const unsigned char* const*) pFrame->data,
                      pFrame->linesize, 0, pCodecCtx->height, pFrameYUV->data,
                      pFrameYUV->linesize);


            pFrameYUV->format = pCodecCtx->pix_fmt;
            pFrameYUV->width = pCodecCtx->width;
            pFrameYUV->height = pCodecCtx->height;

            ret = avcodec_send_frame(pH264CodecCtx, pFrameYUV);
            if (ret < 0)
            {
                qDebug() << "failed to encode.\n";
                return;
            }

            if (avcodec_receive_packet(pH264CodecCtx, &pkt) >= 0)
            {
                // 设置输出DTS,PTS
                pkt.pts = pkt.dts = frameIndex * (ofmtCtx->streams[0]->time_base.den) /ofmtCtx->streams[0]->time_base.num / 25;
                frameIndex++;

                ret = av_interleaved_write_frame(ofmtCtx, &pkt);
                if (ret < 0)
                {
                    printf("send packet failed: %d\n", ret);
                    this->ui->pushFV->setText(QString::number(frameIndex)+QString("，错误代码：")+QString::number(ret));
                }
                else
                {
                    printf("send packet successfully!   %5d\n", frameIndex);
                    this->ui->pushFV->setText(QString::number(frameIndex));
                }
            }
        }
    }

    av_packet_unref(&pkt);
}

void MainWindow::freeScreen()
{
    if(isOpen)
    {
        avformat_close_input(&ifmtCtx);
        /* close output */
        if (ofmtCtx && !(ofmtCtx->oformat->flags & AVFMT_NOFILE)) {
            avio_closep(&ofmtCtx->pb);
        }
        avformat_free_context(ofmtCtx);

        if (ret < 0 && ret != AVERROR_EOF) {
            qDebug()<< "Error occurred\n";
        }
    }

    qDebug() << "销毁录屏";
}

void MainWindow::on_pushButton_2_clicked()
{
    this->ui->pushUrl->setText(QLatin1String("rtmp://192.168.0.55:1935/hls/myscreen"));
}
