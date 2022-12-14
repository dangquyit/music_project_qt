/********************************************************************************
** Form generated from reading UI file 'formlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOGIN_H
#define UI_FORMLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLogin
{
public:
    QLabel *bgContainer;
    QLineEdit *inputUserName;
    QLabel *labelpassword;
    QLabel *title;
    QPushButton *btnRegister;
    QLabel *question;
    QPushButton *btnLogin;
    QLabel *errorPassword;
    QLabel *errorUserName;
    QLabel *labelUserName;
    QLineEdit *inputPassword;
    QPushButton *hidePasswordbt;
    QLabel *bgContent;

    void setupUi(QWidget *FormLogin)
    {
        if (FormLogin->objectName().isEmpty())
            FormLogin->setObjectName(QString::fromUtf8("FormLogin"));
        FormLogin->resize(661, 546);
        bgContainer = new QLabel(FormLogin);
        bgContainer->setObjectName(QString::fromUtf8("bgContainer"));
        bgContainer->setGeometry(QRect(-250, -30, 1581, 621));
        bgContainer->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        bgContainer->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        inputUserName = new QLineEdit(FormLogin);
        inputUserName->setObjectName(QString::fromUtf8("inputUserName"));
        inputUserName->setGeometry(QRect(300, 200, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Banner Semibold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        inputUserName->setFont(font);
        inputUserName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"\n"
"}"));
        labelpassword = new QLabel(FormLogin);
        labelpassword->setObjectName(QString::fromUtf8("labelpassword"));
        labelpassword->setGeometry(QRect(190, 270, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Showcard Gothic"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        labelpassword->setFont(font1);
        labelpassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 9pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        title = new QLabel(FormLogin);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(210, 90, 281, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Showcard Gothic"));
        font2.setPointSize(24);
        font2.setBold(false);
        font2.setItalic(false);
        title->setFont(font2);
        title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 24pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnRegister = new QPushButton(FormLogin);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(380, 350, 111, 51));
        btnRegister->setFont(font1);
        btnRegister->setCursor(QCursor(Qt::OpenHandCursor));
        btnRegister->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"font: 9pt \"Showcard Gothic\";\n"
"	border-radius:20px;\n"
"	padding: 0 8px;\n"
"	\n"
"	color:rgb(10,100,180);\n"
"}\n"
""));
        question = new QLabel(FormLogin);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(200, 360, 181, 31));
        question->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 9pt \"Segoe UI\";\n"
"	border-radius:20px;\n"
"	padding: 0 8px;\n"
"	\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnLogin = new QPushButton(FormLogin);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(254, 410, 171, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Stencil"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        btnLogin->setFont(font3);
        btnLogin->setCursor(QCursor(Qt::OpenHandCursor));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	\n"
"	border-radius:20px;\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        errorPassword = new QLabel(FormLogin);
        errorPassword->setObjectName(QString::fromUtf8("errorPassword"));
        errorPassword->setGeometry(QRect(300, 300, 161, 16));
        errorPassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 6pt \"Segoergb(255, 21, 72) UI\";\n"
"	\n"
"	color: rgb(191, 0, 0);\n"
"	\n"
"	padding: 0 8px;\n"
"}"));
        errorUserName = new QLabel(FormLogin);
        errorUserName->setObjectName(QString::fromUtf8("errorUserName"));
        errorUserName->setGeometry(QRect(300, 230, 161, 16));
        errorUserName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 6pt \"Segoergb(255, 21, 72) UI\";\n"
"	\n"
"	color: rgb(191, 0, 0);\n"
"	\n"
"	padding: 0 8px;\n"
"}"));
        labelUserName = new QLabel(FormLogin);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));
        labelUserName->setGeometry(QRect(190, 200, 111, 31));
        labelUserName->setFont(font1);
        labelUserName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 9pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        inputPassword = new QLineEdit(FormLogin);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));
        inputPassword->setGeometry(QRect(300, 270, 161, 31));
        inputPassword->setFont(font);
        inputPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"\n"
"}"));
        hidePasswordbt = new QPushButton(FormLogin);
        hidePasswordbt->setObjectName(QString::fromUtf8("hidePasswordbt"));
        hidePasswordbt->setGeometry(QRect(430, 275, 24, 21));
        hidePasswordbt->setCursor(QCursor(Qt::OpenHandCursor));
        hidePasswordbt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background:white;\n"
"}"));
        bgContent = new QLabel(FormLogin);
        bgContent->setObjectName(QString::fromUtf8("bgContent"));
        bgContent->setGeometry(QRect(150, 30, 371, 481));
        bgContent->setStyleSheet(QString::fromUtf8("QPixmap{\n"
"border-radius:10px;\n"
"}"));
        bgContent->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        bgContainer->raise();
        bgContent->raise();
        btnLogin->raise();
        errorPassword->raise();
        errorUserName->raise();
        inputUserName->raise();
        labelpassword->raise();
        title->raise();
        btnRegister->raise();
        question->raise();
        inputPassword->raise();
        hidePasswordbt->raise();
        labelUserName->raise();

        retranslateUi(FormLogin);

        QMetaObject::connectSlotsByName(FormLogin);
    } // setupUi

    void retranslateUi(QWidget *FormLogin)
    {
        FormLogin->setWindowTitle(QCoreApplication::translate("FormLogin", "Form", nullptr));
        bgContainer->setText(QString());
        inputUserName->setPlaceholderText(QCoreApplication::translate("FormLogin", "username", nullptr));
        labelpassword->setText(QCoreApplication::translate("FormLogin", "Password:", nullptr));
        title->setText(QCoreApplication::translate("FormLogin", "OOP MUSIC", nullptr));
        btnRegister->setText(QCoreApplication::translate("FormLogin", "Sigup now", nullptr));
        question->setText(QCoreApplication::translate("FormLogin", "Don't have an account ?", nullptr));
        btnLogin->setText(QCoreApplication::translate("FormLogin", "Login", nullptr));
        errorPassword->setText(QString());
        errorUserName->setText(QString());
        labelUserName->setText(QCoreApplication::translate("FormLogin", "Username:", nullptr));
        inputPassword->setPlaceholderText(QCoreApplication::translate("FormLogin", "password", nullptr));
        hidePasswordbt->setText(QString());
        bgContent->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormLogin: public Ui_FormLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOGIN_H
