#include "designthinkdetl.h"
#include "ui_designthinkdetl.h"
#include "readfile.h"
#include "otherreso.h"

#include <QMessageBox>
#include <QDesktopServices>

DesignThinkDetl::DesignThinkDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DesignThinkDetl)
{
    ui->setupUi(this);
    setWindowTitle("Design Thinking IBM");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/DesignThinkIBM.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

DesignThinkDetl::~DesignThinkDetl()
{
    delete ui;
}

//go to website button
void DesignThinkDetl::on_pushButton_2_clicked()
{
       QString link = "https://www.ibm.com/design/thinking/";
       QDesktopServices::openUrl(QUrl(link));
}


void DesignThinkDetl::on_pushButton_clicked()
{
    OtherReso OtherReso;
    close();
    OtherReso.exec();
}

