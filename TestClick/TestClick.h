#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TestClick.h"
#include "form2.h"

class TestClick : public QMainWindow
{
    Q_OBJECT

public:

    Form2* form2;

    TestClick(QWidget *parent = nullptr);
    ~TestClick();

private:
    Ui::TestClickClass ui;

private slots:

    void on_action_form2_triggered();

};
