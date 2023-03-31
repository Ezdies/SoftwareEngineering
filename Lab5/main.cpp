#include "TBlock.h"

int main(){
    TBlock* block = new TBlock(50000000, 52, 20000, 3, 30);

    block->setData(0, "super", 200, 4, 5000, 4, 600000);
    block->getApartments()[1]->setRoomCount(2);
    block->getApartments()[1]->getNumberOfRenovations();

    TOccupant* occupant = new TOccupant;
    
    block->getApartments()[2]->renovateApartment(occupant);

    std::cout << "Poziom szczescia wynosi: " << occupant->getHappinessLevel() << "\n";

    block->printData();

    delete occupant;
    delete block;
}