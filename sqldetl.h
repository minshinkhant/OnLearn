#ifndef SQLDETL_H
#define SQLDETL_H

#include <QDialog>

namespace Ui {
class SQLDetl;
}

class SQLDetl : public QDialog
{
    Q_OBJECT

public:
    explicit SQLDetl(QWidget *parent = nullptr);
    ~SQLDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::SQLDetl *ui;
};

#endif // SQLDETL_H
