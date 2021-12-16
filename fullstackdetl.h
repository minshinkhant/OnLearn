#ifndef FULLSTACKDETL_H
#define FULLSTACKDETL_H

#include <QDialog>

namespace Ui {
class FullstackDetl;
}

class FullstackDetl : public QDialog
{
    Q_OBJECT

public:
    explicit FullstackDetl(QWidget *parent = nullptr);
    ~FullstackDetl();

private:
    Ui::FullstackDetl *ui;
};

#endif // FULLSTACKDETL_H
