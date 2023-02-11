#include "window1.h"
#include "ui_window1.h"
#include "dbmanager.h"

Window1::Window1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window1)
{
    ui->setupUi(this);

    modelDepartments = new QSqlTableModel(this, DBManager::getInstance().db);
    modelDepartments->setTable("Departments");
    modelDepartments->select();

    modelOrders = new QSqlTableModel(this, DBManager::getInstance().db);
    modelOrders->setTable("Orders");
    modelOrders->select();
}

Window1::~Window1()
{
    delete ui;
}

void Window1::on_pushButton_clicked()
{
    ui->tableView1->setModel(modelDepartments);
    ui->tableView1->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}


void Window1::on_pushButton_3_clicked()
{
    ui->tableView1_2->setModel(modelOrders);
    ui->tableView1_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

