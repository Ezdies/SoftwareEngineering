#include "Klient.h"
#include "Ksiegowy.h"

int main(){
    Bank* bank = new Bank;
    Skarbowka* skarbowka = new Skarbowka;
    Ksiegowy* ksiegowy = new Ksiegowy(bank, skarbowka);

    Klient klient;
    klient.makeOperation(ksiegowy);

    delete ksiegowy;
}