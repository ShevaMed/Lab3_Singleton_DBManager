#ifndef WINDOW1_H
#define WINDOW1_H

#include <QMainWindow>
#include <QSqlTableModel>

namespace Ui {
class Window1;
}

class Window1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window1(QWidget *parent = nullptr);
    ~Window1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Window1 *ui;
    QSqlTableModel *modelDepartments;
    QSqlTableModel *modelOrders;
};

#endif // WINDOW1_H
