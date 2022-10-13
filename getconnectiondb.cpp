#include "getconnectiondb.h"
#include<iostream>
using namespace std;
QSqlDatabase GetConnectionDB::db;

QSqlDatabase GetConnectionDB::getDB() {
    if(!db.isValid()) {
        cout << "Create db"<<endl;
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:\\DBMusicProject\\project_music.db");
    }
    cout << "Return db"<<endl;
    return db;
}
