//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : BezdomneZwierzeSchronisko.h
//  @ Date : 27.05.2023
//  @ Author : 
//
//

#include <iostream>

#if !defined(_BEZDOMNEZWIERZESCHRONISKO_H)
#define _BEZDOMNEZWIERZESCHRONISKO_H

#include "Schronisko.h"

class BezdomneZwierzeSchronisko : public Schronisko {
public:
	Bezdomne* stworz() override;
};

#endif  //_BEZDOMNEZWIERZESCHRONISKO_H
