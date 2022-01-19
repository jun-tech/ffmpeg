#ifndef RTMPSCREEN_H
#define RTMPSCREEN_H

#include <iostream>


using namespace std;
//引入头文件
extern "C"
{
#include "libavformat/avformat.h"
//引入时间
#include "libavutil/time.h"
#include <libavutil/opt.h>
}
class RtmpScreen
{
public:
    RtmpScreen();
    ~RtmpScreen();
    int httRtmp(AVFormatContext *ictx);  // 初始化
    int pushRtmp(AVPacket pkt,int videoindex); // 推送
    double r2d(AVRational r);
private:
    const char *outUrl = "rtmp://127.0.0.1:1935/hls/myscreen";
    int videoindex = -1;
    int audioindex = -1;
    AVFormatContext *ictx;
    AVOutputFormat *ofmt = NULL;
    AVFormatContext *octx = NULL;
    long long  start_time;
    long  long frame_index;
    const AVBitStreamFilter *filter;

};

#endif // RTMPSCREEN_H
