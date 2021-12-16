#include "cppdetl.h"
#include "ui_cppdetl.h"
#include "readfile.h"
#include "programminglanguages.h"

#include <QMessageBox>
#include <QDesktopServices>


CppDetl::CppDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CppDetl)
{
    ui->setupUi(this);
    setWindowTitle("C++");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/cpp.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

CppDetl::~CppDetl()
{
    delete ui;
}

//go to web button
void CppDetl::on_pushButton_2_clicked()
{
    QString link = "https://www.learncpp.com/";
    QDesktopServices::openUrl(QUrl(link));
}

//go back button
void CppDetl::on_pushButton_clicked()
{
    ProgrammingLanguages prolang;
    close();
    prolang.exec();
}

