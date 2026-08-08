#include "../include/Admin.h"

// Constructor
Admin::Admin()
{
    username = "admin";
    password = "admin123";
}

// Login Function
bool Admin::login()
{
    string user, pass;

    cout << "\n================================";
    cout << "\n        ADMIN LOGIN";
    cout << "\n================================";

    cout << "\nEnter Username : ";
    cin >> user;

    cout << "Enter Password : ";
    cin >> pass;

    if(user == username && pass == password)
    {
        cout << "\nLogin Successful!\n";
        return true;
    }

    cout << "\nInvalid Username or Password!\n";
    return false;
}

// Display Admin Information
void Admin::displayAdminInfo()
{
    cout << "\n================================";
    cout << "\n          ADMIN PANEL";
    cout << "\n================================";
    cout << "\nUsername : " << username;
    cout << "\n================================\n";
}