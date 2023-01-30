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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestClickClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *form2;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestClickClass)
    {
        if (TestClickClass->objectName().isEmpty())
            TestClickClass->setObjectName(QString::fromUtf8("TestClickClass"));
        TestClickClass->resize(600, 400);
        centralWidget = new QWidget(TestClickClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        form2 = new QPushButton(centralWidget);
        form2->setObjectName(QString::fromUtf8("form2"));

        horizontalLayout->addWidget(form2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

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
        form2->setText(QCoreApplication::translate("TestClickClass", "Push me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestClickClass: public Ui_TestClickClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCLICK_H
