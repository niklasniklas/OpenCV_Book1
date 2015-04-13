/********************************************************************************
** Form generated from reading UI file 'opencvscratch.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCVSCRATCH_H
#define UI_OPENCVSCRATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenCVscratchClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenCVscratchClass)
    {
        if (OpenCVscratchClass->objectName().isEmpty())
            OpenCVscratchClass->setObjectName(QStringLiteral("OpenCVscratchClass"));
        OpenCVscratchClass->resize(895, 611);
        centralWidget = new QWidget(OpenCVscratchClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 290, 411, 241));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 101, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 20, 101, 41));
        OpenCVscratchClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenCVscratchClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 895, 21));
        OpenCVscratchClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenCVscratchClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OpenCVscratchClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OpenCVscratchClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OpenCVscratchClass->setStatusBar(statusBar);

        retranslateUi(OpenCVscratchClass);

        QMetaObject::connectSlotsByName(OpenCVscratchClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpenCVscratchClass)
    {
        OpenCVscratchClass->setWindowTitle(QApplication::translate("OpenCVscratchClass", "OpenCVscratch", 0));
        label->setText(QApplication::translate("OpenCVscratchClass", "TextLabel", 0));
        pushButton->setText(QApplication::translate("OpenCVscratchClass", "Load Image", 0));
        pushButton_2->setText(QApplication::translate("OpenCVscratchClass", "function()", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenCVscratchClass: public Ui_OpenCVscratchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCVSCRATCH_H
