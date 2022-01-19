#include <iostream>
#include <fstream>

//#define NOVIDEO     //��������Ƶ
//#define NOSAVEYUV   //������YUV
//#define SWSCALE     //��Ƶ֡ת��,�����NOVIDEO��HWDECODE
//#define NOAUDIO     //��������Ƶ
//#define NOSAVEPCM   //������PCM
//#define RESAMPLE    //��Ƶ�ز���,�����NOAUDIO
//#define AVIO        //ʹ��AVIO
//#define ENCODE      //����,�����NOVIDEO����NOAUDIO,��Ƶֻ�ڽ���HWDECODE�����˱���
//#define REMUX       //ת��װ
//#define MUXING      //��װ,���ENCODE
#define HWDECODE    //Ӳ����

#ifdef __cplusplus

extern "C"
{

#endif

// FFmpeg ͷ�ļ�
#include <libavformat/avformat.h>
#include <libavformat/avio.h>
#include <libswscale/swscale.h> // sws_cale
#include <libswresample/swresample.h> // swr_alloc_set_opts
#include <libavutil/file.h> // av_file_map
#include <libavutil/imgutils.h> // av_image_alloc
#include <libavutil/opt.h> // av_opt_set

#ifdef __cplusplus

}
// C++��ʹ��av_err2str��
char av_error[AV_ERROR_MAX_STRING_SIZE] = { 0 };
#define av_err2str(errnum) \
    av_make_error_string(av_error, AV_ERROR_MAX_STRING_SIZE, errnum)

#endif

// �Զ�������������ڴ�buf�ʹ�С
typedef struct __BUFER_DATA__
{
    uint8_t* buf;
    size_t size;
}Bufdata;

// �Զ����ļ�������
int read_packet(void *opaque, uint8_t *buf, int buf_size)
{
    Bufdata* bd = static_cast<Bufdata*>(opaque);
    buf_size = FFMIN(buf_size, bd->size);
    if (buf_size == 0)
    {
        return AVERROR_EOF;
    }

    memcpy(buf, bd->buf, buf_size);
    bd->buf += buf_size;
    bd->size -= buf_size;

    return buf_size;
}

int main(int argc, char* argv[])
{
    // DECODE
    AVFormatContext* fmt_ctx = nullptr;
    AVDictionaryEntry* dic = nullptr;
    AVCodecContext *vcodectx = nullptr, *acodectx = nullptr;
    AVCodecParameters *vcodecpar = nullptr, *acodecpar = nullptr;
    AVCodec *vcodec = nullptr, *acodec = nullptr;
    AVPacket* pkt = nullptr;
    AVFrame* frame = nullptr;
    uint8_t* pt[4] = { 0 };
    int lz[4] = { 0 };
    int s = 0;
    std::ofstream out_yuv, out_hw, out_pcm, out_bgr, out_pcm2, out_h264, out_mp3;
    const char* in = "test.mp4";
    int vindex = -1, aindex = -1;
    int ret = 0;
    // avio
    uint8_t *buf = nullptr, *aviobuf = nullptr;
    size_t size = 0;
    Bufdata bd = { 0 };
    AVIOContext* avioctx = nullptr;
    // swscale
    SwsContext* swsctx = nullptr;
    uint8_t* pointers[4] = { 0 };
    int linesizes[4] = { 0 };
    // resample
    SwrContext* swrctx = nullptr;
    int samplessize = 0;
    uint8_t * sambuf = nullptr;
    // ENCODE
    AVCodecContext *ovcodectx = nullptr, *oacodectx = nullptr;
    AVCodec *ovcodec = nullptr, *oacodec = nullptr;
    AVDictionary* param = nullptr;
    AVPacket* opkt = nullptr;
    // REMUX
    AVFormatContext* ofmt_ctx = nullptr;
    AVStream *ovstream = nullptr, *oastream = nullptr, *streamtmp = nullptr;
    // MUXING
    AVFormatContext* ofmt_ctx2 = nullptr;
    AVStream *ovstream2 = nullptr, *oastream2 = nullptr;
    // HWDECODE
    AVBufferRef* hwbufref = nullptr;
    AVFrame* hwframe = nullptr;
    uint8_t* hwframebuf = nullptr;
    int hwbufsize = 0;

    out_yuv.open("out.yuv", std::ios::binary | std::ios::trunc);
    out_hw.open("out2.yuv", std::ios::binary | std::ios::trunc);
    out_pcm.open("out.pcm", std::ios::binary | std::ios::trunc);
    out_bgr.open("out.bgr", std::ios::binary | std::ios::trunc);
    out_pcm2.open("out2.pcm", std::ios::binary | std::ios::trunc);
    out_h264.open("out.h264", std::ios::binary | std::ios::trunc);
    out_mp3.open("out.mp3", std::ios::binary | std::ios::trunc);
    if (!out_yuv.is_open() || !out_hw.is_open() || !out_pcm.is_open() || !out_bgr.is_open() || !out_pcm2.is_open() || !out_h264.is_open() || !out_mp3.is_open())
    {
        std::cerr << "����/������ļ�ʧ��" << std::endl;
        goto END;
    }

    // ��־
    av_log_set_level(AV_LOG_ERROR);

    // ������
#ifdef AVIO
    // �ڴ�ӳ��
    ret = av_file_map("in.mkv", &buf, &size, 0, nullptr);
    if (ret < 0)
    {
        std::cerr << "av_file_map err �� " << av_err2str(ret) << std::endl;
        goto END;
    }
    fmt_ctx = avformat_alloc_context();
    if (fmt_ctx == nullptr)
    {
        std::cerr << "avformat_alloc_context err" << std::endl;
        goto END;
    }
    aviobuf = static_cast<uint8_t*>(av_malloc(1024));
    if (aviobuf == nullptr)
    {
        std::cerr << "av_malloc err" << std::endl;
        goto END;
    }
    bd.buf = buf;
    bd.size = size;
    avioctx = avio_alloc_context(aviobuf, 1024, 0, &bd, read_packet, nullptr, nullptr);    if (avioctx == nullptr)    {        std::cerr << "avio_alloc_context err" << std::endl;
        goto END;    }    fmt_ctx->pb = avioctx;
    ret = avformat_open_input(&fmt_ctx, nullptr, nullptr, nullptr);
    if (ret < 0)
    {
        std::cerr << "avformat_open_input err �� " << av_err2str(ret) << std::endl;
        goto END;
    }
#else
    ret = avformat_open_input(&fmt_ctx, in, nullptr, nullptr);
    if (ret < 0)
    {
        std::cerr << "avformat_open_input err �� " << av_err2str(ret) << std::endl;
        goto END;
    }
#endif // AVIO

    std::cout << "get metadata : " << std::endl;
    while ((dic = av_dict_get(fmt_ctx->metadata, "", dic, AV_DICT_IGNORE_SUFFIX)) != nullptr)
    {
        std::cerr << dic->key << " : " << dic->value << std::endl;
    }

    // ��������Ϣ�����������Ԥ����
    ret = avformat_find_stream_info(fmt_ctx, nullptr);
    if (ret < 0)
    {
        std::cerr << "avformat_find_stream_info err �� " << av_err2str(ret) << std::endl;
        goto END;
    }

    // ��ӡ������Ϣ
    av_dump_format(fmt_ctx, 0, fmt_ctx->url, 0);

    // ������
    ret = av_find_best_stream(fmt_ctx, AVMEDIA_TYPE_VIDEO, -1, -1, &vcodec, 0);
    if (ret < 0)
    {
        std::cerr << "av_find_best_stream err �� " << av_err2str(ret) << std::endl;
    }
    vindex = ret;
    ret = av_find_best_stream(fmt_ctx, AVMEDIA_TYPE_AUDIO, -1, -1, &acodec, 0);
    if (ret < 0)
    {
        std::cerr << "av_find_best_stream err �� " << av_err2str(ret) << std::endl;
    }
    aindex = ret;

    // ���ҽ�����
    if (vindex != -1)
    {
        // ׼���򿪽�����
        vcodecpar = fmt_ctx->streams[vindex]->codecpar;
        vcodectx = avcodec_alloc_context3(vcodec);
        ret = avcodec_parameters_to_context(vcodectx, vcodecpar);// ��������
        if (ret < 0)
        {
            std::cerr << "avcodec_parameters_to_context err �� " << av_err2str(ret) << std::endl;
            goto END;
        }
#ifdef HWDECODE
        // ��ѯӲ����֧��
        std::cout << "support hwdecode : " << std::endl;
        auto type = av_hwdevice_iterate_types(AV_HWDEVICE_TYPE_NONE);;
        for (; type != AV_HWDEVICE_TYPE_NONE; type = av_hwdevice_iterate_types(type))
        {
            std::cout << av_hwdevice_get_type_name(type) << std::endl;
        }
        for (int i = 0;; i++)
        {
            const AVCodecHWConfig* config = avcodec_get_hw_config(vcodec, i);
            if (config == nullptr)
            {
                std::cerr << "not support" << std::endl;
                goto END;
            }
            if (config->methods & AV_CODEC_HW_CONFIG_METHOD_HW_DEVICE_CTX &&
                config->device_type == AV_HWDEVICE_TYPE_DXVA2)
            {
                // ֧��AV_HWDEVICE_TYPE_DXVA2
                break;
            }
        }

        // Ӳ��������
        ret = av_hwdevice_ctx_create(&hwbufref, AV_HWDEVICE_TYPE_DXVA2, nullptr, nullptr, 0);
        if (ret < 0)
        {
            std::cerr << "av_hwdevice_ctx_create err �� " << av_err2str(ret) << std::endl;
            goto END;
        }
        vcodectx->hw_device_ctx = av_buffer_ref(hwbufref);
        if (vcodectx->hw_device_ctx == nullptr)
        {
            std::cerr << "av_buffer_ref err"  << std::endl;
            goto END;
        }

        // Ӳ��֡�ṹ
        hwframe = av_frame_alloc();
        if (hwframe == nullptr)
        {
            std::cerr << "av_frame_alloc err" << std::endl;
            goto END;
        }
        hwbufsize = av_image_get_buffer_size(AV_PIX_FMT_NV12/*���������nv12*/, vcodectx->width, vcodectx->height, 1);
        if (hwbufsize < 0)
        {
            std::cerr << "av_image_get_buffer_size err �� " << av_err2str(ret) << std::endl;
            goto END;
        }
        hwframebuf = static_cast<uint8_t*>(av_malloc(hwbufsize));
        if (hwframebuf == nullptr)
        {
            std::cerr << "av_malloc err �� " << std::endl;
            goto END;
        }
#endif // HWDECODE
        // �򿪽�����
        ret = avcodec_open2(vcodectx, vcodec, nullptr);
        if (ret < 0)
        {
            std::cerr << "avcodec_open2 err �� " << av_err2str(ret) << std::endl;
            goto END;
        }
    }

    if (aindex != -1)
    {
        // ׼���򿪽�����
        acodecpar = fmt_ctx->streams[aindex]->codecpar;
        acodectx = avcodec_alloc_context3(acodec);
        ret = avcodec_parameters_to_context(acodectx, acodecpar);// ��������
        if (ret < 0)
        {
            std::cerr << "avcodec_parameters_to_context err �� " << av_err2str(ret) << std::endl;
            goto END;
        }

        // �򿪽�����
        ret = avcodec_open2(acodectx, acodec, nullptr);
        if (ret < 0)
        {
            std::cerr << "avcodec_open2 err �� " << av_err2str(ret) << std::endl;
            goto END;
        }
    }

    // ����AVPacket
    pkt = av_packet_alloc();
    if (pkt == nullptr)
    {
        std::cerr << "av_packet_alloc err" << std::endl;
        goto END;
    }
    av_init_packet(pkt);

    // ����AVFrame
    frame = av_frame_alloc();
    if (frame == nullptr)
    {
        std::cerr << "av_frame_alloc err" << std::endl;
        goto END;
    }

    // ���뱣�����֡���ڴ�
    ret = av_image_alloc(pt, lz, vcodectx->width, vcodectx->height, vcodectx->pix_fmt, 1);
    if (ret < 0)
    {
        std::cerr << "av_image_alloc err : " << av_err2str(ret) << std::endl;
        goto END;
    }
    // ��¼�ڴ��С
    s = ret;

#ifdef SWSCALE
    // ����ת��������
    swsctx = sws_getContext(vcodectx->width, vcodectx->height, AV_PIX_FMT_YUV420P, 320, 240, AV_PIX_FMT_RGB24, SWS_BILINEAR, nullptr, nullptr, nullptr);
    if (swsctx == nullptr)
    {
        std::cerr << "sws_getContext err" << std::endl;
        goto END;
    }
    // �����ڴ�ռ�
    // ffmpe��ܶ����Ż�����һ�ζ�ȡ��д������ݿ��ܱ��������е�Ҫ�ࣨĳЩ����Ҫ�󣩣�����ffmpeg�������ڴ�����һ�㶼Ӧ����av_malloc���䣬�������ͨ��������ڴ�����Ҫ��Ķ࣬����Ϊ��Ӧ����Щ����
    ret = av_image_alloc(pointers, linesizes, 320, 240, AV_PIX_FMT_RGB24, 16);
    if (ret < 0)
    {
        std::cerr << "av_image_alloc err �� " << av_err2str(ret) << std::endl;
        goto END;
    }
#endif // SWSCALE

#ifdef RESAMPLE
    // ����ת��������
    swrctx = swr_alloc_set_opts(NULL, av_get_default_channel_layout(acodectx->channels), AV_SAMPLE_FMT_S16,
                acodectx->sample_rate, av_get_default_channel_layout(acodectx->channels), acodectx->sample_fmt,
                acodectx->sample_rate, 0, NULL);
    if (swrctx == nullptr)
    {
        std::cerr << "swr_alloc_set_opts" << std::endl;
        goto END;
    }
    // ��ʼ��ת��������
    ret = swr_init(swrctx);
    if (ret < 0)
    {
        std::cerr << "swr_init err : " << av_err2str(ret) << std::endl;
        goto END;
    }
    //����1s�����ݴ�С��ʹ�������㹻��
    samplessize = av_samples_get_buffer_size(nullptr, acodectx->channels, acodectx->sample_rate, AV_SAMPLE_FMT_S16, 1);
    if (samplessize < 0)
    {
        std::cerr << "av_samples_get_buffer_size err : " << av_err2str(samplessize) << std::endl;
        goto END;
    }
    sambuf = static_cast<uint8_t*>(av_mallocz(samplessize));
    if (sambuf == nullptr)
    {
        std::cerr << "av_mallocz err" << std::endl;
        goto END;
    }
#endif // RESAMPLE

#ifdef ENCODE
    //---ENCODEVIDEO
    // ���ұ�����
    ovcodec = avcodec_find_encoder(AV_CODEC_ID_H264);
    if (ovcodec == nullptr)
    {
        std::cerr << "avcodec_find_encoder AV_CODEC_ID_H264 err" << std::endl;
        goto END;
    }
    ovcodectx = avcodec_alloc_context3(ovcodec);
    if (ovcodectx == nullptr)
    {
        std::cerr << "avcodec_alloc_context3 err" << std::endl;
        goto END;
    }
    // ���ò���
    ovcodectx->bit_rate = vcodectx->bit_rate == 0 ? 850000 : vcodectx->bit_rate;
    ovcodectx->width = vcodectx->width;
    ovcodectx->height = vcodectx->height;
    ovcodectx->time_base = { 1, 25 };
    ovcodectx->framerate = vcodectx->framerate;
    ovcodectx->gop_size = vcodectx->gop_size;
    ovcodectx->max_b_frames = vcodectx->max_b_frames;
    ovcodectx->pix_fmt = AV_PIX_FMT_YUV420P;

    // --preset�Ĳ�����Ҫ���ڱ����ٶȺ�������ƽ�⣬��ultrafast��superfast��veryfast��faster��fast��medium��slow��slower��veryslow��placebo��10��ѡ��ӿ쵽����
    ret = av_dict_set(&param, "preset", "medium", 0);
    if (ret < 0)
    {
        std::cerr << "av_opt_set err �� " << av_err2str(ret) << std::endl;
        goto END;
    }
    ret = av_dict_set(&param, "tune", "zerolatency", 0);  //ʵ��ʵʱ���룬��Ч���������С
    if (ret < 0)
    {
        std::cerr << "av_opt_set err �� " << av_err2str(ret) << std::endl;
        goto END;
    }
    //ret = av_dict_set(&param, "profile", "main", 0);
    //if (ret < 0)
    //{
    //    std::cerr << "av_opt_set err �� " << av_err2str(ret) << std::endl;
    //    goto END;
    //}
    ret = avcodec_open2(ovcodectx, ovcodec, &param);
    if (ret < 0)
    {
        std::cerr << "avcodec_open2 err �� " << av_err2str(ret) << std::endl;
        goto END;
    }
    //ENCODEVIDEO---

    //---ENCODEAUDIO
    // ���ұ�����
    oacodec = avcodec_find_encoder(AV_CODEC_ID_MP3);
    if (oacodec == nullptr)
    {
        std::cerr << "avcodec_find_encoder AV_CODEC_ID_MP3 err" << std::endl;
        goto END;
    }
    oacodectx = avcodec_alloc_context3(oacodec);
    if (oacodectx == nullptr)
    {
        std::cerr << "avcodec_alloc_context3 err" << std::endl;
        goto END;
    }
    // ���ò���
    oacodectx->bit_rate = acodectx->bit_rate;
    oacodectx->sample_fmt = acodectx->sample_fmt;
    oacodectx->sample_rate = acodectx->sample_rate;
    oacodectx->channel_layout = acodectx->channel_layout;
    oacodectx->channels = acodectx->channels;
    ret = avcodec_open2(oacodectx, oacodec, nullptr);
    if (ret < 0)
    {
        std::cerr << "avcodec_open2 err �� " << av_err2str(ret) << std::endl;
        goto END;
    }
    //ENCODEAUDIO---

    opkt = av_packet_alloc();
    if (opkt == nullptr)
    {
        std::cerr << "av_packet_alloc err" << std::endl;
        goto END;
    }
    av_init_packet(opkt);
#endif // ENCODE

#ifdef REMUX
    // �������
    ret = avformat_alloc_output_context2(&ofmt_ctx, nullptr, nullptr, "out.mp4");
    if (ret < 0)
    {
        std::cerr << "avformat_alloc_output_context2 err : " << av_err2str(ret) << std::endl;
        goto END;
    }
    //������
    ovstream = avformat_new_stream(ofmt_ctx, nullptr);
    oastream = avformat_new_stream(ofmt_ctx, nullptr);
    if (ovstream == nullptr || oastream == nullptr)
    {
        std::cerr << "avformat_new_stream err" << std::endl;
        goto END;
    }
    //����������Ϣ
    ret = avcodec_parameters_from_context(ovstream->codecpar, vcodectx);
    if (ret < 0)
    {
        std::cerr << "avcodec_parameters_from_context err : " << av_err2str(ret) << std::endl;
        goto END;
    }
    ret = avcodec_parameters_from_context(oastream->codecpar, acodectx);
    if (ret < 0)
    {
        std::cerr << "avcodec_parameters_from_context err : " << av_err2str(ret) << std::endl;
        goto END;
    }
    av_dump_format(ofmt_ctx, 0, ofmt_ctx->url, 1);
    // ��ǲ���Ҫ���±����
    ovstream->codecpar->codec_tag = 0;
    oastream->codecpar->codec_tag = 0;
    // ��io
    if (!(ofmt_ctx->flags & AVFMT_NOFILE))
    {
        // Demuxer will use avio_open, no opened file should be provided by the caller./
        ret = avio_open(&ofmt_ctx->pb, "out.mp4", AVIO_FLAG_WRITE);
        if (ret < 0)
        {
            std::cerr << "avio_open err : " << av_err2str(ret) << std::endl;
            goto END;
        }
    }
    // д�ļ�ͷ
    ret = avformat_write_header(ofmt_ctx, nullptr);
    if (ret < 0)
    {
        std::cerr << "avformat_write_header err : " << av_err2str(ret) << std::endl;
        goto END;
    }
#endif // REMUX

#ifdef MUXING
    // �������
    ret = avformat_alloc_output_context2(&ofmt_ctx2, nullptr, nullptr, "out2.mp4");
    if (ret < 0)
    {
        std::cerr << "avformat_alloc_output_context2 err : " << av_err2str(ret) << std::endl;
        goto END;
    }
    //������
    ovstream2 = avformat_new_stream(ofmt_ctx2, nullptr);
    oastream2 = avformat_new_stream(ofmt_ctx2, nullptr);
    if (ovstream2 == nullptr || oastream2 == nullptr)
    {
        std::cerr << "avformat_new_stream err" << std::endl;
        goto END;
    }
    //����������Ϣ
    ret = avcodec_parameters_from_context(ovstream2->codecpar, ovcodectx);
    if (ret < 0)
    {
        std::cerr << "avcodec_parameters_from_context err : " << av_err2str(ret) << std::endl;
        goto END;
    }
    ret = avcodec_parameters_from_context(oastream2->codecpar, oacodectx);
    if (ret < 0)
    {
        std::cerr << "avcodec_parameters_from_context err : " << av_err2str(ret) << std::endl;
        goto END;
    }
    av_dump_format(ofmt_ctx2, 0, ofmt_ctx2->url, 1);
    // ��ǲ���Ҫ���±����
    ovstream2->codecpar->codec_tag = 0;
    oastream2->codecpar->codec_tag = 0;
    // ��io
    if (!(ofmt_ctx2->flags & AVFMT_NOFILE))
    {
        ret = avio_open(&ofmt_ctx2->pb, "out2.mp4", AVIO_FLAG_WRITE);
        if (ret < 0)
        {
            std::cerr << "avio_open err : " << av_err2str(ret) << std::endl;
            goto END;
        }
    }
    // д�ļ�ͷ
    ret = avformat_write_header(ofmt_ctx2, nullptr);
    if (ret < 0)
    {
        std::cerr << "avformat_write_header err : " << av_err2str(ret) << std::endl;
        goto END;
    }
#endif // MUXING

    // �������ȡ����
    while (av_read_frame(fmt_ctx, pkt) >= 0)
    {
        if (pkt->stream_index == vindex)
        {
#ifndef NOVIDEO
            // ������Ƶ֡
            ret = avcodec_send_packet(vcodectx, pkt);
            if (ret < 0)
            {
                std::cerr << "avcodec_send_packet err �� " << av_err2str(ret) << std::endl;
                break;
            }
            while (ret >= 0)
            {
                ret = avcodec_receive_frame(vcodectx, frame);
                if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
                {
                    break;
                }
                else if (ret < 0)
                {
                    std::cerr << "avcodec_receive_frame err �� " << av_err2str(ret) << std::endl;
                    break;
                }
                else
                {
                    // �õ���������
                    if (frame->format == AV_PIX_FMT_YUV420P)
                    {
#ifndef NOSAVEYUV
                        //out_yuv.write(reinterpret_cast<const char*>(frame->data[0]), frame->linesize[0] * frame->height);
                        //out_yuv.write(reinterpret_cast<const char*>(frame->data[1]), frame->linesize[1] * frame->height / 2);
                        //out_yuv.write(reinterpret_cast<const char*>(frame->data[2]), frame->linesize[2] * frame->height / 2);
                        // ���ַ�ʽ�����Զ�ȥ�������ұ߶�������
                        av_image_copy(pt, lz,
                            (const uint8_t* *)frame->data, frame->linesize,
                            static_cast<AVPixelFormat>(frame->format), frame->width, frame->height);
                        out_yuv.write(reinterpret_cast<const char*>(pt[0]), s);
#endif // NOSAVEYUV
#ifdef SWSCALE
                        // ��Ƶ֡��ʽת��
                        ret = sws_scale(swsctx, frame->data, frame->linesize, 0, frame->height, pointers, linesizes);
                        if (ret <= 0)
                        {
                            std::cerr << "sws_scale err �� " << av_err2str(ret) << std::endl;
                            break;
                        }
                        // ��ת
                        pointers[0] += linesizes[0] * (ret - 1);
                        linesizes[0] *= -1;
                        out_bgr.write(reinterpret_cast<const char*>(pointers[0]), linesizes[0] * ret);

#endif // SWSCALE
#ifdef ENCODE
                        ret = avcodec_send_frame(ovcodectx, frame);
                        if (ret < 0)
                        {
                            std::cerr << "avcodec_send_frame err �� " << av_err2str(ret) << std::endl;
                            break;
                        }
                        while (ret >= 0)
                        {
                            ret = avcodec_receive_packet(ovcodectx, opkt);
                            if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
                            {
                                break;
                            }
                            else if (ret < 0)
                            {
                                std::cerr << "avcodec_receive_packet err �� " << av_err2str(ret) << std::endl;
                                break;
                            }
                            else
                            {
                                // �õ���������
                                out_h264.write(reinterpret_cast<const char*>(opkt->data), opkt->size);
#ifdef MUXING
                                opkt->pts = av_rescale_q(opkt->pts, fmt_ctx->streams[vindex]->time_base, ovstream2->time_base);
                                opkt->dts = av_rescale_q(opkt->dts, fmt_ctx->streams[vindex]->time_base, ovstream2->time_base);
                                opkt->duration = av_rescale_q(opkt->duration, fmt_ctx->streams[vindex]->time_base, ovstream2->time_base);
                                opkt->pos = -1;
                                opkt->stream_index = 0;
                                ret = av_interleaved_write_frame(ofmt_ctx2, opkt);
                                if (ret < 0)
                                {
                                    std::cerr << "av_interleaved_write_frame err �� " << av_err2str(ret) << std::endl;
                                }
#endif // MUXING
                                av_packet_unref(opkt);
                            }
                        }
#endif // ENCODE
                    }
#ifdef HWDECODE
                    else if (frame->format == AV_PIX_FMT_DXVA2_VLD/*AV_HWDEVICE_TYPE_DXVA2��Ӧ�������ʽ*/)
                    {
                        ret = av_hwframe_transfer_data(hwframe, frame, 0);
                        if (ret < 0)
                        {
                            std::cerr << "av_hwframe_transfer_data err �� " << av_err2str(ret) << std::endl;
                            break;
                        }
                        ret = av_image_copy_to_buffer(static_cast<uint8_t*>(hwframebuf), hwbufsize,
                            (const uint8_t * const*)hwframe->data,
                            hwframe->linesize, static_cast<AVPixelFormat>(hwframe->format),
                            hwframe->width, hwframe->height, 1);
                        if (ret <= 0)
                        {
                            std::cerr << "av_image_copy_to_buffer err �� " << av_err2str(ret) << std::endl;
                            break;
                        }
                        out_hw.write(reinterpret_cast<const char*>(hwframebuf), ret);
                    }
#endif // HWDECODE
                }
            }
#endif // NOVIDEO
        }
        else if (pkt->stream_index == aindex)
        {
#ifndef NOAUDIO
            // ������Ƶ֡
            ret = avcodec_send_packet(acodectx, pkt);
            if (ret < 0)
            {
                std::cerr << "avcodec_send_packet err �� " << av_err2str(ret) << std::endl;
                break;
            }
            while (ret >= 0)
            {
                ret = avcodec_receive_frame(acodectx, frame);
                if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
                {
                    break;
                }
                else if (ret < 0)
                {
                    std::cerr << "avcodec_receive_frame err �� " << av_err2str(ret) << std::endl;
                    break;
                }
                else
                {
                    // �õ���������
                    if (frame->format == AV_SAMPLE_FMT_FLTP)
                    {
#ifndef NOSAVEPCM
                        auto size = av_get_bytes_per_sample(static_cast<AVSampleFormat>(frame->format));
                        for (int i = 0; i < frame->nb_samples; ++i)
                        {
                            for (int j = 0; j < frame->channels; ++j)
                            {
                                out_pcm.write(reinterpret_cast<const char*>(frame->data[j] + size * i), size);
                            }
                        }

#ifdef RESAMPLE
                        //ת��������ÿ��ͨ����������
                        ret = swr_convert(swrctx, &sambuf, samplessize, (const uint8_t **)frame->data, frame->nb_samples);
                        if (ret < 0)
                        {
                            std::cerr << "swr_convert err �� " << av_err2str(ret) << std::endl;
                            break;
                        }
                        out_pcm2.write(reinterpret_cast<const char*>(sambuf),
                            av_samples_get_buffer_size(nullptr, frame->channels, ret, AV_SAMPLE_FMT_S16, 1));
#endif // RESAMPLE

#endif // NOSAVEPCM
#ifdef ENCODE
                        ret = avcodec_send_frame(oacodectx, frame);
                        if (ret < 0)
                        {
                            std::cerr << "avcodec_send_frame err �� " << av_err2str(ret) << std::endl;
                            break;
                        }
                        while (ret >= 0)
                        {
                            ret = avcodec_receive_packet(oacodectx, opkt);
                            if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
                            {
                                break;
                            }
                            else if (ret < 0)
                            {
                                std::cerr << "avcodec_receive_packet err �� " << av_err2str(ret) << std::endl;
                                break;
                            }
                            else
                            {
                                // �õ���������
                                out_mp3.write(reinterpret_cast<const char*>(opkt->data), opkt->size);
#ifdef MUXING
                                opkt->pts = av_rescale_q(opkt->pts, fmt_ctx->streams[aindex]->time_base, oastream2->time_base);
                                opkt->dts = av_rescale_q(opkt->dts, fmt_ctx->streams[aindex]->time_base, oastream2->time_base);
                                opkt->duration = av_rescale_q(opkt->duration, fmt_ctx->streams[aindex]->time_base, oastream2->time_base);
                                opkt->pos = -1;
                                opkt->stream_index = 1;
                                ret = av_interleaved_write_frame(ofmt_ctx2, opkt);
                                if (ret < 0)
                                {
                                    std::cerr << "av_interleaved_write_frame err �� " << av_err2str(ret) << std::endl;
                                }
#endif // MUXING
                                av_packet_unref(opkt);
                            }
                        }
#endif // ENCODE
                    }
                }
            }
#endif // NOAUDIO
        }

#ifdef REMUX
        streamtmp = nullptr;
        if (pkt->stream_index == vindex)
        {
            streamtmp = ovstream;
            pkt->stream_index = 0;
        }
        else if (pkt->stream_index == aindex)
        {
            streamtmp = oastream;
            pkt->stream_index = 1;
        }

        if (streamtmp != nullptr)
        {
            pkt->pts = av_rescale_q(pkt->pts, fmt_ctx->streams[pkt->stream_index]->time_base, streamtmp->time_base);
            pkt->dts = av_rescale_q(pkt->dts, fmt_ctx->streams[pkt->stream_index]->time_base, streamtmp->time_base);
            pkt->duration = av_rescale_q(pkt->duration, fmt_ctx->streams[pkt->stream_index]->time_base, streamtmp->time_base);
            pkt->pos = -1;
            ret = av_interleaved_write_frame(ofmt_ctx, pkt);
            if (ret < 0)
            {
                std::cerr << "REMUX av_interleaved_write_frame err �� " << av_err2str(ret) << std::endl;
            }
        }
#endif // REMUX

        // ��λdata��size
        av_packet_unref(pkt);
    }

END:

#ifdef REMUX
    if (ofmt_ctx != nullptr)
    {
        // д�ļ�β
        ret = av_write_trailer(ofmt_ctx);
        if (ret < 0)
        {
            std::cerr << "av_write_trailer err �� " << av_err2str(ret) << std::endl;
        }
    }
#endif // REMUX

#ifdef MUXING
    if (ofmt_ctx2 != nullptr)
    {
        // д�ļ�β
        ret = av_write_trailer(ofmt_ctx2);
        if (ret < 0)
        {
            std::cerr << "av_write_trailer err �� " << av_err2str(ret) << std::endl;
        }
    }
#endif // MUXING

    // �ر��ļ�
    out_yuv.close();
    out_hw.close();
    out_pcm.close();
    out_bgr.close();
    out_pcm2.close();
    out_h264.close();
    out_mp3.close();

    std::cerr << "end..." << std::endl;
    std::cin.get();

    // DECODE
    av_freep(&pt[0]);
    av_frame_free(&frame);
    av_packet_free(&pkt);
    avcodec_free_context(&vcodectx);
    avcodec_free_context(&acodectx);
    avformat_close_input(&fmt_ctx);

    // HWDECODE
    av_buffer_unref(&hwbufref);
    av_frame_free(&hwframe);
    av_free(hwframebuf);

    // AVIO
    av_free(aviobuf);
    avio_context_free(&avioctx);
    av_file_unmap(buf, size);

    // REMUX
    // �ر�io
    if (ofmt_ctx != nullptr && !(ofmt_ctx->oformat->flags & AVFMT_NOFILE))
    {
        avio_closep(&ofmt_ctx->pb);
    }
    avformat_free_context(ofmt_ctx);
    ofmt_ctx = nullptr;

    // MUXING
    // �ر�io
    if (ofmt_ctx2 != nullptr && !(ofmt_ctx2->oformat->flags & AVFMT_NOFILE))
    {
        avio_closep(&ofmt_ctx2->pb);
    }
    avformat_free_context(ofmt_ctx2);
    ofmt_ctx2 = nullptr;

    // ENCODE
    av_packet_free(&opkt);
    avcodec_free_context(&ovcodectx);
    avcodec_free_context(&oacodectx);

    // SWSCALE
    sws_freeContext(swsctx);
    av_freep(&pointers[0]);

    // RESAMPLE
    swr_free(&swrctx);
    av_free(sambuf);

    return 0;
}
