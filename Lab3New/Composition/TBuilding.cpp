//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TBuilding.cpp
//  @ Date : 28.03.2023
//  @ Author : 
//
//


#include "TBuilding.h"

TBuilding::TBuilding() {
    m_room = new TRoom;
}

TBuilding::~TBuilding() {
    delete m_room;
}

void TBuilding::printData() {
    std::cout << m_room->getSquareMeters() << "\n";
    std::cout << m_room->getType() << "\n";
}

void TBuilding::setData(string rType, float rSquareMeters) {
    m_room->setType(rType);
    m_room->setSquareMeters(rSquareMeters);
}
