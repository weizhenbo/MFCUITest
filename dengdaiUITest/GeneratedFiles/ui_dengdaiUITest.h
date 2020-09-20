/********************************************************************************
** Form generated from reading UI file 'dengdaiUITest.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENGDAIUITEST_H
#define UI_DENGDAIUITEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dengdaiUITestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dengdaiUITestClass)
    {
        if (dengdaiUITestClass->objectName().isEmpty())
            dengdaiUITestClass->setObjectName(QStringLiteral("dengdaiUITestClass"));
        dengdaiUITestClass->resize(600, 400);
        menuBar = new QMenuBar(dengdaiUITestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        dengdaiUITestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dengdaiUITestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        dengdaiUITestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(dengdaiUITestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        dengdaiUITestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(dengdaiUITestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        dengdaiUITestClass->setStatusBar(statusBar);

        retranslateUi(dengdaiUITestClass);

        QMetaObject::connectSlotsByName(dengdaiUITestClass);
    } // setupUi

    void retranslateUi(QMainWindow *dengdaiUITestClass)
    {
        dengdaiUITestClass->setWindowTitle(QApplication::translate("dengdaiUITestClass", "dengdaiUITest", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dengdaiUITestClass: public Ui_dengdaiUITestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENGDAIUITEST_H
