#include "THuman.h"

int main(){
    std::cout << "Wywoluje konstruktor klasy THuman\n";

    auto* human = new THuman("Male");
    human->setData(90, 30);
    human->printData();
    std::cout << "Wywoluje destruktor klasy THuman\n";
    delete human;
    return 0;
}
