#include "TBuilding.h"

int main(){
    std::cout << "Wywoluje konstruktor klasy TBuilding\n";
    auto* building = new TBuilding();
    building->setData("Kuchnia", 43.0);
    building->printData();
    std::cout << "Wywoluje destruktor klasy TBuilding\n";
    delete building;

    return 0;
}
