#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    modelDepartments = new QSqlTableModel(this, DBManager::getInstance().db);
    modelDepartments->setTable("Departments");
    modelDepartments->select();

    modelOrders = new QSqlTableModel(this, DBManager::getInstance().db);
    modelOrders->setTable("Orders");
    modelOrders->select();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    win1.show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->tableView1_2->setModel(modelOrders);
    ui->tableView1_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}


void MainWindow::on_pushButton1_clicked()
{
    ui->tableView1->setModel(modelDepartments);
    ui->tableView1->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

