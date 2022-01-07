/********************************************************************************
** Form generated from reading UI file 'DeviceSettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESETTINGDIALOG_H
#define UI_DEVICESETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceSettingDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_back;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_set;
    QSpacerItem *horizontalSpacer_5;
    QSlider *horizontalSlider_audioIn;
    QPushButton *pushButton_close;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_audioIn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QProgressBar *progressBar_back;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_audioTest_stop;
    QPushButton *pushButton_audioTest_start;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_note;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_virtual_audio_capture;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QComboBox *comboBox_videoQuality;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_videoPath;
    QPushButton *pushButton_videoPath;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *DeviceSettingDialog)
    {
        if (DeviceSettingDialog->objectName().isEmpty())
            DeviceSettingDialog->setObjectName(QString::fromUtf8("DeviceSettingDialog"));
        DeviceSettingDialog->resize(455, 462);
        DeviceSettingDialog->setMinimumSize(QSize(455, 398));
        DeviceSettingDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(DeviceSettingDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_back = new QWidget(DeviceSettingDialog);
        widget_back->setObjectName(QString::fromUtf8("widget_back"));
        widget_back->setMinimumSize(QSize(0, 50));
        widget_back->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(widget_back);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_set = new QLabel(widget_back);
        label_set->setObjectName(QString::fromUtf8("label_set"));
        label_set->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_set);

        horizontalSpacer_5 = new QSpacerItem(272, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalSlider_audioIn = new QSlider(widget_back);
        horizontalSlider_audioIn->setObjectName(QString::fromUtf8("horizontalSlider_audioIn"));
        horizontalSlider_audioIn->setMinimumSize(QSize(0, 32));
        horizontalSlider_audioIn->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: rgb(51,153,255); \n"
"border-radius: 0px;\n"
"margin-top:13px;\n"
"margin-bottom:13px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: rgb(204,204, 204);\n"
"border: 0px solid #777;\n"
"border-radius: 2px;\n"
"margin-top:13px;\n"
"margin-bottom:13px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: rgb(0,101,251); \n"
"border: 1px solid rgb(0,101,251);  \n"
"width: 18px;\n"
"border-radius: 9px;\n"
"margin-top:6px;\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: rgb(10,101,251); \n"
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
"QSlider::h"
                        "andle:horizontal:disabled {\n"
"background: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
""));
        horizontalSlider_audioIn->setMaximum(100);
        horizontalSlider_audioIn->setSingleStep(0);
        horizontalSlider_audioIn->setPageStep(0);
        horizontalSlider_audioIn->setValue(100);
        horizontalSlider_audioIn->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_audioIn);

        pushButton_close = new QPushButton(widget_back);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(26, 26));
        pushButton_close->setMaximumSize(QSize(26, 26));
        pushButton_close->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"image: url(:/image/close_2_normal.png);\n"
"border-radius:0px; \n"
"	background-color: rgba(255, 255, 255, 0);\n"
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


        verticalLayout_5->addLayout(horizontalLayout_3);

        widget_3 = new QWidget(widget_back);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 36, 20, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, 0);
        comboBox_audioIn = new QComboBox(widget_3);
        comboBox_audioIn->setObjectName(QString::fromUtf8("comboBox_audioIn"));
        comboBox_audioIn->setMinimumSize(QSize(0, 36));
        comboBox_audioIn->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(comboBox_audioIn);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 20));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(236, 30));
        widget->setMaximumSize(QSize(16777215, 30));
        progressBar_back = new QProgressBar(widget);
        progressBar_back->setObjectName(QString::fromUtf8("progressBar_back"));
        progressBar_back->setGeometry(QRect(0, 0, 260, 30));
        progressBar_back->setStyleSheet(QString::fromUtf8("QProgressBar\n"
"{\n"
"       height:30;\n"
"background:transparent;\n"
"border:none;\n"
"	\n"
"}\n"
"\n"
"\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"       background-color:#ffffff;\n"
"       width:5px;\n"
"	margin:0.5px 5px;\n"
"}"));
        progressBar_back->setValue(100);
        progressBar_back->setTextVisible(false);
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 0, 236, 30));
        progressBar->setMaximumSize(QSize(236, 30));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar\n"
"{\n"
"       height:30;\n"
"background:transparent;\n"
"border:none;\n"
"	\n"
"}\n"
"\n"
"\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"       background-color:#4b5cc4;\n"
"       width:5px;\n"
"	margin:0.5px 5px;\n"
"}"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        horizontalLayout_2->addWidget(widget);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_audioTest_stop = new QPushButton(widget_2);
        pushButton_audioTest_stop->setObjectName(QString::fromUtf8("pushButton_audioTest_stop"));
        pushButton_audioTest_stop->setMinimumSize(QSize(98, 36));
        pushButton_audioTest_stop->setMaximumSize(QSize(98, 16777215));
        pushButton_audioTest_stop->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(pushButton_audioTest_stop);

        pushButton_audioTest_start = new QPushButton(widget_2);
        pushButton_audioTest_start->setObjectName(QString::fromUtf8("pushButton_audioTest_start"));
        pushButton_audioTest_start->setMinimumSize(QSize(98, 36));
        pushButton_audioTest_start->setMaximumSize(QSize(98, 16777215));
        pushButton_audioTest_start->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(pushButton_audioTest_start);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(widget_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_note = new QLabel(widget_3);
        label_note->setObjectName(QString::fromUtf8("label_note"));

        horizontalLayout_4->addWidget(label_note);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        checkBox_virtual_audio_capture = new QCheckBox(widget_3);
        checkBox_virtual_audio_capture->setObjectName(QString::fromUtf8("checkBox_virtual_audio_capture"));
        checkBox_virtual_audio_capture->setStyleSheet(QString::fromUtf8(""));
        checkBox_virtual_audio_capture->setChecked(true);

        verticalLayout->addWidget(checkBox_virtual_audio_capture);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 36));
        verticalLayout_6 = new QVBoxLayout(widget_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(label_2);

        comboBox_videoQuality = new QComboBox(widget_4);
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->addItem(QString());
        comboBox_videoQuality->setObjectName(QString::fromUtf8("comboBox_videoQuality"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_videoQuality->sizePolicy().hasHeightForWidth());
        comboBox_videoQuality->setSizePolicy(sizePolicy);
        comboBox_videoQuality->setMinimumSize(QSize(0, 36));
        comboBox_videoQuality->setMaximumSize(QSize(380, 16777215));
        comboBox_videoQuality->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(comboBox_videoQuality);


        verticalLayout_6->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(widget_4);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        lineEdit_videoPath = new QLineEdit(widget_3);
        lineEdit_videoPath->setObjectName(QString::fromUtf8("lineEdit_videoPath"));
        lineEdit_videoPath->setMinimumSize(QSize(0, 36));

        horizontalLayout_7->addWidget(lineEdit_videoPath);

        pushButton_videoPath = new QPushButton(widget_3);
        pushButton_videoPath->setObjectName(QString::fromUtf8("pushButton_videoPath"));
        pushButton_videoPath->setMinimumSize(QSize(50, 36));
        pushButton_videoPath->setMaximumSize(QSize(98, 16777215));
        pushButton_videoPath->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_videoPath->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(pushButton_videoPath);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        pushButton_confirm = new QPushButton(widget_3);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setMinimumSize(QSize(66, 36));
        pushButton_confirm->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_confirm->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(pushButton_confirm);

        pushButton_cancel = new QPushButton(widget_3);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(66, 36));
        pushButton_cancel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cancel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalLayout->setStretch(0, 1);

        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_5->addWidget(widget_3);


        verticalLayout_2->addWidget(widget_back);


        retranslateUi(DeviceSettingDialog);
        QObject::connect(pushButton_close, SIGNAL(clicked()), DeviceSettingDialog, SLOT(reject()));
        QObject::connect(pushButton_cancel, SIGNAL(clicked()), DeviceSettingDialog, SLOT(reject()));

        comboBox_videoQuality->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(DeviceSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *DeviceSettingDialog)
    {
        DeviceSettingDialog->setWindowTitle(QCoreApplication::translate("DeviceSettingDialog", "\350\256\276\347\275\256", nullptr));
        label_set->setText(QCoreApplication::translate("DeviceSettingDialog", "\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_close->setToolTip(QCoreApplication::translate("DeviceSettingDialog", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_close->setText(QString());
        pushButton_audioTest_stop->setText(QCoreApplication::translate("DeviceSettingDialog", "\345\201\234\346\255\242\346\265\213\350\257\225", nullptr));
        pushButton_audioTest_start->setText(QCoreApplication::translate("DeviceSettingDialog", "\347\202\271\345\207\273\346\265\213\350\257\225", nullptr));
        label_note->setText(QCoreApplication::translate("DeviceSettingDialog", "\350\247\202\345\257\237\345\210\260\351\237\263\351\207\217\346\234\211\346\235\241\346\234\211\345\217\230\345\214\226\357\274\214\345\210\231\351\272\246\345\205\213\351\243\216\346\224\266\351\237\263\346\255\243\345\270\270", nullptr));
        checkBox_virtual_audio_capture->setText(QCoreApplication::translate("DeviceSettingDialog", "\345\275\225\345\210\266\345\243\260\345\215\241\345\243\260\351\237\263", nullptr));
        label_2->setText(QCoreApplication::translate("DeviceSettingDialog", "\350\247\206\351\242\221\347\224\273\350\264\250:", nullptr));
        comboBox_videoQuality->setItemText(0, QCoreApplication::translate("DeviceSettingDialog", "1", nullptr));
        comboBox_videoQuality->setItemText(1, QCoreApplication::translate("DeviceSettingDialog", "2", nullptr));
        comboBox_videoQuality->setItemText(2, QCoreApplication::translate("DeviceSettingDialog", "3", nullptr));
        comboBox_videoQuality->setItemText(3, QCoreApplication::translate("DeviceSettingDialog", "4", nullptr));
        comboBox_videoQuality->setItemText(4, QCoreApplication::translate("DeviceSettingDialog", "5", nullptr));
        comboBox_videoQuality->setItemText(5, QCoreApplication::translate("DeviceSettingDialog", "6", nullptr));
        comboBox_videoQuality->setItemText(6, QCoreApplication::translate("DeviceSettingDialog", "7", nullptr));
        comboBox_videoQuality->setItemText(7, QCoreApplication::translate("DeviceSettingDialog", "8", nullptr));
        comboBox_videoQuality->setItemText(8, QCoreApplication::translate("DeviceSettingDialog", "9", nullptr));
        comboBox_videoQuality->setItemText(9, QCoreApplication::translate("DeviceSettingDialog", "10", nullptr));

        label_3->setText(QCoreApplication::translate("DeviceSettingDialog", "\345\275\225\345\261\217\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", nullptr));
        pushButton_videoPath->setText(QCoreApplication::translate("DeviceSettingDialog", "...", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("DeviceSettingDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("DeviceSettingDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceSettingDialog: public Ui_DeviceSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESETTINGDIALOG_H
