#include "Jamnik.h"

int main(){
    Jamnik jamnik;
    jamnik.ustawImie("Jamnis");
    jamnik.ustawWiek(10);
    cout << jamnik.podajImie() << '\n';
    cout << jamnik.podajWiek() << '\n';
    jamnik.aportuj();
    jamnik.zaszczekaj();
}