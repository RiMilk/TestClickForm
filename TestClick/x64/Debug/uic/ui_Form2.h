/********************************************************************************
** Form generated from reading UI file 'Form2.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QString::fromUtf8("Form2"));
        Form2->resize(592, 419);
        pushButton = new QPushButton(Form2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 190, 75, 23));

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QDialog *Form2)
    {
        Form2->setWindowTitle(QCoreApplication::translate("Form2", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Form2", "push me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
