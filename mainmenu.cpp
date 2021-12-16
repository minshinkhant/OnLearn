#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "webdev.h"
#include "programminglanguages.h"
#include "database.h"
#include "otherreso.h"

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    setWindowTitle("OnLearn");
}

MainMenu::~MainMenu()
{
    delete ui;
}

//web dev button
void MainMenu::on_pushButton_clicked()
{
    WebDev WebDev;
    close();
    WebDev.exec();
}


// programming language button
void MainMenu::on_pushButton_2_clicked()
{
    ProgrammingLanguages ProLang;
    close();
    ProLang.exec();
}

//database button
void MainMenu::on_pushButton_3_clicked()
{
    DataBase DataBase;
    close();
    DataBase.exec();
}

//other Resources button
void MainMenu::on_pushButton_4_clicked()
{
    OtherReso OtherReso;
    close();
    OtherReso.exec();
}


void MainMenu::on_pushButton_5_clicked()
{
    close();
}

