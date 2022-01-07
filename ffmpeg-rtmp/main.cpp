//#include <QCoreApplication>

//int main(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);

//    return a.exec();
//}


#include <iostream>


using namespace std;
//����ͷ�ļ�
extern "C"
{
#include "libavformat/avformat.h"
//����ʱ��
#include "libavutil/time.h"
#include <libavutil/opt.h>

}

int avError(int errNum);

int httRtmp();


static double r2d(AVRational r)
{
    return r.num == 0 || r.den == 0 ? 0. : (double)r.num / (double)r.den;
}
int main() {

    httRtmp();
    getchar();
    return 0;
}

int avError(int errNum) {
    char buf[1024];
    //��ȡ������Ϣ
    av_strerror(errNum, buf, sizeof(buf));
    cout << " failed! " << buf << endl;
    return -1;
}


//���ͱ����ļ���rtmp������
int httRtmp() {
    int videoindex = -1;
    int audioindex = -1;
    //���д���ִ��֮ǰҪ����av_register_all��avformat_network_init
    //��ʼ�����еķ�װ�ͽ��װ flv mp4 mp3 mov������������ͽ���
    av_register_all();

    //��ʼ�������
    avformat_network_init();

    //ʹ�õ����·����ִ���ļ���binĿ¼�¡�test.mp4�ŵ�binĿ¼�¼���
    const char *inUrl = "test.mp4";
    //const char *inUrl = "rtmp://103.229.149.171/myapp/GoProCut";
    //const char *inUrl = "http://liveali.ifeng.com/live/CCTV.m3u8?time=1540543965804http://liveali.ifeng.com/live/CCTV.m3u8?time=1540543965804";
    //����ĵ�ַ
//    const char *outUrl = "rtmp://3891.livepush.myqcloud.com/live/3891_user_b5c2d4be_4397?bizid=3891&txSecret=d90779bae4f294f647c98823eaa20dbf&txTime=5BEB8A45";
    const char *outUrl = "rtmp://127.0.0.1:1935/hls/myscreen";

    //
    //                   ��������������

    //���ļ������װ avformat_open_input
    //AVFormatContext **ps  �����װ�������ġ��������еĸ�ʽ���ݺ����е�IO��������ļ������ļ�IO������Ͷ�Ӧ����IO
    //const char *url  ·��
    //AVInputFormt * fmt ��װ��
    //AVDictionary ** options ��������
    AVFormatContext *ictx = NULL;

    AVOutputFormat *ofmt = NULL;

    //���ļ�������ļ�ͷ
    int ret = avformat_open_input(&ictx, inUrl, NULL, NULL);
    if (ret < 0) {
        return avError(ret);
    }
    cout << "avformat_open_input success!" << endl;
    //��ȡ��Ƶ��Ƶ����Ϣ .h264 flv û��ͷ��Ϣ
    ret = avformat_find_stream_info(ictx, 0);
    if (ret != 0) {
        return avError(ret);
    }
    //��ӡ��Ƶ��Ƶ��Ϣ
    //0��ӡ����  inUrl ��ӡʱ����ʾ��
    av_dump_format(ictx, 0, inUrl, 0);

    //
    //                   �������������

    AVFormatContext * octx = NULL;
    //����������ļ� flv���Բ��������Դ��ļ����жϡ������������봫
    //�������������
    ret = avformat_alloc_output_context2(&octx, NULL, "flv", outUrl);
    if (ret < 0) {
        return avError(ret);
    }
    cout << "avformat_alloc_output_context2 success!" << endl;

    ofmt = octx->oformat;
    cout << "nb_streams  " << ictx->nb_streams << endl;
    int i;
    //for (i = 0; i < ictx->nb_streams; i++) {
    //  cout << "i " << i <<"  "<< ictx->nb_streams<< endl;
    //  AVStream *in_stream = ictx->streams[i];
    //  AVCodec *codec = avcodec_find_decoder(in_stream->codecpar->codec_id);
    //  AVStream *out_stream = avformat_new_stream(octx, codec);
    //  if (!out_stream) {
    //      printf("Failed allocating output stream\n");
    //      ret = AVERROR_UNKNOWN;
    //  }
    //  AVCodecContext *pCodecCtx = avcodec_alloc_context3(codec);
    //  ret = avcodec_parameters_to_context(pCodecCtx, in_stream->codecpar);
    //  if (ret < 0) {
    //      printf("Failed to copy context input to output stream codec context\n");
    //  }
    //  pCodecCtx->codec_tag = 0;
    //  if (octx->oformat->flags & AVFMT_GLOBALHEADER) {
    //      pCodecCtx->flags |= CODEC_FLAG_GLOBAL_HEADER;
    //  }
    //  ret = avcodec_parameters_from_context(out_stream->codecpar, pCodecCtx);
    //  if (ret < 0) {
    //      printf("Failed to copy context input to output stream codec context\n");
    //  }
    //}

    for (i = 0; i < ictx->nb_streams; i++) {

        //��ȡ������Ƶ��
        AVStream *in_stream = ictx->streams[i];
        //Ϊ�����������������Ƶ������ʼ��һ������Ƶ��������
        AVStream *out_stream = avformat_new_stream(octx, in_stream->codec->codec);
        if (!out_stream) {
            printf("δ�ܳɹ���������Ƶ��\n");
            ret = AVERROR_UNKNOWN;
        }

        //��������������������Ϣ copy ������������������
        //ret = avcodec_copy_context(out_stream->codec, in_stream->codec);
        ret = avcodec_parameters_copy(out_stream->codecpar, in_stream->codecpar);
        //ret = avcodec_parameters_from_context(out_stream->codecpar, in_stream->codec);
        //ret = avcodec_parameters_to_context(out_stream->codec, in_stream->codecpar);
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
    for (i = 0; i < ictx->nb_streams; i++) {
        if (ictx->streams[i]->codec->codec_type == AVMEDIA_TYPE_VIDEO) {
            videoindex = i;
            break;
        }
    }

    for (int i = 0; i < ictx->nb_streams; i++)
    {

        if (ictx->streams[i]->codec->codec_type == AVMEDIA_TYPE_AUDIO) {
            audioindex = i;
            break;
        }

    }

    av_dump_format(octx, 0, outUrl, 1);

    //
    //                   ׼������


    //��IO
    ret = avio_open(&octx->pb, outUrl, AVIO_FLAG_WRITE);
    if (ret < 0) {
        avError(ret);
    }

    //д��ͷ����Ϣ
    ret = avformat_write_header(octx, 0);
    if (ret < 0) {
        avError(ret);
    }
    cout << "avformat_write_header Success!" << endl;
    //����ÿһ֡����
    //int64_t pts  [ pts*(num/den)  �ڼ�����ʾ]
    //int64_t dts  ����ʱ�� [P֡(�������һ֡�ı仯) I֡(�ؼ�֡������������) B֡(��һ֡����һ֡�ı仯)]  ����B֡ѹ���ʸ��ߡ�
    //uint8_t *data
    //int size
    //int stream_index
    //int flag
    AVPacket pkt;
    //��ȡ��ǰ��ʱ���  ΢��
    long long start_time = av_gettime();
    long long frame_index = 0;
    const AVBitStreamFilter *filter = av_bsf_get_by_name("aac_adtstoasc");
    while (1) {
        //���������Ƶ��
        AVStream *in_stream, *out_stream;
        //��ȡ����ǰ����//����

        ret = av_read_frame(ictx, &pkt);

        if (ret < 0) {
            cout << "��ȡ����ǰ����shibai!" << endl;
            break;
        }

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
            //��ȡ����������ݣ���ͬһ��pkt
            ret = av_bsf_receive_packet(bsf_ctx, &pkt);
            if (ret < 0) {
                printf("chulishibai\n");
            }
            av_bsf_free(&bsf_ctx);
        }

        ret = av_interleaved_write_frame(octx, &pkt);


        if (ret < 0) {
            printf("�������ݰ�����\n");
            break;
        }

        //�ͷ�
        av_free_packet(&pkt);
    }

    return 0;
}