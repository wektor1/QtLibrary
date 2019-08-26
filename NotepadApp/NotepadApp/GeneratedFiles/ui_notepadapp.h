/********************************************************************************
** Form generated from reading UI file 'notepadapp.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPADAPP_H
#define UI_NOTEPADAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotepadAppClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotepadAppClass)
    {
        if (NotepadAppClass->objectName().isEmpty())
            NotepadAppClass->setObjectName(QString::fromUtf8("NotepadAppClass"));
        NotepadAppClass->resize(600, 400);
        actionNew = new QAction(NotepadAppClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(NotepadAppClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave_as = new QAction(NotepadAppClass);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionExit = new QAction(NotepadAppClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(NotepadAppClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(NotepadAppClass);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCut = new QAction(NotepadAppClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionUndo = new QAction(NotepadAppClass);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(NotepadAppClass);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        centralWidget = new QWidget(NotepadAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 581, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        NotepadAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotepadAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        NotepadAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NotepadAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        NotepadAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NotepadAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        NotepadAppClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        mainToolBar->addAction(actionNew);

        retranslateUi(NotepadAppClass);

        QMetaObject::connectSlotsByName(NotepadAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *NotepadAppClass)
    {
        NotepadAppClass->setWindowTitle(QCoreApplication::translate("NotepadAppClass", "NotepadApp", nullptr));
        actionNew->setText(QCoreApplication::translate("NotepadAppClass", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("NotepadAppClass", "Open", nullptr));
        actionSave_as->setText(QCoreApplication::translate("NotepadAppClass", "Save_as", nullptr));
        actionExit->setText(QCoreApplication::translate("NotepadAppClass", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("NotepadAppClass", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("NotepadAppClass", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("NotepadAppClass", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("NotepadAppClass", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("NotepadAppClass", "Redo", nullptr));
        menuFile->setTitle(QCoreApplication::translate("NotepadAppClass", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("NotepadAppClass", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotepadAppClass: public Ui_NotepadAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPADAPP_H
