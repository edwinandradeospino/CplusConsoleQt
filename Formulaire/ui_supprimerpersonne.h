/********************************************************************************
** Form generated from reading UI file 'supprimerpersonne.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERPERSONNE_H
#define UI_SUPPRIMERPERSONNE_H

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

class Ui_SupprimerPersonneClass
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *SupprimerPersonneClass)
    {
        if (SupprimerPersonneClass->objectName().isEmpty())
            SupprimerPersonneClass->setObjectName(QString::fromUtf8("SupprimerPersonneClass"));
        SupprimerPersonneClass->resize(370, 139);
        lineEdit = new QLineEdit(SupprimerPersonneClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 40, 201, 27));
        lineEdit_2 = new QLineEdit(SupprimerPersonneClass);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 70, 201, 27));
        label = new QLabel(SupprimerPersonneClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 55, 17));
        label_2 = new QLabel(SupprimerPersonneClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 70, 55, 17));
        label_3 = new QLabel(SupprimerPersonneClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 10, 251, 20));
        QFont font;
        font.setPointSize(11);
        font.setItalic(true);
        label_3->setFont(font);
        pushButton = new QPushButton(SupprimerPersonneClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 100, 85, 27));

        retranslateUi(SupprimerPersonneClass);

        QMetaObject::connectSlotsByName(SupprimerPersonneClass);
    } // setupUi

    void retranslateUi(QDialog *SupprimerPersonneClass)
    {
        SupprimerPersonneClass->setWindowTitle(QApplication::translate("SupprimerPersonneClass", "SupprimerPersonne", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SupprimerPersonneClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SupprimerPersonneClass", "Prenom", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SupprimerPersonneClass", "Vous aller effacer le candidat   !!!!. ", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SupprimerPersonneClass", "Valider", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SupprimerPersonneClass: public Ui_SupprimerPersonneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERPERSONNE_H
