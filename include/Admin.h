#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>

using namespace std;

class Admin
{
private:
    string username;
    string password;

public:
    // Constructor
    Admin();

    // Login
    bool login();

    // About
    void displayAdminInfo();
};

#endif