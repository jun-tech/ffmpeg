/********************************************************************************
** Form generated from reading UI file 'CapturePictureWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREPICTUREWIDGET_H
#define UI_CAPTUREPICTUREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CapturePictureWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *CapturePictureWidget)
    {
        if (CapturePictureWidget->objectName().isEmpty())
            CapturePictureWidget->setObjectName(QString::fromUtf8("CapturePictureWidget"));
        CapturePictureWidget->resize(493, 349);
        verticalLayout = new QVBoxLayout(CapturePictureWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(CapturePictureWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);


        retranslateUi(CapturePictureWidget);

        QMetaObject::connectSlotsByName(CapturePictureWidget);
    } // setupUi

    void retranslateUi(QWidget *CapturePictureWidget)
    {
        CapturePictureWidget->setWindowTitle(QCoreApplication::translate("CapturePictureWidget", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CapturePictureWidget: public Ui_CapturePictureWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREPICTUREWIDGET_H
