#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User
{
private:
    int userID;
    string userName;
    string email;
    string contactNumber;
    string userType;
    int issuedBooks;
    int issuedBookID;
    string issueDate;

public:
    // Constructors
    User();

    User(int id,
         string name,
         string email,
         string contact,
         string type,
         int books);

    // Setters
    void setUserID(int id);
    void setUserName(string name);
    void setEmail(string email);
    void setContactNumber(string contact);
    void setUserType(string type);
    void setIssuedBooks(int books);
    void setIssuedBookID(int id);
void setIssueDate(string date);

    // Getters
    int getUserID();
    string getUserName();
    string getEmail();
    string getContactNumber();
    string getUserType();
    int getIssuedBooks();
    int getIssuedBookID();
string getIssueDate();

    // Display
    void displayUser();
};

#endif