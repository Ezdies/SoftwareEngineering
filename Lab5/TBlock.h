//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TBlock.h
//  @ Date : 30.03.2023
//  @ Author : 
//
//


#if !defined(_TBLOCK_H)
#define _TBLOCK_H

#include "TApartment.h"


class TBlock {
public:
	TBlock(int value, int addressNumber, float totalSquareMeters, 
	int numberOfApartments, int happyTenants);

	~TBlock();

	void setData(int i, string standard, 
	float squareMeters, int roomCount, float rentCost, int numberOfRenovations, int value);
	vector<TApartment*> getApartments();
	void printData();
	void appraise();
private:
	vector<TApartment*> m_apartments;
	int m_totalValue;
	int m_addressNumber;
	float m_totalSquareMeters;
	int m_numberOfApartments;
	int m_happyTenants;
};

#endif  //_TBLOCK_H
