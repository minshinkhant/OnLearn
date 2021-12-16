#ifndef CHATBOTDETL_H
#define CHATBOTDETL_H

#include <QDialog>

namespace Ui {
class ChatbotDetl;
}

class ChatbotDetl : public QDialog
{
    Q_OBJECT

public:
    explicit ChatbotDetl(QWidget *parent = nullptr);
    ~ChatbotDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ChatbotDetl *ui;
};

#endif // CHATBOTDETL_H
