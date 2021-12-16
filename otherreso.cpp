#include "otherreso.h"
#include "ui_otherreso.h"
#include "chatbotdetl.h"
#include "designthinkdetl.h"
#include "mainmenu.h"

OtherReso::OtherReso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OtherReso)
{
    ui->setupUi(this);
    setWindowTitle("Other Resources");
}

OtherReso::~OtherReso()
{
    delete ui;
}
//chatbot button
void OtherReso::on_pushButton_clicked()
{
    ChatbotDetl ChatbotDetl;
    close();
    ChatbotDetl.exec();
}


//design think button
void OtherReso::on_pushButton_2_clicked()
{
    DesignThinkDetl DesgThikDetl;
    close();
    DesgThikDetl.exec();
}


void OtherReso::on_pushButton_3_clicked()
{
    MainMenu MainMenu;
    close();
    MainMenu.exec();
}

