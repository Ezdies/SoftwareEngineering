#include <iostream>
#include "Database.h"

int main(){
    Database* database = Database::getInstance();
    Table* test = new Table("Cos", "VARCHAR", "UINT", "cos");
    database->addTable(test);
    database->getTables().front()->printTable();
}