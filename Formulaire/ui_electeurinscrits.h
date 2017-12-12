/********************************************************************************
** Form generated from reading UI file 'electeurinscrits.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECTEURINSCRITS_H
#define UI_ELECTEURINSCRITS_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ElecteurInscritsClass
{
public:
    QLabel *label_7;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *LineEditNom;
    QLineEdit *lineEdit_8;
    QLabel *label_4;
    QLineEdit *lineEdit_9;
    QLabel *label_6;
    QSpinBox *spinBox;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ElecteurInscritsClass)
    {
        if (ElecteurInscritsClass->objectName().isEmpty())
            ElecteurInscritsClass->setObjectName(QString::fromUtf8("ElecteurInscritsClass"));
        ElecteurInscritsClass->resize(606, 330);
        label_7 = new QLabel(ElecteurInscritsClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 20, 341, 31));
        QFont font;
        font.setPointSize(20);
        label_7->setFont(font);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_3 = new QLabel(ElecteurInscritsClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 130, 55, 17));
        lineEdit_5 = new QLineEdit(ElecteurInscritsClass);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(40, 240, 61, 27));
        dateEdit = new QDateEdit(ElecteurInscritsClass);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(300, 150, 181, 27));
        dateEdit->setMaximumDate(QDate(7937, 12, 31));
        dateEdit->setMinimumDate(QDate(1770, 1, 1));
        dateEdit->setCalendarPopup(true);
        lineEdit_3 = new QLineEdit(ElecteurInscritsClass);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 150, 241, 27));
        lineEdit_2 = new QLineEdit(ElecteurInscritsClass);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(300, 80, 281, 27));
        lineEdit_6 = new QLineEdit(ElecteurInscritsClass);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(120, 240, 61, 27));
        lineEdit_7 = new QLineEdit(ElecteurInscritsClass);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(200, 240, 61, 27));
        label_8 = new QLabel(ElecteurInscritsClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 220, 61, 17));
        label_5 = new QLabel(ElecteurInscritsClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 200, 61, 17));
        LineEditNom = new QLineEdit(ElecteurInscritsClass);
        LineEditNom->setObjectName(QString::fromUtf8("LineEditNom"));
        LineEditNom->setGeometry(QRect(40, 80, 241, 27));
        lineEdit_8 = new QLineEdit(ElecteurInscritsClass);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(280, 240, 61, 27));
        label_4 = new QLabel(ElecteurInscritsClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 130, 131, 17));
        lineEdit_9 = new QLineEdit(ElecteurInscritsClass);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(360, 240, 61, 27));
        label_6 = new QLabel(ElecteurInscritsClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(500, 130, 91, 17));
        spinBox = new QSpinBox(ElecteurInscritsClass);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(500, 150, 49, 27));
        spinBox->setMaximum(4);
        label_9 = new QLabel(ElecteurInscritsClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(140, 220, 31, 17));
        label_12 = new QLabel(ElecteurInscritsClass);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(370, 220, 51, 17));
        label_10 = new QLabel(ElecteurInscritsClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(200, 220, 71, 20));
        label_11 = new QLabel(ElecteurInscritsClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(300, 220, 31, 17));
        label = new QLabel(ElecteurInscritsClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 55, 17));
        label_2 = new QLabel(ElecteurInscritsClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 60, 55, 17));
        pushButton_3 = new QPushButton(ElecteurInscritsClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 280, 91, 27));
        pushButton = new QPushButton(ElecteurInscritsClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 280, 85, 27));
        pushButton_2 = new QPushButton(ElecteurInscritsClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 280, 85, 27));

        retranslateUi(ElecteurInscritsClass);

        QMetaObject::connectSlotsByName(ElecteurInscritsClass);
    } // setupUi

    void retranslateUi(QDialog *ElecteurInscritsClass)
    {
        ElecteurInscritsClass->setWindowTitle(QApplication::translate("ElecteurInscritsClass", "ElecteurInscrits", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ElecteurInscritsClass", "Inscription d'un Electeur", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ElecteurInscritsClass", "NAS", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ElecteurInscritsClass", "No. civique", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ElecteurInscritsClass", "Adresse ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ElecteurInscritsClass", "Date de Naissance", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ElecteurInscritsClass", "Parti Politique", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ElecteurInscritsClass", "Rue", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ElecteurInscritsClass", "Province", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ElecteurInscritsClass", "Code Postal", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ElecteurInscritsClass", "Ville", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ElecteurInscritsClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ElecteurInscritsClass", "Prenom", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ElecteurInscritsClass", "Menu Principal", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ElecteurInscritsClass", "valider", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ElecteurInscritsClass", "Annuller", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ElecteurInscritsClass: public Ui_ElecteurInscritsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTEURINSCRITS_H
