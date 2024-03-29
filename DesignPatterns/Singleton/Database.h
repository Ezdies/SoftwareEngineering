//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Database.h
//  @ Date : 25.05.2023
//  @ Author : 
//
//

#include <vector>

using namespace std;

#if !defined(_DATABASE_H)
#define _DATABASE_H

#include "Table.h"


class Database {
public:
	static Database* getInstance();
	void operator=(const Database& other) = delete;
	Database(Database& other) = delete;
	vector<Table*> getTables();
	void addTable(Table* table);
	void deleteTable(Table* table);
private:
	vector<Table*> m_tables;
	static Database* m_database;
	Database();
};

#endif  //_DATABASE_H
