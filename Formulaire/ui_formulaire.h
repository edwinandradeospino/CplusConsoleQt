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
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FormulaireClass)
    {
        if (FormulaireClass->objectName().isEmpty())
            FormulaireClass->setObjectName(QString::fromUtf8("FormulaireClass"));
        FormulaireClass->resize(800, 600);
        actionQuitter = new QAction(FormulaireClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralwidget = new QWidget(FormulaireClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 350, 85, 27));
        FormulaireClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FormulaireClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        FormulaireClass->setMenuBar(menubar);
        statusbar = new QStatusBar(FormulaireClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FormulaireClass->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionQuitter);

        retranslateUi(FormulaireClass);

        QMetaObject::connectSlotsByName(FormulaireClass);
    } // setupUi

    void retranslateUi(QMainWindow *FormulaireClass)
    {
        FormulaireClass->setWindowTitle(QApplication::translate("FormulaireClass", "Fen\303\252tre Principale", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("FormulaireClass", "Quitter", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FormulaireClass", "Quitter", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("FormulaireClass", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormulaireClass: public Ui_FormulaireClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULAIRE_H
