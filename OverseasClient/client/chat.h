#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QByteArray>
#include "chatclient.h"

namespace Ui {
class Chat;
}

class Chat : public QWidget
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr);
    ~Chat();
    void loadDataFromMainWindow(const QString& data, const QString& data2);
    void loadDialog(QString client_name, QString dialog_user, QString language);

private slots:
    void on_Chat_pushButton_clicked();

    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

    void on_Chat_lineEdit_returnPressed();

private:
    Ui::Chat *ui;
    ChatClient *chatClient;
};

#endif // CHAT_H
