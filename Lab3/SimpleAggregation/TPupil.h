//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TPupil.h
//  @ Date : 22.03.2023
//  @ Author : 
//
//

#include <iostream>
#include <string>

using namespace std;

#if !defined(_TPUPIL_H)
#define _TPUPIL_H


class TPupil {
public:
	string getName();
	int getAge();
	void setName(string name);
	void setAge(int age);
private:
	string m_pupillName;
	int m_pupilAge;
};

#endif  //_TPUPIL_H