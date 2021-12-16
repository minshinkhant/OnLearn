#include "fullstack.h"
#include "ui_fullstack.h"
#include "odindetl.h"
#include "freecodedetl.h"
#include "fullstackopdetl.h"
#include "webdev.h"


FullStack::FullStack(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FullStack)
{
    ui->setupUi(this);
    setWindowTitle("Full-Stack");
}

FullStack::~FullStack()
{
    delete ui;
}

//odin button
void FullStack::on_pushButton_clicked()
{
    OdinDetl OdinDetl;
    close(); //close the current window;
    OdinDetl.exec();
}

//fullstackopen button
void FullStack::on_pushButton_2_clicked()
{

    FullStackOpDetl FullStaOpDetl;
    close();
    FullStaOpDetl.exec();
}

//freecodecamp button
void FullStack::on_pushButton_3_clicked()
{
    FreecodeDetl FreecodeDetl;
    close();
    FreecodeDetl.exec();
}

//go back button
void FullStack::on_pushButton_4_clicked()
{
    WebDev WebDev;
    close();
    WebDev.exec();
}

