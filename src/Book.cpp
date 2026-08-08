#include "../include/Book.h"

// Default Constructor
Book::Book()
{
    bookID = 0;
    bookName = "";
    authorName = "";
    category = "";
    quantity = 0;
    available = true;
}

// Parameterized Constructor
Book::Book(int id, string name, string author,
           string cat, int qty, bool status)
{
    bookID = id;
    bookName = name;
    authorName = author;
    category = cat;
    quantity = qty;
    available = status;
}

// Setter Functions
void Book::setBookID(int id)
{
    bookID = id;
}

void Book::setBookName(string name)
{
    bookName = name;
}

void Book::setAuthorName(string author)
{
    authorName = author;
}

void Book::setCategory(string cat)
{
    category = cat;
}

void Book::setQuantity(int qty)
{
    quantity = qty;
}

void Book::setAvailability(bool status)
{
    available = status;
}

// Getter Functions
int Book::getBookID()
{
    return bookID;
}

string Book::getBookName()
{
    return bookName;
}

string Book::getAuthorName()
{
    return authorName;
}

string Book::getCategory()
{
    return category;
}

int Book::getQuantity()
{
    return quantity;
}

bool Book::getAvailability()
{
    return available;
}

// Display Function
void Book::displayBook()
{
    cout << "\n==============================";
    cout << "\nBook ID      : " << bookID;
    cout << "\nBook Name    : " << bookName;
    cout << "\nAuthor Name  : " << authorName;
    cout << "\nCategory     : " << category;
    cout << "\nQuantity     : " << quantity;
    cout << "\nAvailable    : " << (available ? "Yes" : "No");
    cout << "\n==============================\n";
}