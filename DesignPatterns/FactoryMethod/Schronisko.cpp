//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Schronisko.cpp
//  @ Date : 27.05.2023
//  @ Author : 
//
//




#include "Schronisko.h"

void Schronisko::adoptuj() {
    Bezdomne* bezdomne = stworz();
    std::cout << "Zwierze zostalo adoptowane\n";
    delete bezdomne;
}

void Schronisko::poglaskaj() {
    Bezdomne* bezdomne = stworz();
    std::cout << "Zwierze zostalo poglaskane\n";
    delete bezdomne;
}

