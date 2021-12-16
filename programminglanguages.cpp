#include "programminglanguages.h"
#include "ui_programminglanguages.h"
#include "cppdetl.h"
#include "pythondetl.h"
#include "mainmenu.h"

ProgrammingLanguages::ProgrammingLanguages(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgrammingLanguages)
{
    ui->setupUi(this);
    setWindowTitle("Programming Languages");
}

ProgrammingLanguages::~ProgrammingLanguages()
{
    delete ui;
}

//cpp button
void ProgrammingLanguages::on_pushButton_clicked()
{
    CppDetl cppDetl;
    close();
    cppDetl.exec();
}

//python button
void ProgrammingLanguages::on_pushButton_2_clicked()
{
    PythonDetl Pythondetl;
    close();
    Pythondetl.exec();
}

//go back button
void ProgrammingLanguages::on_pushButton_3_clicked()
{
    MainMenu mainmenu;
    close();
    mainmenu.exec();
}

