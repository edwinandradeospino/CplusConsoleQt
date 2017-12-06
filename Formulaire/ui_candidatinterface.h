/********************************************************************************
** Form generated from reading UI file 'candidatinterface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATINTERFACE_H
#define UI_CANDIDATINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CandidatinterfaceClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *InscriptiondunCandidatLabel;

    void setupUi(QDialog *CandidatinterfaceClass)
    {
        if (CandidatinterfaceClass->objectName().isEmpty())
            CandidatinterfaceClass->setObjectName(QString::fromUtf8("CandidatinterfaceClass"));
        CandidatinterfaceClass->resize(676, 383);
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans Kannada"));
        font.setPointSize(11);
        CandidatinterfaceClass->setFont(font);
        label = new QLabel(CandidatinterfaceClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 56, 55, 21));
        label_2 = new QLabel(CandidatinterfaceClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 97, 111, 20));
        label_3 = new QLabel(CandidatinterfaceClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 137, 71, 20));
        label_4 = new QLabel(CandidatinterfaceClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 177, 131, 20));
        label_5 = new QLabel(CandidatinterfaceClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 216, 81, 21));
        label_6 = new QLabel(CandidatinterfaceClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 257, 111, 20));
        InscriptiondunCandidatLabel = new QLabel(CandidatinterfaceClass);
        InscriptiondunCandidatLabel->setObjectName(QString::fromUtf8("InscriptiondunCandidatLabel"));
        InscriptiondunCandidatLabel->setGeometry(QRect(210, 10, 281, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(103, 103, 103, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        InscriptiondunCandidatLabel->setPalette(palette);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        InscriptiondunCandidatLabel->setFont(font1);

        retranslateUi(CandidatinterfaceClass);

        QMetaObject::connectSlotsByName(CandidatinterfaceClass);
    } // setupUi

    void retranslateUi(QDialog *CandidatinterfaceClass)
    {
        label->setText(QApplication::translate("CandidatinterfaceClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CandidatinterfaceClass", "Prenom", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CandidatinterfaceClass", "NAS", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CandidatinterfaceClass", "Date Naissance", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CandidatinterfaceClass", "Adresse", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CandidatinterfaceClass", "Parti Politique", 0, QApplication::UnicodeUTF8));
        InscriptiondunCandidatLabel->setText(QApplication::translate("CandidatinterfaceClass", "Inscription d'un Candidat", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(CandidatinterfaceClass);
    } // retranslateUi

};

namespace Ui {
    class CandidatinterfaceClass: public Ui_CandidatinterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATINTERFACE_H
