#include "System.h"

void System::addNewUser(User *user)
{
    m_users.push_back(user);
}

void System::verifyUser(User *user)
{

    if (!isRegistered(user) && !isLoggedIn(user))
    {
        std::cout << "You are not registered. Please register to log in.\n";
        user->registerMe(this);
        addNewUser(user);
        
        // check if user is now registered and log them in if they are
        if (isRegistered(user))
        {
            std::cout << "You have been registered.\n";
            user->login(this);
        }
    }

    if (isLoggedIn(user))
    {
        user->logout(this);
    }
    else
    {
        std::cout << "Please log in.\n";
        user->login(this);
        std::cout << "You have been logged in.\n";
    }
}



bool System::isRegistered(User *user)
{
    for (auto &systemUser : m_users)
    {
        if (systemUser->getUsername() == user->getUsername() && systemUser->getPassword() == user->getPassword())
        {
            return true;
        }
    }
    return false;
}

bool System::isLoggedIn(User *user)
{
    for (auto &systemUser : m_users)
    {
        if (systemUser->getUsername() == user->getUsername() && systemUser->getIsLoggedIn())
        {
            return true;
        }
    }
    return false;
}

