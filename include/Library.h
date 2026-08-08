#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <fstream>
#include "Book.h"
#include "Admin.h"
#include "User.h"

using namespace std;

class Library
{
private:
    vector<Book> books;
    vector<User> users;
    Admin admin;

public:
    Library();

    // Book Functions
    void addBook();
    void removeBook();
    void updateBook();
    void searchBook();
    void displayAllBooks();

    // Book File Handling
    void saveBooksToFile();
    void loadBooksFromFile();

    // User Functions
    void addUser();
    void displayUsers();
    void searchUser();

    // User File Handling
    void saveUsersToFile();
    void loadUsersFromFile();

    // Login
    void adminLogin();
    void userLogin();

    // Dashboard
    void dashboard();

    // Issue & Return
    void issueBook();
    void returnBook();
    void viewIssuedBooks();

    // Bonus
    void searchByAuthor();
    void searchByCategory();
};

#endif