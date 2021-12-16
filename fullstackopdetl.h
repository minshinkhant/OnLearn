#ifndef FULLSTACKOPDETL_H
#define FULLSTACKOPDETL_H

#include <QDialog>

namespace Ui {
class FullStackOpDetl;
}

class FullStackOpDetl : public QDialog
{
    Q_OBJECT

public:
    explicit FullStackOpDetl(QWidget *parent = nullptr);
    ~FullStackOpDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FullStackOpDetl *ui;
};

#endif // FULLSTACKOPDETL_H
