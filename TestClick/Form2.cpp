#include "Form2.h"
#include "ui_form2.h"

Form2::Form2(QWidget* parent) : QDialog(parent), ui(new Ui::Form2)
{
	ui->setupUi(this);
}

Form2::~Form2()
{
	delete ui;
}

void Form2::on_okButton_clicked()
{
	std::ofstream ost("output.txt");
	ost << "Миру мир!" << std::endl;
	ost.close();
	exit(0);
}
