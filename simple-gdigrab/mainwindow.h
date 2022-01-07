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
    void readFrame();

private:
    Ui::MainWindow *ui;
    bool isOpen = false;// 设备打开过，不能再按按钮
     QTimer *timer;
    // 集成ffmpeg开始
    int                 videoindex;     //视频流索引
    AVDictionary        *options = NULL;       //参数
    AVFormatContext     *pFormatCtx;    //文件内容信息 这里指屏幕
    AVRational          fps;    //帧率
    AVCodecContext      *pCodecCtx;     //解码器上下文
    AVCodec             *pCodec;        //解码器
    AVPacket            *packet;        //图像解码前的包

};
#endif // MAINWINDOW_H
