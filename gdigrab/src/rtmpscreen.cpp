#include "rtmpscreen.h"
#include <QDebug>

int avError(int errNum) {
    char buf[1024];
    //��ȡ������Ϣ
    av_strerror(errNum, buf, sizeof(buf));
    cout << " failed! " << buf << endl;
    return -1;
}

RtmpScreen::RtmpScreen()
{

}
RtmpScreen::~RtmpScreen()
{

}

int RtmpScreen::httRtmp(AVFormatContext *ictx)
{
    int ret = -1;
    this->ictx = ictx;
    //
    //  ������������

    AVOutputFormat *ofmt = NULL;
    //��ʼ�������
    avformat_network_init();

//    AVDictionary *dict = NULL;
//    av_dict_set(&dict, "rtsp_transport", "tcp", 0);
//    av_dict_set(&dict, "vcodec", "h264", 0);
//    av_dict_set(&dict, "f", "rtmp", 0);

    ret = avformat_alloc_output_context2(&octx, NULL, "flv", outUrl);
    if (ret < 0) {
        return avError(ret);
    }
    qDebug() << "avformat_alloc_output_context2 success!";
    ofmt = octx->oformat;
    qDebug() << "nb_streams  " << ictx->nb_streams << endl;
    int i=0;
    for (i = 0; i < ictx->nb_streams; i++) {
        //��ȡ������Ƶ��
        AVStream *in_stream = ictx->streams[i];
        //Ϊ����������������Ƶ������ʼ��һ������Ƶ��������
        AVStream *out_stream = avformat_new_stream(octx, in_stream->codec->codec);
        if (!out_stream) {
            printf("δ�ܳɹ��������Ƶ��\n");
            ret = AVERROR_UNKNOWN;
        }

        //��������������������Ϣ copy ������������������
        ret = avcodec_parameters_copy(out_stream->codecpar, in_stream->codecpar);
        if (ret < 0) {
            printf("copy �������������ʧ��\n");
        }
        out_stream->codecpar->codec_tag = 0;

        out_stream->codec->codec_tag = 0;
        if (octx->oformat->flags & AVFMT_GLOBALHEADER) {
            out_stream->codec->flags = out_stream->codec->flags | 0;
        }
    }

    //���������ݵ�����ѭ��
    for (i = 0; i < ictx->nb_streams; i++)
    {
        if (ictx->streams[i]->codec->codec_type == AVMEDIA_TYPE_VIDEO) {
            videoindex = i;
            break;
        }
    }

//    for (int i = 0; i < ictx->nb_streams; i++)
//    {

//        if (ictx->streams[i]->codec->codec_type == AVMEDIA_TYPE_AUDIO) {
//            audioindex = i;
//            break;
//        }

//    }

    qDebug()<<"videoindex is "<<videoindex;
    av_dump_format(octx, 0, outUrl, 1);
    //��IO
    ret = avio_open(&octx->pb, outUrl, AVIO_FLAG_WRITE);
    if (ret < 0) {
        avError(ret);
    }


    //д��ͷ����Ϣ
    ret = avformat_write_header(octx, NULL);
    if (ret < 0) {
        avError(ret);
        return -1;
    }
    cout << "avformat_write_header Success!" << endl;

    //��ȡ��ǰ��ʱ���  ΢��
    start_time = av_gettime();
    frame_index = 0;
    filter = av_bsf_get_by_name("aac_adtstoasc");

    return 0;
}

int RtmpScreen::pushRtmp(AVPacket pkt,int videoindex)
{

    /*
    PTS��Presentation Time Stamp����ʾ����ʱ��
    DTS��Decoding Time Stamp������ʱ��
    */
    //û����ʾʱ�䣨����δ����� H.264 ��
    if (pkt.pts == AV_NOPTS_VALUE) {
        cout << "��ȡ����ǰ����AV_NOPTS_VALUE!" << endl;
        //AVRational time_base��ʱ����ͨ����ֵ���԰�PTS��DTSת��Ϊ������ʱ�䡣
        AVRational time_base1 = ictx->streams[videoindex]->time_base;

        //������֮֡���ʱ��
        /*
        r_frame_rate ����֡����  ������̫����
        av_q2d ת��Ϊdouble����
        */
        int64_t calc_duration = (double)AV_TIME_BASE / av_q2d(ictx->streams[videoindex]->r_frame_rate);

        //���ò���
        pkt.pts = (double)(frame_index*calc_duration) / (double)(av_q2d(time_base1)*AV_TIME_BASE);
        pkt.dts = pkt.pts;
        pkt.duration = (double)calc_duration / (double)(av_q2d(time_base1)*AV_TIME_BASE);
    }

    //��ʱ
    if (pkt.stream_index == videoindex) {
        cout << "��ʱ!" << endl;
        AVRational time_base = ictx->streams[videoindex]->time_base;
        AVRational time_base_q = {1,AV_TIME_BASE};
        //������Ƶ����ʱ��//΢��
        int64_t pts_time = av_rescale_q(pkt.dts, time_base, time_base_q);
        //����ʵ����Ƶ�Ĳ���ʱ��
        int64_t now_time = av_gettime() - start_time;

        AVRational avr = ictx->streams[videoindex]->time_base;
        cout << avr.num << "den= " << avr.den << " dts= " << pkt.dts << " pts= " << pkt.pts << " pts_time  " << pts_time << endl;
        cout << "dts=" << pkt.dts << "now_time=" << now_time << "pts_time=" << pts_time << endl;

        if (pts_time > now_time) {
            cout << "˯��һ��ʱ��="<< (pts_time - now_time) << endl;
            //˯��һ��ʱ�䣨Ŀ�����õ�ǰ��Ƶ��¼�Ĳ���ʱ����ʵ��ʱ��ͬ����
            av_usleep((unsigned int)(pts_time - now_time));
        }

    }
    cout << "dd====" << endl;

    //���������Ƶ��
    AVStream *in_stream, *out_stream;
    in_stream = ictx->streams[pkt.stream_index];
    out_stream = octx->streams[pkt.stream_index];

    //������ʱ������ָ��ʱ���
    pkt.pts = av_rescale_q_rnd(pkt.pts, in_stream->time_base, out_stream->time_base, (AVRounding)(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
    pkt.dts = av_rescale_q_rnd(pkt.dts, in_stream->time_base, out_stream->time_base, (AVRounding)(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
    pkt.duration = (int)av_rescale_q(pkt.duration, in_stream->time_base, out_stream->time_base);
    //�ֽ�����λ�ã�-1 ��ʾ��֪���ֽ���λ��
    pkt.pos = -1;
    if (pkt.stream_index == videoindex ) {
        printf("Send %8d video frames to output URL\n", frame_index);
        frame_index++;
    }

    //����������ķ��ͣ����ַ���ͣ�//���Ͱ��ļ�
    //����hls�а���adts heard ������ acc_adtstoasc
    if (pkt.stream_index == 4) {
        AVBSFContext *bsf_ctx;
        if (!filter)
        {
            av_log(NULL, AV_LOG_ERROR, "Unkonw bitstream filter");
        }
        //2.�����������ڴ�
        int ret = av_bsf_alloc(filter, &bsf_ctx);

        //��pkt�������͵�filter��ȥ
        ret = av_bsf_send_packet(bsf_ctx, &pkt);
        if (ret < 0) {
            printf("chulishibai\n");
        }
        //��ȡ���������ݣ���ͬһ��pkt
        ret = av_bsf_receive_packet(bsf_ctx, &pkt);
        if (ret < 0) {
            printf("chulishibai\n");
        }
        av_bsf_free(&bsf_ctx);
    }

    int ret = av_interleaved_write_frame(octx, &pkt);

    if (ret < 0) {
        printf("�������ݰ�����\n");
    }

    //�ͷ�
    av_free_packet(&pkt);
    return 0;
}

double RtmpScreen::r2d(AVRational r)
{
    return r.num == 0 || r.den == 0 ? 0. : (double)r.num / (double)r.den;
}
