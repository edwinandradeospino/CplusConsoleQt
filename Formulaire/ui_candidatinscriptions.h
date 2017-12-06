/********************************************************************************
** Form generated from reading UI file 'candidatinscriptions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATINSCRIPTIONS_H
#define UI_CANDIDATINSCRIPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CandidatInscriptionsClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *CandidatInscriptionsClass)
    {
        if (CandidatInscriptionsClass->objectName().isEmpty())
            CandidatInscriptionsClass->setObjectName(QString::fromUtf8("CandidatInscriptionsClass"));
        CandidatInscriptionsClass->resize(704, 370);
        label = new QLabel(CandidatInscriptionsClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 60, 55, 17));
        label_2 = new QLabel(CandidatInscriptionsClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 100, 55, 17));
        label_3 = new QLabel(CandidatInscriptionsClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 140, 55, 17));
        label_4 = new QLabel(CandidatInscriptionsClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 180, 131, 17));
        label_5 = new QLabel(CandidatInscriptionsClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 220, 55, 17));
        label_6 = new QLabel(CandidatInscriptionsClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 260, 91, 17));
        label_7 = new QLabel(CandidatInscriptionsClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(260, 0, 271, 31));
        QFont font;
        font.setPointSize(15);
        label_7->setFont(font);
        label_7->setLayoutDirection(Qt::LeftToRight);
        pushButton = new QPushButton(CandidatInscriptionsClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 310, 85, 27));
        pushButton_2 = new QPushButton(CandidatInscriptionsClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 310, 85, 27));
        pushButton_3 = new QPushButton(CandidatInscriptionsClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(480, 310, 91, 27));
        lineEdit = new QLineEdit(CandidatInscriptionsClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(240, 60, 281, 27));
        lineEdit_2 = new QLineEdit(CandidatInscriptionsClass);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 100, 281, 27));
        lineEdit_3 = new QLineEdit(CandidatInscriptionsClass);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(240, 140, 281, 27));
        lineEdit_4 = new QLineEdit(CandidatInscriptionsClass);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(240, 180, 281, 27));
        lineEdit_5 = new QLineEdit(CandidatInscriptionsClass);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(240, 220, 281, 27));
        lineEdit_6 = new QLineEdit(CandidatInscriptionsClass);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(240, 260, 281, 27));

        retranslateUi(CandidatInscriptionsClass);

        QMetaObject::connectSlotsByName(CandidatInscriptionsClass);
    } // setupUi

    void retranslateUi(QDialog *CandidatInscriptionsClass)
    {
        CandidatInscriptionsClass->setWindowTitle(QApplication::translate("CandidatInscriptionsClass", "CandidatInscriptions", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CandidatInscriptionsClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CandidatInscriptionsClass", "Prenom", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CandidatInscriptionsClass", "NAS", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CandidatInscriptionsClass", "Date de Naissance", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CandidatInscriptionsClass", "Adresse", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CandidatInscriptionsClass", "Parti Politique", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CandidatInscriptionsClass", "Inscription d'un Candidat", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CandidatInscriptionsClass", "valider", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CandidatInscriptionsClass", "Annuller", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("CandidatInscriptionsClass", "Menu Principal", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CandidatInscriptionsClass: public Ui_CandidatInscriptionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATINSCRIPTIONS_H
