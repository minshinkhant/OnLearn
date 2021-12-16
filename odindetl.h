#ifndef ODINDETL_H
#define ODINDETL_H

#include <QDialog>

namespace Ui {
class OdinDetl;
}

class OdinDetl : public QDialog
{
    Q_OBJECT

public:
    explicit OdinDetl(QWidget *parent = nullptr);
    ~OdinDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::OdinDetl *ui;
};

#endif // ODINDETL_H
