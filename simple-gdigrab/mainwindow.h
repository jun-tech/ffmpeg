#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
extern "C"{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libavutil/imgutils.h>
#include <libavdevice/avdevice.h>
#include <libavutil/opt.h>

#include <libavutil/time.h>
}

#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void initScreen();
    void readFrame();
    void stopScreen();
    void freeScreen();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    bool isOpen = false;// 设备打开过，不能再按按钮
    QTimer *timer;
    // 集成ffmpeg开始
    AVFormatContext *ifmtCtx = NULL;
    AVFormatContext *ofmtCtx = NULL;
    AVPacket pkt;
    AVFrame *pFrame, *pFrameYUV;
    SwsContext *pImgConvertCtx;
    AVDictionary *params = NULL;
    AVCodec *pCodec;
    AVCodecContext *pCodecCtx;
    unsigned char *outBuffer;
    AVCodecContext *pH264CodecCtx;
    AVCodec *pH264Codec;
    AVDictionary *options = NULL;

    int ret = 0;
    unsigned int i = 0;
    int videoIndex = -1;
    int frameIndex = 0;

    // 使用命令获取设备名称
    // ffmpeg -list_devices true -f dshow -i dummy
    // video=xxxxx
    // xxxx值: 摄像头、桌面等
    const char *inFilename = "video=screen-capture-recorder";//输入URL windows里有gdigrab或dshow 2种方式，这里的选取可以查看文档http://blog.yundiantech.com/?log=blog&id=17

    const char *outFilename = "rtmp://127.0.0.1:1935/hls/myscreen"; //输出URL
//    const char *outFilename = "rtmp://192.168.0.55:1935/hls/myscreen"; //公司国产机
    const char *ofmtName = NULL;

};
#endif // MAINWINDOW_H
