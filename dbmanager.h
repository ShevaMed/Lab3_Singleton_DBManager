#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>

class DBManager
{
    DBManager();
    DBManager(const DBManager&);
    DBManager& operator=(DBManager&);

public:
    static DBManager& getInstance();
    QSqlDatabase db;
};

#endif // DBMANAGER_H
