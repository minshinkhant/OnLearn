#ifndef HTMLCSSDETAIL_H
#define HTMLCSSDETAIL_H

#include <QDialog>

namespace Ui {
class HtmlCssDetail;
}

class HtmlCssDetail : public QDialog
{
    Q_OBJECT

public:
    explicit HtmlCssDetail(QWidget *parent = nullptr);
    ~HtmlCssDetail();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::HtmlCssDetail *ui;
};

#endif // HTMLCSSDETAIL_H
