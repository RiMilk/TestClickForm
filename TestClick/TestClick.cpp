#include "TestClick.h"

TestClick::TestClick(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

TestClick::~TestClick()
{}

void TestClick::on_action_form2_triggered()
{
	form2 = new Form2();
	form2->exec();
}
