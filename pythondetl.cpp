#include "pythondetl.h"
#include "ui_pythondetl.h"
#include "readfile.h"
#include "programminglanguages.h"

#include <QMessageBox>
#include <QDesktopServices>

PythonDetl::PythonDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PythonDetl)
{
    ui->setupUi(this);
    setWindowTitle("Python");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/python.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

PythonDetl::~PythonDetl()
{
    delete ui;
}

//go to web button
void PythonDetl::on_pushButton_2_clicked()
{
    QString link = "https://www.learnpython.org/";
    QDesktopServices::openUrl(QUrl(link));
}

//go back button
void PythonDetl::on_pushButton_clicked()
{
    ProgrammingLanguages prolang;
    close();
    prolang.exec();
}

