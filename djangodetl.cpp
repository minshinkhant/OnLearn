#include "djangodetl.h"
#include "ui_djangodetl.h"
#include "backend.h"
#include "readfile.h"

#include <QMessageBox>
#include <QDesktopServices>

DjangoDetl::DjangoDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DjangoDetl)
{
    ui->setupUi(this);
    setWindowTitle("Django");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/django.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

DjangoDetl::~DjangoDetl()
{
    delete ui;
}

//go to website button
void DjangoDetl::on_pushButton_2_clicked()
{
    QString link = "https://developer.mozilla.org/en-US/docs/Learn/Server-side/Django";
    QDesktopServices::openUrl(QUrl(link));
}

//go back button
void DjangoDetl::on_pushButton_clicked()
{
    BackEnd BackEnd;
    close();
    BackEnd.exec();
}

