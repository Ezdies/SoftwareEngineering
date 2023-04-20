#include "System.h"

int main()
{
    System *system = new System;

    User *user = new User;
    user->login(system);
    
    delete system;
}