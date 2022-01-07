/********************************************************************************
** Form generated from reading UI file 'SelectRunningProgramDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTRUNNINGPROGRAMDIALOG_H
#define UI_SELECTRUNNINGPROGRAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectRunningProgramDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SelectRunningProgramDialog)
    {
        if (SelectRunningProgramDialog->objectName().isEmpty())
            SelectRunningProgramDialog->setObjectName(QString::fromUtf8("SelectRunningProgramDialog"));
        SelectRunningProgramDialog->resize(820, 600);
        verticalLayout_3 = new QVBoxLayout(SelectRunningProgramDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(SelectRunningProgramDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 800, 580));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 551, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        retranslateUi(SelectRunningProgramDialog);

        QMetaObject::connectSlotsByName(SelectRunningProgramDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectRunningProgramDialog)
    {
        SelectRunningProgramDialog->setWindowTitle(QCoreApplication::translate("SelectRunningProgramDialog", "\351\200\211\346\213\251\345\275\225\345\210\266\347\224\273\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectRunningProgramDialog: public Ui_SelectRunningProgramDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTRUNNINGPROGRAMDIALOG_H
