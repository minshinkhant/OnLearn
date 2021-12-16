#include "backend.h"
#include "ui_backend.h"
#include "djangodetl.h"
#include "nodedetl.h"
#include "webdev.h"

BackEnd::BackEnd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BackEnd)
{
    ui->setupUi(this);
    setWindowTitle("BackEnd");
}

BackEnd::~BackEnd()
{
    delete ui;
}

//Django Button
void BackEnd::on_pushButton_clicked()
{
    DjangoDetl Django;
    close();
    Django.exec();
}

//NodeJS Button
void BackEnd::on_pushButton_2_clicked()
{
    NodeDetl NodeDetl;
    close();
    NodeDetl.exec();
}

//go back button
void BackEnd::on_pushButton_3_clicked()
{
    WebDev WebDev;
    close();
    WebDev.exec();
}

