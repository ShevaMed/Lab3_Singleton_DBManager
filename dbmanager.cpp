#include "dbmanager.h"

DBManager::DBManager()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./DB.db");
    db.open();
}

DBManager& DBManager::getInstance()
{
    static DBManager instance;
    return instance;
}
