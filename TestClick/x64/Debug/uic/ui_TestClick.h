/********************************************************************************
** Form generated from reading UI file 'TestClick.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCLICK_H
#define UI_TESTCLICK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestClickClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestClickClass)
    {
        if (TestClickClass->objectName().isEmpty())
            TestClickClass->setObjectName(QString::fromUtf8("TestClickClass"));
        TestClickClass->resize(600, 400);
        menuBar = new QMenuBar(TestClickClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TestClickClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestClickClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TestClickClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TestClickClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TestClickClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TestClickClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TestClickClass->setStatusBar(statusBar);

        retranslateUi(TestClickClass);

        QMetaObject::connectSlotsByName(TestClickClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestClickClass)
    {
        TestClickClass->setWindowTitle(QCoreApplication::translate("TestClickClass", "TestClick", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestClickClass: public Ui_TestClickClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCLICK_H
