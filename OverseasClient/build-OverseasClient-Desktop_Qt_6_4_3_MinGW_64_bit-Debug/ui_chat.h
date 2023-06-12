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
#include <QtWidgets/QComboBox>
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
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *Chat_Username;
    QComboBox *comboBox;
    QTextBrowser *Chat_textBrowser;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *Chat_lineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *Chat_pushButton;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(402, 600);
        verticalLayout_4 = new QVBoxLayout(Chat);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        Chat_Username = new QLabel(Chat);
        Chat_Username->setObjectName("Chat_Username");

        verticalLayout_2->addWidget(Chat_Username);

        comboBox = new QComboBox(Chat);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);

        Chat_textBrowser = new QTextBrowser(Chat);
        Chat_textBrowser->setObjectName("Chat_textBrowser");
        Chat_textBrowser->setMinimumSize(QSize(379, 0));

        verticalLayout_2->addWidget(Chat_textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        Chat_lineEdit = new QLineEdit(Chat);
        Chat_lineEdit->setObjectName("Chat_lineEdit");

        verticalLayout_3->addWidget(Chat_lineEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        Chat_pushButton = new QPushButton(Chat);
        Chat_pushButton->setObjectName("Chat_pushButton");

        verticalLayout->addWidget(Chat_pushButton);

        pushButton = new QPushButton(Chat);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        label = new QLabel(Chat);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);


        verticalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Chat", nullptr));
        Chat_Username->setText(QCoreApplication::translate("Chat", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Chat", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Chat", "\320\220\320\267\320\265\321\200\320\261\320\260\320\271\320\264\320\266\320\260\320\275\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Chat", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Chat", "\320\220\321\200\320\260\320\261\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Chat", "\320\220\321\200\320\274\321\217\320\275\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Chat", "\320\221\320\265\320\273\320\276\321\200\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Chat", "\320\223\321\200\321\203\320\267\320\270\320\275\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Chat", "\320\230\321\201\320\277\320\260\320\275\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("Chat", "\320\230\321\202\320\260\320\273\321\214\321\217\320\275\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("Chat", "\320\232\320\260\320\267\320\260\321\205\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("Chat", "\320\232\320\270\321\200\320\263\320\270\320\267\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("Chat", "\320\232\320\270\321\202\320\260\320\271\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("Chat", "\320\235\320\265\320\274\320\265\321\206\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("Chat", "\320\241\320\265\321\200\320\261\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("Chat", "\320\242\321\203\321\200\320\265\321\206\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("Chat", "\320\243\320\272\321\200\320\260\320\270\320\275\321\201\320\272\320\270\320\271", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("Chat", "\320\244\321\200\320\260\320\275\321\206\321\203\320\267\321\201\320\272\320\270\320\271", nullptr));

        Chat_textBrowser->setHtml(QCoreApplication::translate("Chat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Chat_pushButton->setText(QCoreApplication::translate("Chat", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Chat", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\207\320\260\321\202", nullptr));
        label->setText(QCoreApplication::translate("Chat", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264 \320\276\321\201\321\203\321\211\320\265\321\201\321\202\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \321\201 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \321\201\320\265\321\200\320\262\320\270\321\201\320\260 \302\253\320\257\320\275\320\264\320\265\320\272\321\201.\320\237\320\265\321\200\320\265\320\262\320\276\320\264\321\207\320\270\320\272\302\273.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
