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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *Search_lineEdit;
    QPushButton *Search_pushButton;
    QPushButton *Chat1_pushButton;
    QPushButton *Chat2_pushButton;
    QPushButton *Chat3_pushButton;
    QPushButton *Chat4_pushButton;
    QPushButton *Chat5_pushButton;
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
    QMenuBar *menubar;
    QMenu *LangChange_menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(400, 600);
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
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 381, 531));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Search_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        Search_lineEdit->setObjectName("Search_lineEdit");
        Search_lineEdit->setFrame(true);

        horizontalLayout_2->addWidget(Search_lineEdit);

        Search_pushButton = new QPushButton(verticalLayoutWidget_2);
        Search_pushButton->setObjectName("Search_pushButton");
        QFont font;
        font.setPointSize(8);
        Search_pushButton->setFont(font);

        horizontalLayout_2->addWidget(Search_pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        Chat1_pushButton = new QPushButton(verticalLayoutWidget_2);
        Chat1_pushButton->setObjectName("Chat1_pushButton");

        verticalLayout_2->addWidget(Chat1_pushButton);

        Chat2_pushButton = new QPushButton(verticalLayoutWidget_2);
        Chat2_pushButton->setObjectName("Chat2_pushButton");

        verticalLayout_2->addWidget(Chat2_pushButton);

        Chat3_pushButton = new QPushButton(verticalLayoutWidget_2);
        Chat3_pushButton->setObjectName("Chat3_pushButton");

        verticalLayout_2->addWidget(Chat3_pushButton);

        Chat4_pushButton = new QPushButton(verticalLayoutWidget_2);
        Chat4_pushButton->setObjectName("Chat4_pushButton");

        verticalLayout_2->addWidget(Chat4_pushButton);

        Chat5_pushButton = new QPushButton(verticalLayoutWidget_2);
        Chat5_pushButton->setObjectName("Chat5_pushButton");

        verticalLayout_2->addWidget(Chat5_pushButton);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        usernameLineEdit = new QLineEdit(verticalLayoutWidget_2);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setReadOnly(true);

        verticalLayout->addWidget(usernameLineEdit);

        NickEdit_pushButton = new QPushButton(verticalLayoutWidget_2);
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

        Exit_pushButton = new QPushButton(verticalLayoutWidget_2);
        Exit_pushButton->setObjectName("Exit_pushButton");

        verticalLayout_3->addWidget(Exit_pushButton);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 26));
        LangChange_menu = new QMenu(menubar);
        LangChange_menu->setObjectName("LangChange_menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(LangChange_menu->menuAction());
        LangChange_menu->addAction(RusLang_action);
        LangChange_menu->addAction(EngLang_action);
        LangChange_menu->addAction(GerLang_action);
        LangChange_menu->addAction(FrLang_action);
        LangChange_menu->addAction(ChLang_action);
        LangChange_menu->addAction(SpLang_action);

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
        Chat1_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        Chat2_pushButton->setText(QString());
        Chat3_pushButton->setText(QString());
        Chat4_pushButton->setText(QString());
        Chat5_pushButton->setText(QString());
        usernameLineEdit->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        NickEdit_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        Exit_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        LangChange_menu->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\217\320\267\321\213\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
