/********************************************************************************
** Form generated from reading UI file 'ModelingSystem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELINGSYSTEM_H
#define UI_MODELINGSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelingSystemClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ModelingSystemClass)
    {
        if (ModelingSystemClass->objectName().isEmpty())
            ModelingSystemClass->setObjectName(QString::fromUtf8("ModelingSystemClass"));
        ModelingSystemClass->resize(600, 400);
        menuBar = new QMenuBar(ModelingSystemClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ModelingSystemClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ModelingSystemClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ModelingSystemClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ModelingSystemClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ModelingSystemClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ModelingSystemClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ModelingSystemClass->setStatusBar(statusBar);

        retranslateUi(ModelingSystemClass);

        QMetaObject::connectSlotsByName(ModelingSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModelingSystemClass)
    {
        ModelingSystemClass->setWindowTitle(QApplication::translate("ModelingSystemClass", "ModelingSystem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelingSystemClass: public Ui_ModelingSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELINGSYSTEM_H
