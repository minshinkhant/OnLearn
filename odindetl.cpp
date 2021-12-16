#include "odindetl.h"
#include "ui_odindetl.h"
#include "fullstack.h"
#include "readfile.h"

#include <QMessageBox>
#include <QDesktopServices>

OdinDetl::OdinDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OdinDetl)
{
    ui->setupUi(this);
    setWindowTitle("The Odin Project");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/odinproject.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

OdinDetl::~OdinDetl()
{
    delete ui;
}


//go to website button
void OdinDetl::on_pushButton_2_clicked()
{
    QString link = "https://www.theodinproject.com/paths";
    QDesktopServices::openUrl(QUrl(link));

}

//go back button
void OdinDetl::on_pushButton_clicked()
{
    FullStack FullStack;
    close();
    FullStack.exec();
}
