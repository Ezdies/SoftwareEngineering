//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Wniosek.h
//  @ Date : 31.05.2023
//  @ Author : 
//
//


#if !defined(_WNIOSEK_H)
#define _WNIOSEK_H

#include "Uczelnia.h"

class Wniosek {
public:
	Wniosek();
	~Wniosek();
	string getTytul();
	string getTresc();
	void setData(string tytul, string tresc);
	void wyslijWniosek(string tytul, string tresc);
	string testData();
private:
	string tytul;
	string tresc;
};

#endif  //_WNIOSEK_H