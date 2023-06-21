//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Prowadzacy.cpp
//  @ Date : 31.05.2023
//  @ Author : 
//
//


#include "Prowadzacy.h"

Prowadzacy::Prowadzacy(int id, string nazwisko, string imie) {
    setId(id);
    setNazwisko(nazwisko);
    setImie(imie);
    cout << "Stworzono prowadzącego: " << getId() << endl;
}

Prowadzacy::~Prowadzacy() {
    cout << "Usunięto prowadzącego: " << getId() << endl;
}

void Prowadzacy::dodajKurs() {
    if (this->getStatusZalogowania() == false)
    {
        cout << "Nie jestes zalogowany" << endl;
        return;
    }
    else
    {
        cout << "-----------------DODAWANIE KURSU-----------------";
        cout << "Podaj tytul kursu: " << endl;
        string tytul;
        cin >> tytul;
        while (tytul == "" || tytul.length() == 0)
        {
            cout << "Tytul nie może być pusty" << endl;
            cout << "Podaj tytul kursu ponownie: " << endl;
            cin >> tytul;
        }
        cout << "Podaj limit studentow: " << endl;
        int limitStudentow;
        cin >> limitStudentow;
        while (limitStudentow < 10 || limitStudentow > 200)
        {
            cout << "Limit studentów nie może być mniejszy od 10 oraz większy od 200" << endl;
            cout << "Podaj limit studentow ponownie: " << endl;
            cin >> limitStudentow;
        }
        cout << "Podaj sylabus: " << endl;
        string sylabus;
        cin >> sylabus;
        while (sylabus == "" || sylabus.length() == 0)
        {
            cout << "Sylabus nie może być pusty" << endl;
            cout << "Podaj sylabus ponownie: " << endl;
            cin >> sylabus;
        }
        if (this->prowadziKursy.size() > 0)
        {
            for (int i = 0; i < this->prowadziKursy.size(); i++)
            {
                if (this->prowadziKursy[i]->getTytul() == tytul)
                {
                    cout << "Prowadzacy juz prowadzi ten kurs" << endl;
                    cout << "Czy chcesz edytować kurs? (tak/nie)" << endl;
                    string odpowiedz;
                    cin >> odpowiedz;
                    if (odpowiedz == "tak")
                    {
                        this->edytujKurs();
                    }
                    else if (odpowiedz == "nie")
                    {
                        return;
                    }
                    else
                    {
                        cout << "Niepoprawna odpowiedz" << endl;
                        dodajKurs();
                    }
                }
            }
            this->dodajKursPoprawny(tytul, limitStudentow, sylabus, this);
            Kurs *kurs = new Kurs();
            kurs->setNewKursData(tytul, limitStudentow, sylabus, this);
            this->prowadziKursy.push_back(kurs);
        }
        else
        {
            cout << "Niepoprawne dane" << endl;
            dodajKurs();
        }
    }
}

void Prowadzacy::edytujKurs() {
    cout << "-----------------EDYCJA KURSU-----------------";
    cout << "Podaj id kursu: ";
    int idKursu;
    cin >> idKursu;
    bool czyIstnieje = false;
    for (int i = 0; i < this->prowadziKursy.size(); i++)
    {
        if (this->prowadziKursy[i]->getId() == idKursu)
        {
            czyIstnieje = true;
        }
    }
    if (czyIstnieje == false)
    {
        cout << "Nie ma kursu o podanym id" << endl;
        edytujKurs();
    }
    else
    {
        cout << "Podaj tytul kursu: " << endl;
        string tytul;
        cin >> tytul;
        while (tytul == "" || tytul.length() == 0)
        {
            cout << "Tytul nie może być pusty" << endl;
            cout << "Podaj tytul kursu ponownie: " << endl;
            cin >> tytul;
        }
        cout << "Podaj limit studentow: " << endl;
        int limitStudentow;
        cin >> limitStudentow;
        while (limitStudentow < 10 || limitStudentow > 200)
        {
            cout << "Limit studentów nie może być mniejszy od 10 oraz większy od 200" << endl;
            cout << "Podaj limit studentow ponownie: " << endl;
            cin >> limitStudentow;
        }
        cout << "Podaj sylabus: " << endl;
        string sylabus;
        cin >> sylabus;
        while (sylabus == "" || sylabus.length() == 0)
        {
            cout << "Sylabus nie może być pusty" << endl;
            cout << "Podaj sylabus ponownie: " << endl;
            cin >> sylabus;
        }
    }
}

void Prowadzacy::dodajOcene() {
    if (this->getStatusZalogowania() == false)
    {
        cout << "Nie jestes zalogowany" << endl; // wyjatek
        return;
    }
    else
    {
        cout << "Podaj id studenta: " << endl;
        int idStudenta;
        cin >> idStudenta;
        while (idStudenta < 0 || idStudenta > this->prowadziKursy.size())
        {
            cout << "Nie ma studenta o podanym id" << endl;
            cout << "Podaj id studenta ponownie: " << endl;
            cin >> idStudenta;
        }
        cout << "Podaj id kursu: " << endl;
        int idKursu;
        cin >> idKursu;
        for (int i = 0; i < this->prowadziKursy.size(); i++)
            cout << "Podaj ocene: " << endl;
        double ocena;
        cin >> ocena;
        if (ocena > 1 && ocena < 6)
        // this->dodajOcenePoprawnie(this->prowadziKursy[idKursu], this->prowadziKursy[idKursu]->
        // else DOKONCZ
        {
            cout << "Niepoprawne dane" << endl;
            dodajOcene();
        }
    }
}

void Prowadzacy::edytujOcene() {

}

void Prowadzacy::dodajKursPoprawny(string tytul, int limitStudentow, string sylabus, Prowadzacy* idProwadzacego) {
    Kurs *kurs = new Kurs();
    kurs->setNewKursData(tytul, limitStudentow, sylabus, idProwadzacego);
    this->prowadziKursy.push_back(kurs);
}

void Prowadzacy::edytujKursPoprawny(string tytul, int limitStudentow, string sylabus, int idProwadzacego) {

}

void Prowadzacy::dodajOcenePoprawnie(Kurs* kurs, Student* student, double ocena) {

}

void Prowadzacy::edytujOcenePoprawnie(Kurs* kurs, Student* student, double ocena) {

}
