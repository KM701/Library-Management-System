#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    int bookID;
    string bookName;
    string authorName;
    string category;
    int quantity;
    bool available;

public:
    // Constructor
    Book();

    // Parameterized Constructor
    Book(int id, string name, string author,
         string category, int quantity, bool status);

    // Setters
    void setBookID(int id);
    void setBookName(string name);
    void setAuthorName(string author);
    void setCategory(string category);
    void setQuantity(int quantity);
    void setAvailability(bool status);

    // Getters
    int getBookID();
    string getBookName();
    string getAuthorName();
    string getCategory();
    int getQuantity();
    bool getAvailability();

    // Display Function
    void displayBook();
};

#endif