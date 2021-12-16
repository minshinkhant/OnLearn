#include "htmlcssdetail.h"
#include "ui_htmlcssdetail.h"
#include "frontend.h"
#include "window.h"
#include "readfile.h"

#include <QUrl>
#include <QDesktopServices>
#include<QMessageBox>

HtmlCssDetail::HtmlCssDetail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HtmlCssDetail)
{
    ui->setupUi(this);
    setWindowTitle("HTML/CSS");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/HtmlCss.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }


}

HtmlCssDetail::~HtmlCssDetail()
{
    delete ui;
}

//go to website button
void HtmlCssDetail::on_pushButton_2_clicked()
{
    //To open a browser from a link
    QString link = "https://www.freecodecamp.org/learn/responsive-web-design/";
    QDesktopServices::openUrl(QUrl(link));
}

//back button
void HtmlCssDetail::on_pushButton_clicked()
{
    FrontEnd FrontEnd;
    //frontend.setModal(true);
    close();
    FrontEnd.exec();

}

