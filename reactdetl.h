#ifndef REACTDETL_H
#define REACTDETL_H

#include <QDialog>

namespace Ui {
class ReactDetl;
}

class ReactDetl : public QDialog
{
    Q_OBJECT

public:
    explicit ReactDetl(QWidget *parent = nullptr);
    ~ReactDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ReactDetl *ui;
};

#endif // REACTDETL_H
