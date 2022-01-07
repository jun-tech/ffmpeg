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
    // 初始化设备
    avdevice_register_all();
    pFormatCtx  = avformat_alloc_context();
    qDebug() << "初始化设备成功...";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(isOpen){
        qDebug() << "程序在跑，不能继续点击";
        return;
    }
    isOpen = true;

    //设置帧率为5
    av_dict_set(&options,"framerate","5",0);
    AVInputFormat *ifmt = av_find_input_format("gdigrab");
    if(avformat_open_input(&pFormatCtx,"desktop",ifmt,&options)!=0) {
        qDebug() << "Couldn't open input stream.\n";
        return;
    }
    //查找流信息
    if(avformat_find_stream_info(pFormatCtx,NULL)<0) {
        qDebug() << "Couldn't find stream information.\n";
        return;
    }
    //视频流
    for(int i=0; i<pFormatCtx->nb_streams; i++) {
        if(pFormatCtx->streams[i]->codec->codec_type==AVMEDIA_TYPE_VIDEO) {
            videoindex=i;
            break;
        }
    }
    qDebug() << "Video Stream index is " <<  videoindex;
    if(videoindex==-1) {
        qDebug() << "Didn't find a video stream.\n";
        return ;
    }
    //获取帧率
    fps = pFormatCtx->streams[videoindex]->avg_frame_rate;
    //解码器上下文
    pCodecCtx=pFormatCtx->streams[videoindex]->codec;
    //查找解码器
    pCodec=avcodec_find_decoder(pCodecCtx->codec_id);
    if(pCodec==NULL) {
        qDebug() << "Codec not found.\n";
        return ;
    }
    //打开解码器
    if(avcodec_open2(pCodecCtx, pCodec,NULL)<0) {
        qDebug() << "Could not open codec.\n";
        return ;
    }
    // 读取帧
//    if(av_read_frame(pFormatCtx, packet) >= 0) {
//          qDebug() << "read frame.\n";
//        if(packet->stream_index == videoindex) {

//        }
//    }


    // 开始定时读帧
    timer->start(3000);

}

void MainWindow::readFrame()
{
    qDebug() << "read frame";
//    if(av_read_frame(pFormatCtx, packet) >= 0) {
//         qDebug() << "read finish frame";
////        if(packet->stream_index == videoindex) {
////            qDebug() << "find video frame";
//////            if(avcodec_decode_video2(pCodecCtx, pFrame, &got_picture, packet) < 0) {
//////                printf("Decode Error.\n");
//////                return false;
//////            }
////        }
//    }
}
