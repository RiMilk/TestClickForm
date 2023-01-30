#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TestClick.h"

class TestClick : public QMainWindow
{
    Q_OBJECT

public:
    TestClick(QWidget *parent = nullptr);
    ~TestClick();

private:
    Ui::TestClickClass ui;
};
