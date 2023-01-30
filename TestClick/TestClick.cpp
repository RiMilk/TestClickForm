#include "TestClick.h"

TestClick::TestClick(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

TestClick::~TestClick()
{}

void TestClick::on_form2_clicked()
{
	hide();
	form2 = new Form2();
	form2->exec();
}
