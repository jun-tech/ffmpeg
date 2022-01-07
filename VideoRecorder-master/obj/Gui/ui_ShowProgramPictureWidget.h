/********************************************************************************
** Form generated from reading UI file 'ShowProgramPictureWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPROGRAMPICTUREWIDGET_H
#define UI_SHOWPROGRAMPICTUREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowProgramPictureWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_back;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_title;

    void setupUi(QWidget *ShowProgramPictureWidget)
    {
        if (ShowProgramPictureWidget->objectName().isEmpty())
            ShowProgramPictureWidget->setObjectName(QString::fromUtf8("ShowProgramPictureWidget"));
        ShowProgramPictureWidget->resize(400, 300);
        ShowProgramPictureWidget->setCursor(QCursor(Qt::PointingHandCursor));
        ShowProgramPictureWidget->setMouseTracking(true);
        verticalLayout = new QVBoxLayout(ShowProgramPictureWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_back = new QWidget(ShowProgramPictureWidget);
        widget_back->setObjectName(QString::fromUtf8("widget_back"));
        widget_back->setStyleSheet(QString::fromUtf8("QWidget#widget_back:hover\n"
"{\n"
"	border:2px solid #0000ff;\n"
"	border-radius: 0px; \n"
"}"));
        verticalLayout_2 = new QVBoxLayout(widget_back);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget_back);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setScaledContents(true);

        verticalLayout_2->addWidget(label);

        label_title = new QLabel(widget_back);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setAlignment(Qt::AlignCenter);
        label_title->setWordWrap(true);

        verticalLayout_2->addWidget(label_title);


        verticalLayout->addWidget(widget_back);


        retranslateUi(ShowProgramPictureWidget);

        QMetaObject::connectSlotsByName(ShowProgramPictureWidget);
    } // setupUi

    void retranslateUi(QWidget *ShowProgramPictureWidget)
    {
        ShowProgramPictureWidget->setWindowTitle(QCoreApplication::translate("ShowProgramPictureWidget", "Form", nullptr));
        label->setText(QString());
        label_title->setText(QCoreApplication::translate("ShowProgramPictureWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowProgramPictureWidget: public Ui_ShowProgramPictureWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPROGRAMPICTUREWIDGET_H
