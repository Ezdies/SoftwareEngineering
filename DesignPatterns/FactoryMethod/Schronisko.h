//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Schronisko.h
//  @ Date : 27.05.2023
//  @ Author : 
//
//


#include <iostream>

using namespace std;

#if !defined(_SCHRONISKO_H)
#define _SCHRONISKO_H

#include "Bezdomne.h"

class Schronisko : public Bezdomne {

public:
	virtual ~Schronisko() = default;
	virtual Bezdomne* stworz() = 0;
	void adoptuj();
	void poglaskaj();
};

#endif  //_SCHRONISKO_H
