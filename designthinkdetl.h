#ifndef DESIGNTHINKDETL_H
#define DESIGNTHINKDETL_H

#include <QDialog>

namespace Ui {
class DesignThinkDetl;
}

class DesignThinkDetl : public QDialog
{
    Q_OBJECT

public:
    explicit DesignThinkDetl(QWidget *parent = nullptr);
    ~DesignThinkDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::DesignThinkDetl *ui;
};

#endif // DESIGNTHINKDETL_H
