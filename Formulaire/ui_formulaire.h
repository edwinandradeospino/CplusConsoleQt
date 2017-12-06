/********************************************************************************
** Form generated from reading UI file 'formulaire.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULAIRE_H
#define UI_FORMULAIRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormulaireClass
{
public:
    QAction *actionQuitter;
    QAction *actionCandidat;
    QAction *actionElecteur;
    QAction *actionInscription_d_un_Candidat_2;
    QAction *actionInscription_d_un_Electeur;
    QAction *actionDesinscription_d_une_Personne;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FormulaireClass)
    {
        if (FormulaireClass->objectName().isEmpty())
            FormulaireClass->setObjectName(QString::fromUtf8("FormulaireClass"));
        FormulaireClass->resize(678, 387);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(124, 101, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(239, 255, 248, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(175, 255, 218, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(55, 127, 94, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(74, 170, 125, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(111, 255, 188, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush8(QColor(183, 255, 221, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        FormulaireClass->setPalette(palette);
        QFont font;
        font.setPointSize(11);
        FormulaireClass->setFont(font);
        actionQuitter = new QAction(FormulaireClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans Kannada"));
        font1.setPointSize(10);
        actionQuitter->setFont(font1);
        actionCandidat = new QAction(FormulaireClass);
        actionCandidat->setObjectName(QString::fromUtf8("actionCandidat"));
        actionElecteur = new QAction(FormulaireClass);
        actionElecteur->setObjectName(QString::fromUtf8("actionElecteur"));
        actionInscription_d_un_Candidat_2 = new QAction(FormulaireClass);
        actionInscription_d_un_Candidat_2->setObjectName(QString::fromUtf8("actionInscription_d_un_Candidat_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Noto Serif Kannada"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        actionInscription_d_un_Candidat_2->setFont(font2);
        actionInscription_d_un_Electeur = new QAction(FormulaireClass);
        actionInscription_d_un_Electeur->setObjectName(QString::fromUtf8("actionInscription_d_un_Electeur"));
        actionInscription_d_un_Electeur->setFont(font1);
        actionDesinscription_d_une_Personne = new QAction(FormulaireClass);
        actionDesinscription_d_une_Personne->setObjectName(QString::fromUtf8("actionDesinscription_d_une_Personne"));
        centralwidget = new QWidget(FormulaireClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 300, 85, 27));
        FormulaireClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FormulaireClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 678, 30));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        FormulaireClass->setMenuBar(menubar);
        statusbar = new QStatusBar(FormulaireClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FormulaireClass->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(actionInscription_d_un_Candidat_2);
        menuMenu->addSeparator();
        menuMenu->addAction(actionInscription_d_un_Electeur);
        menuMenu->addSeparator();
        menuMenu->addAction(actionDesinscription_d_une_Personne);
        menuMenu->addSeparator();
        menuMenu->addAction(actionQuitter);

        retranslateUi(FormulaireClass);

        QMetaObject::connectSlotsByName(FormulaireClass);
    } // setupUi

    void retranslateUi(QMainWindow *FormulaireClass)
    {
        FormulaireClass->setWindowTitle(QApplication::translate("FormulaireClass", "Circonscription Election", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("FormulaireClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionCandidat->setText(QApplication::translate("FormulaireClass", "Candidat", 0, QApplication::UnicodeUTF8));
        actionElecteur->setText(QApplication::translate("FormulaireClass", "Electeur", 0, QApplication::UnicodeUTF8));
        actionInscription_d_un_Candidat_2->setText(QApplication::translate("FormulaireClass", "Inscription d'un Candidat", 0, QApplication::UnicodeUTF8));
        actionInscription_d_un_Electeur->setText(QApplication::translate("FormulaireClass", "Inscription d'un Electeur", 0, QApplication::UnicodeUTF8));
        actionDesinscription_d_une_Personne->setText(QApplication::translate("FormulaireClass", "Desinscription d'une Personne", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FormulaireClass", "Quitter", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("FormulaireClass", "Operations", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormulaireClass: public Ui_FormulaireClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULAIRE_H
