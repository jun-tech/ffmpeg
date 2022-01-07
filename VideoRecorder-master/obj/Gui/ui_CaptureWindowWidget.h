/********************************************************************************
** Form generated from reading UI file 'CaptureWindowWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREWINDOWWIDGET_H
#define UI_CAPTUREWINDOWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CaptureWindowWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *CaptureWindowWidget)
    {
        if (CaptureWindowWidget->objectName().isEmpty())
            CaptureWindowWidget->setObjectName(QString::fromUtf8("CaptureWindowWidget"));
        CaptureWindowWidget->resize(493, 349);
        verticalLayout = new QVBoxLayout(CaptureWindowWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(CaptureWindowWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);


        retranslateUi(CaptureWindowWidget);

        QMetaObject::connectSlotsByName(CaptureWindowWidget);
    } // setupUi

    void retranslateUi(QWidget *CaptureWindowWidget)
    {
        CaptureWindowWidget->setWindowTitle(QCoreApplication::translate("CaptureWindowWidget", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CaptureWindowWidget: public Ui_CaptureWindowWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREWINDOWWIDGET_H
