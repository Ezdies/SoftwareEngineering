//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TOccupant.cpp
//  @ Date : 30.03.2023
//  @ Author : 
//
//


#include "TOccupant.h"

int TOccupant::getHappinessLevel() {
    return m_happinessLevel;

}

void TOccupant::setHappinessLevel(int happinessLevel) {
    m_happinessLevel = happinessLevel;
}

void TOccupant::doRenovation() {
    m_happinessLevel++;
    
}

