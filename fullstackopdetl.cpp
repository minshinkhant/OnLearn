#include "fullstackopdetl.h"
#include "ui_fullstackopdetl.h"
#include "fullstack.h"
#include "readfile.h"

#include<QMessageBox>
#include <QDesktopServices>

FullStackOpDetl::FullStackOpDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FullStackOpDetl)
{
    ui->setupUi(this);
    setWindowTitle("FullStackOpen");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/fullstackopen.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

FullStackOpDetl::~FullStackOpDetl()
{
    delete ui;
}

//go to website button
void FullStackOpDetl::on_pushButton_2_clicked()
{
    QString link = "https://fullstackopen.com/en/";
    QDesktopServices::openUrl(QUrl(link));
}

//go back button
void FullStackOpDetl::on_pushButton_clicked()
{
    FullStack FullStack;
    close();
    FullStack.exec();
}

