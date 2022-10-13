#include "categorydao.h"

CategoryDAO::CategoryDAO() {
    db = GetConnectionDB::getDB();
}
CategoryDAO::~CategoryDAO() {
    db.close();
}
vector<Category> CategoryDAO::findAll() {
    db.transaction();
    vector<Category> list;
    if(db.open()) {
        QSqlQuery query(db);
        string sql = "SELECT * FROM category";
        query.exec(QString::fromStdString(sql));
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Category category;
            category.setId(query.value("id").toInt());
            category.setCategoryName(query.value("category_name").toString().toStdString());
            list.push_back(category);
        }
    }
    return list;
}
Category CategoryDAO::findById(int id) {
    db.transaction();
    Category category;
    if(db.open()) {
        QSqlQuery query(db);
        string sql = "SELECT * FROM category WHERE id = :id";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id", id);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            category.setId(query.value("id").toInt());
            category.setCategoryName(query.value("category_name").toString().toStdString());
        }
    }
    return category;
}
vector<Category> CategoryDAO::findByProperties(string properties, string value) {
    db.transaction();
    vector<Category> list;
    if(db.open()) {
        QSqlQuery query(db);
        string sql = "SELECT * FROM category WHERE " + properties +" = :value";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", QString::fromStdString(value));
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Category category;
            category.setId(query.value("id").toInt());
            category.setCategoryName(query.value("category_name").toString().toStdString());
            list.push_back(category);
        }
    }
    return list;
}

bool CategoryDAO::save(Category instance) {
    db.transaction();
    if(db.open()) {
        QSqlQuery query(db);
        string sql = "INSERT INTO category(category_name) VALUES(:categoryName)";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":categoryName", QString::fromStdString(instance.getCategoryName()));
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}
bool CategoryDAO::update(Category instance) {
    db.transaction();
    if(db.open()) {
        QSqlQuery query(db);
        string sql = "UPDATE category SET category_name = :categoryName WHERE id=:id";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":categoryName", QString::fromStdString(instance.getCategoryName()));
        query.bindValue(":id", instance.getId());
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}
bool CategoryDAO::remove(int id) {
    db.transaction();
    if(db.open()) {
        string sql = "DELETE FROM category WHERE id = :id";
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id", id);
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}

