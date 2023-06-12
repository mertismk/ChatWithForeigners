/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *RusLang_action;
    QAction *EngLang_action;
    QAction *GerLang_action;
    QAction *FrLang_action;
    QAction *ChLang_action;
    QAction *SpLang_action;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *Search_lineEdit;
    QPushButton *Search_pushButton;
    QPushButton *Chat1_pushButton;
    QPushButton *Chat2_pushButton;
    QPushButton *Chat3_pushButton;
    QPushButton *Chat4_pushButton;
    QPushButton *Chat5_pushButton;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *dialog_lineEdit;
    QPushButton *dialog_pushButton;
    QLabel *dialogMessageLabel;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *usernameLineEdit;
    QPushButton *NickEdit_pushButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Exit_pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(400, 603);
        RusLang_action = new QAction(MainWindow);
        RusLang_action->setObjectName("RusLang_action");
        EngLang_action = new QAction(MainWindow);
        EngLang_action->setObjectName("EngLang_action");
        GerLang_action = new QAction(MainWindow);
        GerLang_action->setObjectName("GerLang_action");
        FrLang_action = new QAction(MainWindow);
        FrLang_action->setObjectName("FrLang_action");
        ChLang_action = new QAction(MainWindow);
        ChLang_action->setObjectName("ChLang_action");
        SpLang_action = new QAction(MainWindow);
        SpLang_action->setObjectName("SpLang_action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Search_lineEdit = new QLineEdit(centralwidget);
        Search_lineEdit->setObjectName("Search_lineEdit");
        Search_lineEdit->setFrame(true);

        horizontalLayout_2->addWidget(Search_lineEdit);

        Search_pushButton = new QPushButton(centralwidget);
        Search_pushButton->setObjectName("Search_pushButton");
        QFont font;
        font.setPointSize(8);
        Search_pushButton->setFont(font);

        horizontalLayout_2->addWidget(Search_pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        Chat1_pushButton = new QPushButton(centralwidget);
        Chat1_pushButton->setObjectName("Chat1_pushButton");
        Chat1_pushButton->setEnabled(true);

        verticalLayout_2->addWidget(Chat1_pushButton);

        Chat2_pushButton = new QPushButton(centralwidget);
        Chat2_pushButton->setObjectName("Chat2_pushButton");

        verticalLayout_2->addWidget(Chat2_pushButton);

        Chat3_pushButton = new QPushButton(centralwidget);
        Chat3_pushButton->setObjectName("Chat3_pushButton");

        verticalLayout_2->addWidget(Chat3_pushButton);

        Chat4_pushButton = new QPushButton(centralwidget);
        Chat4_pushButton->setObjectName("Chat4_pushButton");

        verticalLayout_2->addWidget(Chat4_pushButton);

        Chat5_pushButton = new QPushButton(centralwidget);
        Chat5_pushButton->setObjectName("Chat5_pushButton");

        verticalLayout_2->addWidget(Chat5_pushButton);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        dialog_lineEdit = new QLineEdit(centralwidget);
        dialog_lineEdit->setObjectName("dialog_lineEdit");

        horizontalLayout->addWidget(dialog_lineEdit);

        dialog_pushButton = new QPushButton(centralwidget);
        dialog_pushButton->setObjectName("dialog_pushButton");

        horizontalLayout->addWidget(dialog_pushButton);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout_5);

        dialogMessageLabel = new QLabel(centralwidget);
        dialogMessageLabel->setObjectName("dialogMessageLabel");
        dialogMessageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(dialogMessageLabel);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        usernameLineEdit = new QLineEdit(centralwidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setReadOnly(true);

        verticalLayout->addWidget(usernameLineEdit);

        NickEdit_pushButton = new QPushButton(centralwidget);
        NickEdit_pushButton->setObjectName("NickEdit_pushButton");
        NickEdit_pushButton->setFont(font);

        verticalLayout->addWidget(NickEdit_pushButton);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        Exit_pushButton = new QPushButton(centralwidget);
        Exit_pushButton->setObjectName("Exit_pushButton");

        verticalLayout_3->addWidget(Exit_pushButton);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Exit_pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Overseas", nullptr));
        RusLang_action->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        EngLang_action->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        GerLang_action->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\320\274\320\265\321\206\320\272\320\270\320\271", nullptr));
        FrLang_action->setText(QCoreApplication::translate("MainWindow", "\320\244\321\200\320\260\320\275\321\206\321\203\320\267\321\201\320\272\320\270\320\271", nullptr));
        ChLang_action->setText(QCoreApplication::translate("MainWindow", "\320\232\320\270\321\202\320\260\320\271\321\201\320\272\320\270\320\271", nullptr));
        SpLang_action->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\277\320\260\320\275\321\201\320\272\320\270\320\271", nullptr));
        Search_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        Chat1_pushButton->setText(QString());
        Chat2_pushButton->setText(QString());
        Chat3_pushButton->setText(QString());
        Chat4_pushButton->setText(QString());
        Chat5_pushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217, \321\201 \320\272\320\265\320\274 \321\205\320\276\321\202\320\270\321\202\320\265 \320\275\320\260\321\207\320\260\321\202\321\214 \320\264\320\270\320\260\320\273\320\276\320\263", nullptr));
        dialog_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        dialogMessageLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270, \321\201 \320\272\320\276\321\202\320\276\321\200\321\213\320\274\320\270 \320\265\321\201\321\202\321\214 \320\264\320\270\320\260\320\273\320\276\320\263:", nullptr));
        usernameLineEdit->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        NickEdit_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        Exit_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
