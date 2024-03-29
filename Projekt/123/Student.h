//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Student.h
//  @ Date : 31.05.2023
//  @ Author : 
//
//


#if !defined(_STUDENT_H)
#define _STUDENT_H

#include "Konto.h"
#include "Uczelnia.h"

class Student : public Konto {
public:
	Student(int indeks, string nazwisko, string imie);
	~Student();
	void dodajDoKursu(Kurs* kurs);
	void przegladajKursy();
	void wyslijWniosek();
private:
	vector<Kurs*> kursyUczeszcza;
	vector<Wniosek*> wnioski;
	void zapiszSieNaKurs(Kurs* kurs, Student* indeks);
	void wyslijWniosekPoprawnie(Wniosek* wniosek, string tytul, string tresc);
};

#endif  //_STUDENT_H
