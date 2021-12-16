#include "database.h"
#include "ui_database.h"
#include "sqldetl.h"
#include "nosqldetl.h"
#include "mainmenu.h"


DataBase::DataBase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataBase)
{
    ui->setupUi(this);
    setWindowTitle("DataBase");
}

DataBase::~DataBase()
{
    delete ui;
}

//SQL button
void DataBase::on_pushButton_clicked()
{
    SQLDetl SqlDetl;
    close();
    SqlDetl.exec();
}

//Nosql button
void DataBase::on_pushButton_2_clicked()
{
    NoSqlDetl NosqlDetl;
    close();
    NosqlDetl.exec();
}

//go back button
void DataBase::on_pushButton_3_clicked()
{
    MainMenu Mainmenu;
    close();
    Mainmenu.exec();
}

