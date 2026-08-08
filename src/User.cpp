#include "../include/User.h"

// Default Constructor
User::User()
{
    userID = 0;
    userName = "";
    email = "";
    contactNumber = "";
    userType = "Student";
    issuedBooks = 0;
    issuedBookID = -1;
issueDate = "";
}

// Parameterized Constructor
User::User(int id,
           string name,
           string mail,
           string contact,
           string type,
           int books)
{
    userID = id;
    userName = name;
    email = mail;
    contactNumber = contact;
    userType = type;
    issuedBooks = books;
    issuedBookID = -1;
issueDate = "";
}

// Setter Functions

void User::setUserID(int id)
{
    userID = id;
}

void User::setUserName(string name)
{
    userName = name;
}

void User::setEmail(string mail)
{
    email = mail;
}

void User::setContactNumber(string contact)
{
    contactNumber = contact;
}

void User::setUserType(string type)
{
    userType = type;
}

void User::setIssuedBooks(int books)
{
    issuedBooks = books;
}

void User::setIssuedBookID(int id)
{
    issuedBookID = id;
}

void User::setIssueDate(string date)
{
    issueDate = date;
}

// Getter Functions

int User::getUserID()
{
    return userID;
}

string User::getUserName()
{
    return userName;
}

string User::getEmail()
{
    return email;
}

string User::getContactNumber()
{
    return contactNumber;
}

string User::getUserType()
{
    return userType;
}

int User::getIssuedBooks()
{
    return issuedBooks;
}

int User::getIssuedBookID()
{
    return issuedBookID;
}

string User::getIssueDate()
{
    return issueDate;
}
// Display Function

void User::displayUser()
{
    cout << "\n================================";
    cout << "\n        USER DETAILS";
    cout << "\n================================";

    cout << "\nUser ID        : " << userID;
    cout << "\nUser Name      : " << userName;
    cout << "\nEmail          : " << email;
    cout << "\nContact Number : " << contactNumber;
    cout << "\nUser Type      : " << userType;
    cout << "\nIssued Books   : " << issuedBooks;
    cout << "\nIssued Book ID : " << issuedBookID;
cout << "\nIssue Date     : " << issueDate;

    cout << "\n================================\n";
}