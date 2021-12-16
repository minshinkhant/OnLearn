#ifndef FREECODEDETL_H
#define FREECODEDETL_H

#include <QDialog>

namespace Ui {
class FreecodeDetl;
}

class FreecodeDetl : public QDialog
{
    Q_OBJECT

public:
    explicit FreecodeDetl(QWidget *parent = nullptr);
    ~FreecodeDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FreecodeDetl *ui;
};

#endif // FREECODEDETL_H
