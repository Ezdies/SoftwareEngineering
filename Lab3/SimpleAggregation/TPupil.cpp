//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TPupil.cpp
//  @ Date : 22.03.2023
//  @ Author : 
//
//
#include "TPupil.h"

string TPupil::getName() {
    return m_pupillName;
}

int TPupil::getAge() {
    return m_pupilAge;
}

void TPupil::setName(string name) {
    m_pupillName = name;
}

void TPupil::setAge(int age) {
    m_pupilAge = age;
}

