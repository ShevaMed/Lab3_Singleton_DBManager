/********************************************************************************
** Form generated from reading UI file 'window1.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW1_H
#define UI_WINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window1
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QTableView *tableView1;
    QWidget *tab_2;
    QTableView *tableView1_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Window1)
    {
        if (Window1->objectName().isEmpty())
            Window1->setObjectName("Window1");
        Window1->resize(674, 416);
        centralwidget = new QWidget(Window1);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 671, 371));
        tab = new QWidget();
        tab->setObjectName("tab");
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 20, 641, 24));
        tableView1 = new QTableView(tab);
        tableView1->setObjectName("tableView1");
        tableView1->setGeometry(QRect(10, 70, 641, 261));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableView1_2 = new QTableView(tab_2);
        tableView1_2->setObjectName("tableView1_2");
        tableView1_2->setGeometry(QRect(10, 70, 641, 261));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 20, 641, 24));
        tabWidget->addTab(tab_2, QString());
        Window1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Window1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 674, 21));
        Window1->setMenuBar(menubar);
        statusbar = new QStatusBar(Window1);
        statusbar->setObjectName("statusbar");
        Window1->setStatusBar(statusbar);

        retranslateUi(Window1);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Window1);
    } // setupUi

    void retranslateUi(QMainWindow *Window1)
    {
        Window1->setWindowTitle(QCoreApplication::translate("Window1", "Window1", nullptr));
        pushButton->setText(QCoreApplication::translate("Window1", "Departments", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Window1", "Tab 1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Window1", "Orders", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Window1", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window1: public Ui_Window1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW1_H
