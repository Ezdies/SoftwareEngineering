#include "Bezdomne.h"
#include "Schronisko.h"
#include "BezdomneZwierzeSchronisko.h"


int main(){
    Schronisko* schronisko = new BezdomneZwierzeSchronisko;
    schronisko->adoptuj();
    schronisko->poglaskaj();

    delete schronisko;
}