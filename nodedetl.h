#ifndef NODEDETL_H
#define NODEDETL_H

#include <QDialog>

namespace Ui {
class NodeDetl;
}

class NodeDetl : public QDialog
{
    Q_OBJECT

public:
    explicit NodeDetl(QWidget *parent = nullptr);
    ~NodeDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::NodeDetl *ui;
};

#endif // NODEDETL_H
