#ifndef FORM2_H
#define FORM2_H

#include <QDialog>
#include <fstream>

namespace Ui {
    class Form2;
}

class Form2 : public QDialog
{
    Q_OBJECT

public:
    Form2(QWidget* parent = nullptr);
    virtual ~Form2();

private:
    Ui::Form2* ui;

private slots:

    void on_okButton_clicked();
};

#endif // FORM2_H
