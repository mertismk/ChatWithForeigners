/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Chat_Username;
    QTextBrowser *Chat_textBrowser;
    QHBoxLayout *horizontalLayout;
    QLineEdit *Chat_lineEdit;
    QPushButton *Chat_pushButton;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(400, 600);
        verticalLayoutWidget = new QWidget(Chat);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 1, 381, 591));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Chat_Username = new QLabel(verticalLayoutWidget);
        Chat_Username->setObjectName("Chat_Username");

        verticalLayout_2->addWidget(Chat_Username);

        Chat_textBrowser = new QTextBrowser(verticalLayoutWidget);
        Chat_textBrowser->setObjectName("Chat_textBrowser");

        verticalLayout_2->addWidget(Chat_textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Chat_lineEdit = new QLineEdit(verticalLayoutWidget);
        Chat_lineEdit->setObjectName("Chat_lineEdit");

        horizontalLayout->addWidget(Chat_lineEdit);

        Chat_pushButton = new QPushButton(verticalLayoutWidget);
        Chat_pushButton->setObjectName("Chat_pushButton");

        horizontalLayout->addWidget(Chat_pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Chat", nullptr));
        Chat_Username->setText(QCoreApplication::translate("Chat", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        Chat_pushButton->setText(QCoreApplication::translate("Chat", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
