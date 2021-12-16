#ifndef JAVASCRIPTDETL_H
#define JAVASCRIPTDETL_H

#include <QDialog>

namespace Ui {
class JavascriptDetl;
}

class JavascriptDetl : public QDialog
{
    Q_OBJECT

public:
    explicit JavascriptDetl(QWidget *parent = nullptr);
    ~JavascriptDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::JavascriptDetl *ui;
};

#endif // JAVASCRIPTDETL_H
