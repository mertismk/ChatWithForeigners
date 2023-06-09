/********************************************************************************
** Form generated from reading UI file 'authorizationform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONFORM_H
#define UI_AUTHORIZATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthorizationForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Title_label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *login_horizontalLayout;
    QLabel *login_label;
    QLineEdit *login_lineEdit;
    QHBoxLayout *password_horizontalLayout;
    QLabel *password_label;
    QLineEdit *password_lineEdit;
    QHBoxLayout *email_horizontalLayout;
    QLabel *email_label;
    QLineEdit *email_lineEdit;
    QLabel *errorIdentificyLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *buttons_horizontalLayout;
    QPushButton *exit_pushButton;
    QPushButton *signUp_pushButton;
    QPushButton *signIn_pushButton;

    void setupUi(QWidget *AuthorizationForm)
    {
        if (AuthorizationForm->objectName().isEmpty())
            AuthorizationForm->setObjectName("AuthorizationForm");
        AuthorizationForm->resize(400, 600);
        verticalLayoutWidget = new QWidget(AuthorizationForm);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 10, 391, 581));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Title_label = new QLabel(verticalLayoutWidget);
        Title_label->setObjectName("Title_label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        Title_label->setFont(font);
        Title_label->setLayoutDirection(Qt::LeftToRight);
        Title_label->setTextFormat(Qt::PlainText);
        Title_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Title_label);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        login_horizontalLayout = new QHBoxLayout();
        login_horizontalLayout->setObjectName("login_horizontalLayout");
        login_label = new QLabel(verticalLayoutWidget);
        login_label->setObjectName("login_label");

        login_horizontalLayout->addWidget(login_label);

        login_lineEdit = new QLineEdit(verticalLayoutWidget);
        login_lineEdit->setObjectName("login_lineEdit");

        login_horizontalLayout->addWidget(login_lineEdit);


        verticalLayout->addLayout(login_horizontalLayout);

        password_horizontalLayout = new QHBoxLayout();
        password_horizontalLayout->setObjectName("password_horizontalLayout");
        password_label = new QLabel(verticalLayoutWidget);
        password_label->setObjectName("password_label");

        password_horizontalLayout->addWidget(password_label);

        password_lineEdit = new QLineEdit(verticalLayoutWidget);
        password_lineEdit->setObjectName("password_lineEdit");

        password_horizontalLayout->addWidget(password_lineEdit);


        verticalLayout->addLayout(password_horizontalLayout);

        email_horizontalLayout = new QHBoxLayout();
        email_horizontalLayout->setObjectName("email_horizontalLayout");
        email_label = new QLabel(verticalLayoutWidget);
        email_label->setObjectName("email_label");

        email_horizontalLayout->addWidget(email_label);

        email_lineEdit = new QLineEdit(verticalLayoutWidget);
        email_lineEdit->setObjectName("email_lineEdit");

        email_horizontalLayout->addWidget(email_lineEdit);


        verticalLayout->addLayout(email_horizontalLayout);

        errorIdentificyLabel = new QLabel(verticalLayoutWidget);
        errorIdentificyLabel->setObjectName("errorIdentificyLabel");
        errorIdentificyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(errorIdentificyLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttons_horizontalLayout = new QHBoxLayout();
        buttons_horizontalLayout->setObjectName("buttons_horizontalLayout");
        exit_pushButton = new QPushButton(verticalLayoutWidget);
        exit_pushButton->setObjectName("exit_pushButton");

        buttons_horizontalLayout->addWidget(exit_pushButton);

        signUp_pushButton = new QPushButton(verticalLayoutWidget);
        signUp_pushButton->setObjectName("signUp_pushButton");

        buttons_horizontalLayout->addWidget(signUp_pushButton);

        signIn_pushButton = new QPushButton(verticalLayoutWidget);
        signIn_pushButton->setObjectName("signIn_pushButton");

        buttons_horizontalLayout->addWidget(signIn_pushButton);


        verticalLayout->addLayout(buttons_horizontalLayout);


        retranslateUi(AuthorizationForm);

        QMetaObject::connectSlotsByName(AuthorizationForm);
    } // setupUi

    void retranslateUi(QWidget *AuthorizationForm)
    {
        AuthorizationForm->setWindowTitle(QCoreApplication::translate("AuthorizationForm", "Enter in Overseas", nullptr));
        Title_label->setText(QCoreApplication::translate("AuthorizationForm", "Overseas", nullptr));
        login_label->setText(QCoreApplication::translate("AuthorizationForm", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        password_label->setText(QCoreApplication::translate("AuthorizationForm", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        email_label->setText(QCoreApplication::translate("AuthorizationForm", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        errorIdentificyLabel->setText(QString());
        exit_pushButton->setText(QCoreApplication::translate("AuthorizationForm", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        signUp_pushButton->setText(QCoreApplication::translate("AuthorizationForm", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        signIn_pushButton->setText(QCoreApplication::translate("AuthorizationForm", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationForm: public Ui_AuthorizationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONFORM_H
