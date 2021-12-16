#include "nodedetl.h"
#include "ui_nodedetl.h"
#include "backend.h"
#include "readfile.h"

#include <QMessageBox>
#include <QDesktopServices>

NodeDetl::NodeDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NodeDetl)
{
    ui->setupUi(this);
    setWindowTitle("NodeJS");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/nodejs.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

NodeDetl::~NodeDetl()
{
    delete ui;
}

//go to website button
void NodeDetl::on_pushButton_2_clicked()
{
    QString link = "https://nodejs.dev/learn";
    QDesktopServices::openUrl(QUrl(link));

}

//go back button
void NodeDetl::on_pushButton_clicked()
{
    BackEnd BackEnd;
    close();
    BackEnd.exec();
}

