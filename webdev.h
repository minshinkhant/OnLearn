#ifndef WEBDEV_H
#define WEBDEV_H

#include <QDialog>

namespace Ui {
class WebDev;
}

class WebDev : public QDialog
{
    Q_OBJECT

public:
    explicit WebDev(QWidget *parent = nullptr);
    ~WebDev();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::WebDev *ui;
};

#endif // WEBDEV_H
