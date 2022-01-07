/********************************************************************************
** Form generated from reading UI file 'CaptureTaskManager.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURETASKMANAGER_H
#define UI_CAPTURETASKMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widget/video/ShowVideoWidget.h"

QT_BEGIN_NAMESPACE

class Ui_CaptureTaskManager
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_back;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_top;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_title;
    QToolButton *toolButton_view;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_time_record;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_expand;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pushButton_audioTest;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_close;
    QWidget *widget_capture_back;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QWidget *widget_capture_contain;
    QWidget *widget_capture_final;
    QWidget *widget_capture_view;
    QVBoxLayout *verticalLayout_6;
    ShowVideoWidget *widget_capture_video;
    QLineEdit *lineEdit_picture;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_videoPlayer;
    QWidget *widget_bottom;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_controlBtn;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_record_start;
    QToolButton *toolButton_record_restore;
    QToolButton *toolButton_record_pause;
    QToolButton *toolButton_record_stop;
    QSpacerItem *horizontalSpacer_13;
    QToolButton *toolButton_fullScreen;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_8;
    QToolButton *toolButton_selectedArea;
    QPushButton *pushButton_selectedArea_expand;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *toolButton_programe;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *toolButton_videofile;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer;
    QWidget *widget_expand;
    QVBoxLayout *verticalLayout;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *checkBox_camera;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *comboBox_videoDevice;
    QSpacerItem *horizontalSpacer_12;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_picture;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_picture;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_Horizontal_Size;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QSlider *horizontalSlider_Size_Horizontal;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSlider *horizontalSlider_Size_Picture;
    QLabel *label_8;

    void setupUi(QWidget *CaptureTaskManager)
    {
        if (CaptureTaskManager->objectName().isEmpty())
            CaptureTaskManager->setObjectName(QString::fromUtf8("CaptureTaskManager"));
        CaptureTaskManager->resize(840, 718);
        verticalLayout_3 = new QVBoxLayout(CaptureTaskManager);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        widget_back = new QWidget(CaptureTaskManager);
        widget_back->setObjectName(QString::fromUtf8("widget_back"));
        widget_back->setStyleSheet(QString::fromUtf8("QWidget#widget_back\n"
"{\n"
"	background-color: rgb(0, 0, 2);\n"
"	border:1px solid  rgb(50, 50, 52);\n"
"	border-radius:0px;\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(widget_back);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_top = new QWidget(widget_back);
        widget_top->setObjectName(QString::fromUtf8("widget_top"));
        widget_top->setMinimumSize(QSize(0, 36));
        horizontalLayout_3 = new QHBoxLayout(widget_top);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_title = new QLabel(widget_top);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: #ffffff;\n"
"	font-size:20px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        horizontalLayout_3->addWidget(label_title);

        toolButton_view = new QToolButton(widget_top);
        toolButton_view->setObjectName(QString::fromUtf8("toolButton_view"));
        toolButton_view->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_view->sizePolicy().hasHeightForWidth());
        toolButton_view->setSizePolicy(sizePolicy);
        toolButton_view->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_view->setStyleSheet(QString::fromUtf8("\n"
"QToolButton{\n"
"border-radius:0px;\n"
"border-style: solid; \n"
"border-width: 2px; \n"
"border-color: rgb(255, 0, 0); \n"
"color:#ffffff;\n"
"} \n"
"\n"
"QToolButton:checked{\n"
"	background-color: rgb(255, 0, 0);\n"
"};"));
        toolButton_view->setIconSize(QSize(0, 0));
        toolButton_view->setCheckable(true);
        toolButton_view->setChecked(true);
        toolButton_view->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(toolButton_view);

        horizontalSpacer_17 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_17);

        label_time_record = new QLabel(widget_top);
        label_time_record->setObjectName(QString::fromUtf8("label_time_record"));
        label_time_record->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: #bbbbbb;\n"
"	font-size:24px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_time_record->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_time_record);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);

        pushButton_expand = new QPushButton(widget_top);
        pushButton_expand->setObjectName(QString::fromUtf8("pushButton_expand"));
        sizePolicy.setHeightForWidth(pushButton_expand->sizePolicy().hasHeightForWidth());
        pushButton_expand->setSizePolicy(sizePolicy);
        pushButton_expand->setMinimumSize(QSize(66, 0));
        pushButton_expand->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_expand->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	border:none;\n"
"	color:rgb(195, 195, 195);\n"
"	font-size:15px;\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(64, 64, 64, 255), stop:1 rgba(46, 46, 46, 46));\n"
"\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:6px;\n"
"	border:1px solid rgb(85, 85, 85);\n"
"} \n"
"\n"
"QPushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(84, 84, 84, 255), stop:1 rgba(46, 46, 46, 46));\n"
"} \n"
"\n"
"QPushButton:checked{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(38, 38, 38, 255), stop:1 rgba(46, 46, 46, 46));\n"
"	border:1px solid rgb(65, 65, 65);\n"
"	color:rgb(236, 139, 13);\n"
"} "));
        pushButton_expand->setCheckable(true);
        pushButton_expand->setChecked(false);

        horizontalLayout_3->addWidget(pushButton_expand);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_16);

        pushButton_audioTest = new QPushButton(widget_top);
        pushButton_audioTest->setObjectName(QString::fromUtf8("pushButton_audioTest"));
        sizePolicy.setHeightForWidth(pushButton_audioTest->sizePolicy().hasHeightForWidth());
        pushButton_audioTest->setSizePolicy(sizePolicy);
        pushButton_audioTest->setMinimumSize(QSize(66, 0));
        pushButton_audioTest->setMaximumSize(QSize(16777215, 32));
        pushButton_audioTest->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_audioTest->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	border:none;\n"
"	color:rgb(195, 195, 195);\n"
"	font-size:15px;\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(64, 64, 64, 255), stop:1 rgba(46, 46, 46, 46));\n"
"\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:6px;\n"
"	border:1px solid rgb(85, 85, 85);\n"
"} \n"
"\n"
"QPushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(84, 84, 84, 255), stop:1 rgba(46, 46, 46, 46));\n"
"} \n"
"\n"
"QPushButton:checked{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(38, 38, 38, 255), stop:1 rgba(46, 46, 46, 46));\n"
"	border:1px solid rgb(65, 65, 65);\n"
"	color:rgb(236, 139, 13);\n"
"} "));

        horizontalLayout_3->addWidget(pushButton_audioTest);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_close = new QPushButton(widget_top);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(26, 26));
        pushButton_close->setMaximumSize(QSize(26, 26));
        pushButton_close->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:/image/close_2_normal.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:hover{ \n"
"image: url(:image/close_normal.png);\n"
"background-color:rgb(255,80,6); \n"
"border-radius:12px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/close_hover.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_close);


        verticalLayout_2->addWidget(widget_top);

        widget_capture_back = new QWidget(widget_back);
        widget_capture_back->setObjectName(QString::fromUtf8("widget_capture_back"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_capture_back->sizePolicy().hasHeightForWidth());
        widget_capture_back->setSizePolicy(sizePolicy1);
        widget_capture_back->setStyleSheet(QString::fromUtf8("QWidget#widget_capture_back\n"
"{\n"
"	background-color: rgb(47, 48, 57);\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(widget_capture_back);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(widget_capture_back);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        widget_capture_contain = new QWidget(page_1);
        widget_capture_contain->setObjectName(QString::fromUtf8("widget_capture_contain"));
        widget_capture_contain->setGeometry(QRect(10, 50, 491, 231));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_capture_contain->sizePolicy().hasHeightForWidth());
        widget_capture_contain->setSizePolicy(sizePolicy2);
        widget_capture_contain->setStyleSheet(QString::fromUtf8("QWidget#widget_capture_contain\n"
"{\n"
"	background-color: rgb(47, 48, 57);\n"
"}"));
        widget_capture_final = new QWidget(widget_capture_contain);
        widget_capture_final->setObjectName(QString::fromUtf8("widget_capture_final"));
        widget_capture_final->setGeometry(QRect(230, 90, 281, 141));
        sizePolicy2.setHeightForWidth(widget_capture_final->sizePolicy().hasHeightForWidth());
        widget_capture_final->setSizePolicy(sizePolicy2);
        widget_capture_final->setStyleSheet(QString::fromUtf8("QWidget#widget_capture_final\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        widget_capture_view = new QWidget(widget_capture_contain);
        widget_capture_view->setObjectName(QString::fromUtf8("widget_capture_view"));
        widget_capture_view->setGeometry(QRect(20, 80, 131, 101));
        widget_capture_view->setStyleSheet(QString::fromUtf8("/*QWidget#widget_capture_view\n"
"{\n"
"border-radius:0px;\n"
"border-style: solid; \n"
"border-width: 2px; \n"
"border-color: rgb(255, 255, 255); \n"
"}*/"));
        verticalLayout_6 = new QVBoxLayout(widget_capture_view);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_capture_video = new ShowVideoWidget(widget_capture_view);
        widget_capture_video->setObjectName(QString::fromUtf8("widget_capture_video"));
        widget_capture_video->setStyleSheet(QString::fromUtf8("QWidget#widget_capture_video\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        verticalLayout_6->addWidget(widget_capture_video);

        lineEdit_picture = new QLineEdit(page_1);
        lineEdit_picture->setObjectName(QString::fromUtf8("lineEdit_picture"));
        lineEdit_picture->setGeometry(QRect(120, 10, 200, 20));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_7 = new QVBoxLayout(page_2);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_videoPlayer = new QVBoxLayout();
        verticalLayout_videoPlayer->setObjectName(QString::fromUtf8("verticalLayout_videoPlayer"));

        verticalLayout_7->addLayout(verticalLayout_videoPlayer);

        stackedWidget->addWidget(page_2);

        verticalLayout_5->addWidget(stackedWidget);


        verticalLayout_2->addWidget(widget_capture_back);

        widget_bottom = new QWidget(widget_back);
        widget_bottom->setObjectName(QString::fromUtf8("widget_bottom"));
        widget_bottom->setStyleSheet(QString::fromUtf8("\n"
"QWidget#widget_tool\n"
"{\n"
"border-radius:8px;\n"
"background-color: rgba(0, 0, 0, 100%);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: #ffffff;\n"
"	font-size:18px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QToolButton{\n"
"	background: transparent;\n"
"padding-top:4px;\n"
"padding-bottom:2px;\n"
"	border:none;\n"
"	color: #ffffff;\n"
"	font-size:14px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	image-position: 10px;\n"
"border-radius:6px;\n"
"\n"
"} \n"
"QToolButton:hover{ \n"
"	margin:1px;\n"
"	padding-bottom:0px;\n"
"	background-color: rgba(255, 255, 255, 10%);\n"
"}\n"
"\n"
"QToolButton:checked{\n"
"	color:#4B5CC4;\n"
"}\n"
"\n"
"QToolButton:disabled{\n"
"background-color:#555555;\n"
"	color:rgb(255, 255, 255);\n"
"};"));
        verticalLayout_4 = new QVBoxLayout(widget_bottom);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_7 = new QWidget(widget_bottom);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMaximumSize(QSize(16777215, 70));
        widget_7->setStyleSheet(QString::fromUtf8("\n"
"QToolButton{\n"
"	border:none;\n"
"	color:rgb(195, 195, 195);\n"
"	font-size:15px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(64, 64, 64, 255), stop:1 rgba(46, 46, 46, 46));\n"
"\n"
"	\n"
"	border-radius:6px;\n"
"	border:1px solid rgb(85, 85, 85);\n"
"} \n"
"\n"
"QToolButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(84, 84, 84, 255), stop:1 rgba(46, 46, 46, 46));\n"
"} \n"
"\n"
"QToolButton:checked{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(38, 38, 38, 255), stop:1 rgba(46, 46, 46, 46));\n"
"	border:1px solid rgb(65, 65, 65);\n"
"	color:rgb(236, 139, 13);\n"
"} "));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(6, 0, 6, 0);
        widget_controlBtn = new QWidget(widget_7);
        widget_controlBtn->setObjectName(QString::fromUtf8("widget_controlBtn"));
        widget_controlBtn->setStyleSheet(QString::fromUtf8("\n"
"QWidget#widget_tool\n"
"{\n"
"border-radius:8px;\n"
"background-color: rgba(0, 0, 0, 100%);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color: #ffffff;\n"
"	font-size:24px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"\n"
"\n"
"QToolButton{\n"
"	background: transparent;\n"
"padding-top:4px;\n"
"padding-bottom:2px;\n"
"	border:none;\n"
"	color: #ffffff;\n"
"	font-size:14px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	image-position: 10px;\n"
"border-radius:6px;\n"
"\n"
"} \n"
"QToolButton:hover{ \n"
"	margin:1px;\n"
"	padding-bottom:0px;\n"
"	background-color: rgba(255, 255, 255, 10%);\n"
"}\n"
"QToolButton:checked{\n"
"	color:rgb(255, 255, 255);\n"
"};"));
        horizontalLayout = new QHBoxLayout(widget_controlBtn);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        toolButton_record_start = new QToolButton(widget_controlBtn);
        toolButton_record_start->setObjectName(QString::fromUtf8("toolButton_record_start"));
        toolButton_record_start->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_record_start->sizePolicy().hasHeightForWidth());
        toolButton_record_start->setSizePolicy(sizePolicy);
        toolButton_record_start->setMinimumSize(QSize(50, 0));
        toolButton_record_start->setMaximumSize(QSize(50, 16777215));
        toolButton_record_start->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_record_start->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	image: url(:/image/btn_record_start.png);\n"
"} \n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/ic-menu-default.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_record_start->setIcon(icon);
        toolButton_record_start->setIconSize(QSize(32, 32));
        toolButton_record_start->setCheckable(false);
        toolButton_record_start->setChecked(false);
        toolButton_record_start->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_record_start);

        toolButton_record_restore = new QToolButton(widget_controlBtn);
        toolButton_record_restore->setObjectName(QString::fromUtf8("toolButton_record_restore"));
        toolButton_record_restore->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_record_restore->sizePolicy().hasHeightForWidth());
        toolButton_record_restore->setSizePolicy(sizePolicy);
        toolButton_record_restore->setMinimumSize(QSize(50, 0));
        toolButton_record_restore->setMaximumSize(QSize(50, 16777215));
        toolButton_record_restore->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_record_restore->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	image: url(:/image/btn_record_restore.png);\n"
"} \n"
""));
        toolButton_record_restore->setIcon(icon);
        toolButton_record_restore->setIconSize(QSize(32, 32));
        toolButton_record_restore->setCheckable(false);
        toolButton_record_restore->setChecked(false);
        toolButton_record_restore->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_record_restore);

        toolButton_record_pause = new QToolButton(widget_controlBtn);
        toolButton_record_pause->setObjectName(QString::fromUtf8("toolButton_record_pause"));
        toolButton_record_pause->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_record_pause->sizePolicy().hasHeightForWidth());
        toolButton_record_pause->setSizePolicy(sizePolicy);
        toolButton_record_pause->setMinimumSize(QSize(50, 0));
        toolButton_record_pause->setMaximumSize(QSize(50, 16777215));
        toolButton_record_pause->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_record_pause->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	image: url(:/image/btn_record_pause.png);\n"
"} \n"
""));
        toolButton_record_pause->setIcon(icon);
        toolButton_record_pause->setIconSize(QSize(32, 32));
        toolButton_record_pause->setCheckable(false);
        toolButton_record_pause->setChecked(false);
        toolButton_record_pause->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_record_pause);

        toolButton_record_stop = new QToolButton(widget_controlBtn);
        toolButton_record_stop->setObjectName(QString::fromUtf8("toolButton_record_stop"));
        toolButton_record_stop->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_record_stop->sizePolicy().hasHeightForWidth());
        toolButton_record_stop->setSizePolicy(sizePolicy);
        toolButton_record_stop->setMinimumSize(QSize(50, 0));
        toolButton_record_stop->setMaximumSize(QSize(50, 16777215));
        toolButton_record_stop->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_record_stop->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	image: url(:/image/btn_record_stop.png);\n"
"} \n"
""));
        toolButton_record_stop->setIcon(icon);
        toolButton_record_stop->setIconSize(QSize(32, 32));
        toolButton_record_stop->setCheckable(false);
        toolButton_record_stop->setChecked(false);
        toolButton_record_stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_record_stop);


        horizontalLayout_6->addWidget(widget_controlBtn);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        toolButton_fullScreen = new QToolButton(widget_7);
        toolButton_fullScreen->setObjectName(QString::fromUtf8("toolButton_fullScreen"));
        toolButton_fullScreen->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_fullScreen->sizePolicy().hasHeightForWidth());
        toolButton_fullScreen->setSizePolicy(sizePolicy);
        toolButton_fullScreen->setMinimumSize(QSize(122, 45));
        toolButton_fullScreen->setMaximumSize(QSize(122, 45));
        toolButton_fullScreen->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_fullScreen->setStyleSheet(QString::fromUtf8(""));
        toolButton_fullScreen->setIconSize(QSize(32, 32));
        toolButton_fullScreen->setCheckable(true);
        toolButton_fullScreen->setChecked(false);
        toolButton_fullScreen->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_6->addWidget(toolButton_fullScreen);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setMinimumSize(QSize(122, 45));
        widget_8->setMaximumSize(QSize(16777215, 45));
        toolButton_selectedArea = new QToolButton(widget_8);
        toolButton_selectedArea->setObjectName(QString::fromUtf8("toolButton_selectedArea"));
        toolButton_selectedArea->setEnabled(true);
        toolButton_selectedArea->setGeometry(QRect(0, 0, 122, 45));
        sizePolicy.setHeightForWidth(toolButton_selectedArea->sizePolicy().hasHeightForWidth());
        toolButton_selectedArea->setSizePolicy(sizePolicy);
        toolButton_selectedArea->setMinimumSize(QSize(122, 45));
        toolButton_selectedArea->setMaximumSize(QSize(122, 45));
        toolButton_selectedArea->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_selectedArea->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolButton_selectedArea->setStyleSheet(QString::fromUtf8(""));
        toolButton_selectedArea->setIconSize(QSize(32, 32));
        toolButton_selectedArea->setCheckable(true);
        toolButton_selectedArea->setChecked(false);
        toolButton_selectedArea->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_selectedArea_expand = new QPushButton(widget_8);
        pushButton_selectedArea_expand->setObjectName(QString::fromUtf8("pushButton_selectedArea_expand"));
        pushButton_selectedArea_expand->setGeometry(QRect(104, 0, 18, 45));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_selectedArea_expand->sizePolicy().hasHeightForWidth());
        pushButton_selectedArea_expand->setSizePolicy(sizePolicy3);
        pushButton_selectedArea_expand->setMaximumSize(QSize(32, 16777215));
        pushButton_selectedArea_expand->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"	color:rgb(195, 195, 195);\n"
"	font-size:15px;\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(64, 64, 64, 255), stop:1 rgba(46, 46, 46, 46));\n"
"\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:1px;\n"
"	border:1px solid rgb(85, 85, 85);\n"
"\n"
"border-bottom-right-radius: 6px; \n"
"border-top-right-radius: 6px; \n"
"} \n"
"\n"
"QPushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(84, 84, 84, 255), stop:1 rgba(46, 46, 46, 46));\n"
"} \n"
"\n"
"QPushButton:checked{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0.0397727 rgba(38, 38, 38, 255), stop:1 rgba(46, 46, 46, 46));\n"
"	border:1px solid rgb(65, 65, 65);\n"
"	color:rgb(236, 139, 13);\n"
"} \n"
"\n"
"QPushButton::menu-indicator\n"
"{\n"
"width:0px;\n"
"	image:none;\n"
"}"));

        horizontalLayout_6->addWidget(widget_8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        toolButton_programe = new QToolButton(widget_7);
        toolButton_programe->setObjectName(QString::fromUtf8("toolButton_programe"));
        toolButton_programe->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_programe->sizePolicy().hasHeightForWidth());
        toolButton_programe->setSizePolicy(sizePolicy);
        toolButton_programe->setMinimumSize(QSize(122, 45));
        toolButton_programe->setMaximumSize(QSize(122, 45));
        toolButton_programe->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_programe->setStyleSheet(QString::fromUtf8(""));
        toolButton_programe->setIconSize(QSize(32, 32));
        toolButton_programe->setCheckable(true);
        toolButton_programe->setChecked(false);
        toolButton_programe->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_6->addWidget(toolButton_programe);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        toolButton_videofile = new QToolButton(widget_7);
        toolButton_videofile->setObjectName(QString::fromUtf8("toolButton_videofile"));
        toolButton_videofile->setEnabled(true);
        sizePolicy.setHeightForWidth(toolButton_videofile->sizePolicy().hasHeightForWidth());
        toolButton_videofile->setSizePolicy(sizePolicy);
        toolButton_videofile->setMinimumSize(QSize(122, 45));
        toolButton_videofile->setMaximumSize(QSize(122, 45));
        toolButton_videofile->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_videofile->setStyleSheet(QString::fromUtf8(""));
        toolButton_videofile->setIconSize(QSize(32, 32));
        toolButton_videofile->setCheckable(true);
        toolButton_videofile->setChecked(false);
        toolButton_videofile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_6->addWidget(toolButton_videofile);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout_4->addWidget(widget_7);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        widget_expand = new QWidget(widget_bottom);
        widget_expand->setObjectName(QString::fromUtf8("widget_expand"));
        widget_expand->setMinimumSize(QSize(0, 80));
        verticalLayout = new QVBoxLayout(widget_expand);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        widget_6 = new QWidget(widget_expand);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(0, 36));
        horizontalLayout_12 = new QHBoxLayout(widget_6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 3, 16, 3);
        checkBox_camera = new QCheckBox(widget_6);
        checkBox_camera->setObjectName(QString::fromUtf8("checkBox_camera"));
        checkBox_camera->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	color:rgb(195, 195, 195);\n"
"	font-size:18px;\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QCheckBox::indicator {\n"
"     width: 22px;\n"
"     height: 22px;\n"
"}\n"
"QCheckBox::indicator::unchecked {\n"
"	image: url(:/image/checkbox_normal.png);\n"
" }\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"    background-image: url(:/image/index/Image/index/checkbox.png);\n"
"	background-position: left;\n"
"	background-repeat:no-repeat;\n"
"	margin-top:2px;\n"
"	\n"
" }\n"
"\n"
"QCheckBox::indicator::checked {\n"
"     \n"
"	image: url(:/image/checkbox_selected.png);\n"
" }\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"     background-image: url(:/image/index/Image/index/checkbox.png);\n"
"	background-position: right;\n"
"	background-repeat:no-repeat;\n"
"	margin-top:2px;\n"
" }"));
        checkBox_camera->setChecked(true);

        horizontalLayout_12->addWidget(checkBox_camera);

        widget_11 = new QWidget(widget_6);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMinimumSize(QSize(0, 32));
        horizontalLayout_14 = new QHBoxLayout(widget_11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);

        comboBox_videoDevice = new QComboBox(widget_11);
        comboBox_videoDevice->setObjectName(QString::fromUtf8("comboBox_videoDevice"));
        comboBox_videoDevice->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_videoDevice->sizePolicy().hasHeightForWidth());
        comboBox_videoDevice->setSizePolicy(sizePolicy4);
        comboBox_videoDevice->setMouseTracking(false);
        comboBox_videoDevice->setStyleSheet(QString::fromUtf8("\n"
"/*\344\270\213\346\213\211\346\241\206*/\n"
"QComboBox {\n"
"    font-family:\"Microsoft YaHei UI\";\n"
"    font-size:20px;\n"
"\n"
"    color:#ffffff;\n"
"    background-color:#2e3038;\n"
"\n"
"    border-radius:4px;\n"
"    border:none;\n"
"	padding-left:10px;\n"
"\n"
"\n"
"	padding-right:30px;\n"
"}\n"
"\n"
"QComboBox::disabled {\n"
"    font-family:\"Microsoft YaHei UI\";\n"
"    font-size:20px;\n"
"\n"
"    color:#888888;\n"
"    background-color:#1e1018;\n"
"\n"
"    border-radius:4px;\n"
"    border:none;\n"
"	padding-left:10px;\n"
"\n"
"\n"
"	padding-right:30px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView \n"
"{\n"
"     outline:0px;\n"
"     border:none;\n"
"	color:#ffffff;\n"
"	background-color:#2e3038;\n"
"border-radius:4px;\n"
"font-size:20px;\n"
"\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"     background:transparent;\n"
"}\n"
"/*\345\233\276\346\240\207*/\n"
"QComboBox::down-arrow {\n"
"    sub"
                        "control-origin: border;\n"
"    subcontrol-position:right;\n"
"\n"
"    padding-right:10px;\n"
"\n"
"    width:23px;\n"
"    height:25px;\n"
"	image: url(:/image/Dropdown_btn.png);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item\n"
"{\n"
"height: 48px;\n"
"    background-color:#2e3038;\n"
"    border:none;\n"
"    color:#ffffff;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:hover\n"
"{\n"
"    background-color:#4b5cc4;\n"
"    color:#ffffff;\n"
"}\n"
""));

        horizontalLayout_14->addWidget(comboBox_videoDevice);


        horizontalLayout_12->addWidget(widget_11);

        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        widget_10 = new QWidget(widget_6);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_13 = new QHBoxLayout(widget_10);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        checkBox_picture = new QCheckBox(widget_10);
        checkBox_picture->setObjectName(QString::fromUtf8("checkBox_picture"));
        checkBox_picture->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	font-family: \345\276\256\350\275\257\351\233\205\351\273\221;\n"
"	color:#cccccc; \n"
"	font-size: 18px;\n"
"}\n"
"QCheckBox::indicator {\n"
"     width: 22px;\n"
"     height: 22px;\n"
"}\n"
"QCheckBox::indicator::unchecked {\n"
"	image: url(:/image/checkbox_normal.png);\n"
" }\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"    background-image: url(:/image/index/Image/index/checkbox.png);\n"
"	background-position: left;\n"
"	background-repeat:no-repeat;\n"
"	margin-top:2px;\n"
"	\n"
" }\n"
"\n"
"QCheckBox::indicator::checked {\n"
"     \n"
"	image: url(:/image/checkbox_selected.png);\n"
" }\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"     background-image: url(:/image/index/Image/index/checkbox.png);\n"
"	background-position: right;\n"
"	background-repeat:no-repeat;\n"
"	margin-top:2px;\n"
" }"));

        horizontalLayout_13->addWidget(checkBox_picture);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_5);

        pushButton_picture = new QPushButton(widget_10);
        pushButton_picture->setObjectName(QString::fromUtf8("pushButton_picture"));
        pushButton_picture->setEnabled(false);
        pushButton_picture->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#4b5cc4;\n"
"border-radius:2px;\n"
"font-family: \"Microsoft YaHei UI\";\n"
"	font-size: 16px;\n"
"	color:#FFFFFF;\n"
"padding:6px;\n"
"padding-left:20px;\n"
"padding-right:20px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color:#8386bc;\n"
"}\n"
"\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"background-color:#cccccc;\n"
"	color:#ffffff;\n"
"}\n"
""));

        horizontalLayout_13->addWidget(pushButton_picture);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);


        horizontalLayout_12->addWidget(widget_10);


        verticalLayout->addWidget(widget_6);

        widget = new QWidget(widget_expand);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_Horizontal_Size = new QWidget(widget);
        widget_Horizontal_Size->setObjectName(QString::fromUtf8("widget_Horizontal_Size"));
        horizontalLayout_11 = new QHBoxLayout(widget_Horizontal_Size);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_Horizontal_Size);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color:#808080;"));

        horizontalLayout_11->addWidget(label_4);

        horizontalSlider_Size_Horizontal = new QSlider(widget_Horizontal_Size);
        horizontalSlider_Size_Horizontal->setObjectName(QString::fromUtf8("horizontalSlider_Size_Horizontal"));
        horizontalSlider_Size_Horizontal->setMinimumSize(QSize(0, 32));
        horizontalSlider_Size_Horizontal->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: #ffffff; \n"
"border-radius: 2px;\n"
"margin-top:14px;\n"
"margin-bottom:14px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #535353;\n"
"border: 0px solid #777;\n"
"border-radius: 2px;\n"
"margin-top:14px;\n"
"margin-bottom:14px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: #ffffff; \n"
"border: 1px solid rgb(0,101,251);  \n"
"width: 18px;\n"
"border-radius: 9px;\n"
"margin-top:6px;\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: #eeeeee; \n"
"border: 1px solid rgba(102,102,102,102);\n"
"width: 18px;\n"
"border-radius: 8px;\n"
"margin-top:6px;\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: #bbb;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"b"
                        "ackground: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
""));
        horizontalSlider_Size_Horizontal->setMaximum(100);
        horizontalSlider_Size_Horizontal->setSingleStep(0);
        horizontalSlider_Size_Horizontal->setPageStep(0);
        horizontalSlider_Size_Horizontal->setValue(70);
        horizontalSlider_Size_Horizontal->setOrientation(Qt::Horizontal);
        horizontalSlider_Size_Horizontal->setTickInterval(10);

        horizontalLayout_11->addWidget(horizontalSlider_Size_Horizontal);

        label_9 = new QLabel(widget_Horizontal_Size);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color:#808080;"));

        horizontalLayout_11->addWidget(label_9);


        horizontalLayout_2->addWidget(widget_Horizontal_Size);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget_9 = new QWidget(widget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_7 = new QHBoxLayout(widget_9);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(77, 0));
        label_5->setStyleSheet(QString::fromUtf8("color:#808080;"));

        horizontalLayout_7->addWidget(label_5);

        horizontalSlider_Size_Picture = new QSlider(widget_9);
        horizontalSlider_Size_Picture->setObjectName(QString::fromUtf8("horizontalSlider_Size_Picture"));
        horizontalSlider_Size_Picture->setMinimumSize(QSize(0, 32));
        horizontalSlider_Size_Picture->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: #ffffff; \n"
"border-radius: 2px;\n"
"margin-top:14px;\n"
"margin-bottom:14px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #535353;\n"
"border: 0px solid #777;\n"
"border-radius: 2px;\n"
"margin-top:14px;\n"
"margin-bottom:14px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: #ffffff; \n"
"border: 1px solid rgb(0,101,251);  \n"
"width: 18px;\n"
"border-radius: 9px;\n"
"margin-top:6px;\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: #eeeeee; \n"
"border: 1px solid rgba(102,102,102,102);\n"
"width: 18px;\n"
"border-radius: 8px;\n"
"margin-top:6px;\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: #bbb;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"b"
                        "ackground: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
""));
        horizontalSlider_Size_Picture->setMaximum(100);
        horizontalSlider_Size_Picture->setSingleStep(0);
        horizontalSlider_Size_Picture->setPageStep(0);
        horizontalSlider_Size_Picture->setValue(70);
        horizontalSlider_Size_Picture->setOrientation(Qt::Horizontal);
        horizontalSlider_Size_Picture->setTickInterval(10);

        horizontalLayout_7->addWidget(horizontalSlider_Size_Picture);

        label_8 = new QLabel(widget_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color:#808080;"));

        horizontalLayout_7->addWidget(label_8);


        horizontalLayout_2->addWidget(widget_9);


        verticalLayout->addWidget(widget);


        verticalLayout_4->addWidget(widget_expand);


        verticalLayout_2->addWidget(widget_bottom);


        verticalLayout_3->addWidget(widget_back);


        retranslateUi(CaptureTaskManager);
        QObject::connect(toolButton_view, SIGNAL(toggled(bool)), widget_capture_view, SLOT(setVisible(bool)));
        QObject::connect(checkBox_picture, SIGNAL(toggled(bool)), pushButton_picture, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_camera, SIGNAL(toggled(bool)), comboBox_videoDevice, SLOT(setEnabled(bool)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CaptureTaskManager);
    } // setupUi

    void retranslateUi(QWidget *CaptureTaskManager)
    {
        CaptureTaskManager->setWindowTitle(QCoreApplication::translate("CaptureTaskManager", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("CaptureTaskManager", "\345\275\225\345\261\217\350\275\257\344\273\266", nullptr));
        toolButton_view->setText(QCoreApplication::translate("CaptureTaskManager", "\345\256\236\346\227\266\351\242\204\350\247\210", nullptr));
        label_time_record->setText(QCoreApplication::translate("CaptureTaskManager", "00:00:00", nullptr));
        pushButton_expand->setText(QCoreApplication::translate("CaptureTaskManager", "\351\253\230\347\272\247", nullptr));
        pushButton_audioTest->setText(QCoreApplication::translate("CaptureTaskManager", "\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_close->setToolTip(QCoreApplication::translate("CaptureTaskManager", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_close->setText(QString());
        toolButton_record_start->setText(QCoreApplication::translate("CaptureTaskManager", "\345\274\200\345\247\213", nullptr));
        toolButton_record_restore->setText(QCoreApplication::translate("CaptureTaskManager", "\347\273\247\347\273\255", nullptr));
        toolButton_record_pause->setText(QCoreApplication::translate("CaptureTaskManager", "\346\232\202\345\201\234", nullptr));
        toolButton_record_stop->setText(QCoreApplication::translate("CaptureTaskManager", "\345\201\234\346\255\242", nullptr));
        toolButton_fullScreen->setText(QCoreApplication::translate("CaptureTaskManager", "\345\275\225\345\210\266\345\205\250\345\261\217", nullptr));
        toolButton_selectedArea->setText(QCoreApplication::translate("CaptureTaskManager", "\345\275\225\345\210\266\345\214\272\345\237\237", nullptr));
        pushButton_selectedArea_expand->setText(QCoreApplication::translate("CaptureTaskManager", "v", nullptr));
        toolButton_programe->setText(QCoreApplication::translate("CaptureTaskManager", "\345\275\225\345\210\266\347\250\213\345\272\217", nullptr));
        toolButton_videofile->setText(QCoreApplication::translate("CaptureTaskManager", "\350\247\206\351\242\221\346\226\207\344\273\266", nullptr));
        checkBox_camera->setText(QCoreApplication::translate("CaptureTaskManager", "\345\217\263\344\276\247\346\221\204\345\203\217\345\244\264", nullptr));
        checkBox_picture->setText(QCoreApplication::translate("CaptureTaskManager", "\345\217\263\344\276\247\345\233\276\347\211\207", nullptr));
        pushButton_picture->setText(QCoreApplication::translate("CaptureTaskManager", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label_4->setText(QCoreApplication::translate("CaptureTaskManager", "\344\270\273\345\261\217\345\271\225", nullptr));
        label_9->setText(QCoreApplication::translate("CaptureTaskManager", "\345\217\263\344\276\247\345\214\272\345\237\237", nullptr));
        label_5->setText(QCoreApplication::translate("CaptureTaskManager", "\345\233\276\347\211\207", nullptr));
        label_8->setText(QCoreApplication::translate("CaptureTaskManager", "\346\221\204\345\203\217\345\244\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaptureTaskManager: public Ui_CaptureTaskManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURETASKMANAGER_H
