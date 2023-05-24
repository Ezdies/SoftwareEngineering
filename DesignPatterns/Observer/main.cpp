#include "Subscriber.h"

int main(){
    Publisher* newsletter = new Publisher;
    Subscriber* client1 = new Subscriber(newsletter, "Maks");
    Subscriber* client2 = new Subscriber(newsletter, "Aleks");
    Subscriber* client3 = new Subscriber(newsletter, "Jan");

    newsletter->CreateMessage("Glad you are here");
    client3->Unsubscribe();

    delete client1;
    delete client2;
    delete client3;
    delete newsletter;
}