#include "chatbotdetl.h"
#include "ui_chatbotdetl.h"
#include "readfile.h"
#include "otherreso.h"

#include <QMessageBox>
#include <QDesktopServices>

ChatbotDetl::ChatbotDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatbotDetl)
{
    ui->setupUi(this);
    setWindowTitle("ChatBotIBM");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/ChatBotIBM.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

ChatbotDetl::~ChatbotDetl()
{
    delete ui;
}

//go to website button
void ChatbotDetl::on_pushButton_2_clicked()
{
    //To open a browser from a link
    QString link = "https://www.ibm.com/products/watson-assistant/docs-resources";
    QDesktopServices::openUrl(QUrl(link));
}

//go back button
void ChatbotDetl::on_pushButton_clicked()
{
    OtherReso OtherReso;
    close();
    OtherReso.exec();
}

