//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TRoom.cpp
//  @ Date : 28.03.2023
//  @ Author : 
//
//

#include "TRoom.h"

TRoom::TRoom() {
    std::cout << "Konstruktor klasy TRoom\n";
}

TRoom::~TRoom() {
    std::cout << "Destruktor klasy TRoom\n";
}

string TRoom::getType() {
    return m_type;
}

float TRoom::getSquareMeters() {
    return m_squareMeters;
}

void TRoom::setType(string type) {
    m_type = type;
}

void TRoom::setSquareMeters(float squareMeters) {
    m_squareMeters = squareMeters;
}
