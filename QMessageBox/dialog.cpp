#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"pragna 212218106080","This is Information Box");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Pragna 212218106080","Is this Assignment?");
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Assignment","Yes");
    }
    if(reply==QMessageBox::No)
    {
        QMessageBox::information(this,"Assignment","No");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Pragna 212218106080","This is a Custom message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
        if(reply==QMessageBox::Yes)
        {
            qDebug()<<"Nothing Is Displayed";
        }
        if(reply==QMessageBox::YesToAll)
        {
            QMessageBox::warning(this,"Pragna 6080","Display the message with warning as YesToAll");
        }
        if(reply==QMessageBox::No)
        {
            QMessageBox::warning(this,"Pragna 6080","No message");
        }
        if(reply==QMessageBox::NoToAll)
        {
            QMessageBox::warning(this,"Pragna 6080","Dont Display the message with warning as YesToAll");
        }
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Pragna 212218106080","This is a Warning message!");

}
