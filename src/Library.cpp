#include "../include/Library.h"
#include <fstream>
#include <sstream>

// Constructor
Library::Library()
{
    loadBooksFromFile();
    loadUsersFromFile();
}

// Add Book
void Library::addBook()
{
    int id;
    string name;
    string author;
    string category;
    int quantity;

    cout << "\nEnter Book ID : ";
    cin >> id;

    for(Book &book : books)
    {
        if(book.getBookID()==id)
        {
            cout<<"\nBook ID Already Exists!\n";
            return;
        }
    }

    cin.ignore();

    cout<<"Enter Book Name : ";
    getline(cin,name);

    cout<<"Enter Author Name : ";
    getline(cin,author);

    cout<<"Enter Category : ";
    getline(cin,category);

    cout<<"Enter Quantity : ";
    cin>>quantity;

    while(quantity<=0)
    {
        cout<<"\nQuantity must be greater than 0\n";
        cout<<"Enter Quantity Again : ";
        cin>>quantity;
    }

    Book newBook(id,name,author,category,quantity,true);

    books.push_back(newBook);

    saveBooksToFile();

    cout<<"\nBook Added Successfully!\n";
}

// Remove Book

void Library::removeBook()
{
    if (books.empty())
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    int id;

    cout << "\nEnter Book ID to Remove: ";
    cin >> id;

    for (auto it = books.begin(); it != books.end(); it++)
    {
        if (it->getBookID() == id)
        {
            books.erase(it);

            saveBooksToFile();

            cout << "\nBook Removed Successfully!\n";
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}
// Update Book
void Library::updateBook()
{
    if (books.empty())
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    int id;
    cout << "\nEnter Book ID to Update : ";
    cin >> id;

    for (Book &book : books)
    {
        if (book.getBookID() == id)
        {
            string name, author, category;
            int quantity;

            cin.ignore();

            cout << "Enter New Book Name : ";
            getline(cin, name);

            cout << "Enter New Author Name : ";
            getline(cin, author);

            cout << "Enter New Category : ";
            getline(cin, category);

            cout << "Enter New Quantity : ";
            cin >> quantity;

            book.setBookName(name);
            book.setAuthorName(author);
            book.setCategory(category);
            book.setQuantity(quantity);

            if (quantity > 0)
                book.setAvailability(true);
            else
                book.setAvailability(false);

            saveBooksToFile();

            cout << "\nBook Updated Successfully!\n";
            return;
        }
    }

    cout << "\nBook ID Not Found!\n";
}

// Search Book
void Library::searchBook()
{
    if (books.empty())
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    int id;
    cout << "\nEnter Book ID to Search: ";
    cin >> id;

    for (Book &book : books)
    {
        if (book.getBookID() == id)
        {
            cout << "\n========== BOOK FOUND ==========\n";
            book.displayBook();
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}
// Display All Books
void Library::displayAllBooks()
{
    if(books.empty())
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    cout << "\n==============================================================\n";

    for(Book &book : books)
    {
        book.displayBook();
        cout << "--------------------------------------------------------------\n";
    }
}

// Save Books
void Library::saveBooksToFile()
{
    ofstream file("data/books.txt");

    if(!file.is_open())
    {
        cout << "\nError Opening books.txt\n";
        return;
    }

    for(Book &book : books)
    {
        file << book.getBookID() << "|"
             << book.getBookName() << "|"
             << book.getAuthorName() << "|"
             << book.getCategory() << "|"
             << book.getQuantity() << "|"
             << book.getAvailability() << endl;
    }

    file.close();
}

// Load Books
void Library::loadBooksFromFile()
{
    ifstream file("data/books.txt");

    if (!file.is_open())
    {
        return;
    }

    books.clear();

    string line;

    while (getline(file, line))
    {
        if (line.empty())
            continue;

        stringstream ss(line);

        string id, name, author, category, quantity, available;

        getline(ss, id, '|');
        getline(ss, name, '|');
        getline(ss, author, '|');
        getline(ss, category, '|');
        getline(ss, quantity, '|');
        getline(ss, available, '|');

        Book book(
            stoi(id),
            name,
            author,
            category,
            stoi(quantity),
            stoi(available));

        books.push_back(book);
    }

    file.close();
}
void Library::adminLogin()
{
    if(admin.login())
    {
        cout << "\nWelcome Admin!\n";
    }
}

void Library::userLogin()
{
    cout << "\nUser Login Module Coming Soon...\n";
}

void Library::dashboard()
{
    cout << "\n================================";
    cout << "\n         DASHBOARD";
    cout << "\n================================";

    cout << "\nTotal Books : " << books.size();

    cout << "\n================================\n";
}
void Library::addUser()
{
    int id;
    string name, email, contact, type;

    cout << "\nEnter User ID : ";
    cin >> id;

    for(User &user : users)
    {
        if(user.getUserID() == id)
        {
            cout << "\nUser ID Already Exists!\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter User Name : ";
    getline(cin, name);

    cout << "Enter Email : ";
    getline(cin, email);

    cout << "Enter Contact Number : ";
    getline(cin, contact);

    cout << "Enter User Type (Student/Faculty) : ";
    getline(cin, type);

    User newUser(id, name, email, contact, type, 0);

    users.push_back(newUser);

    saveUsersToFile();

    cout << "\nUser Added Successfully!\n";
}

void Library::displayUsers()
{
    if(users.empty())
    {
        cout << "\nNo Users Found!\n";
        return;
    }

    cout << "\n============= USERS =============\n";

    for(User &user : users)
    {
        user.displayUser();
    }
}

void Library::searchUser()
{
    if(users.empty())
    {
        cout << "\nNo Users Found!\n";
        return;
    }

    int id;

    cout << "\nEnter User ID : ";
    cin >> id;

    for(User &user : users)
    {
        if(user.getUserID() == id)
        {
            cout << "\nUser Found!\n";
            user.displayUser();
            return;
        }
    }

    cout << "\nUser Not Found!\n";
}

void Library::saveUsersToFile()
{
    ofstream file("data/users.txt");

    if (!file.is_open())
    {
        cout << "\nError Opening users.txt\n";
        return;
    }

    for (User &user : users)
    {
        file << user.getUserID() << "|"
             << user.getUserName() << "|"
             << user.getEmail() << "|"
             << user.getContactNumber() << "|"
             << user.getUserType() << "|"
             << user.getIssuedBooks() << "|"
             << user.getIssuedBookID() << "|"
             << user.getIssueDate()
             << endl;
    }

    file.close();
}

void Library::loadUsersFromFile()
{
    ifstream file("data/users.txt");

    if (!file.is_open())
        return;

    users.clear();

    string line;

    while (getline(file, line))
    {
        if (line.empty())
            continue;

        stringstream ss(line);

        string id, name, email, contact, type;
        string issuedBooks, issuedBookID, issueDate;

        getline(ss, id, '|');
        getline(ss, name, '|');
        getline(ss, email, '|');
        getline(ss, contact, '|');
        getline(ss, type, '|');
        getline(ss, issuedBooks, '|');
        getline(ss, issuedBookID, '|');
        getline(ss, issueDate);

        User user(
            stoi(id),
            name,
            email,
            contact,
            type,
            stoi(issuedBooks));

        user.setIssuedBookID(stoi(issuedBookID));
        user.setIssueDate(issueDate);

        users.push_back(user);
    }

    file.close();
}

void Library::searchByAuthor()
{
    if (books.empty())
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    cin.ignore();

    string author;
    bool found = false;

    cout << "\nEnter Author Name : ";
    getline(cin, author);

    cout << "\n========== SEARCH RESULT ==========\n";

    for (Book &book : books)
    {
        if (book.getAuthorName() == author)
        {
            book.displayBook();
            cout << "----------------------------------\n";
            found = true;
        }
    }

    if (!found)
    {
        cout << "\nNo Books Found!\n";
    }
}
void Library::searchByCategory()
{
    if (books.empty())
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    cin.ignore();

    string category;
    bool found = false;

    cout << "\nEnter Category : ";
    getline(cin, category);

    cout << "\n========== SEARCH RESULT ==========\n";

    for (Book &book : books)
    {
        if (book.getCategory() == category)
        {
            book.displayBook();
            cout << "----------------------------------\n";
            found = true;
        }
    }

    if (!found)
    {
        cout << "\nNo Books Found!\n";
    }
}

void Library::issueBook()
{
    if (books.empty())
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    if (users.empty())
    {
        cout << "\nNo Users Available!\n";
        return;
    }

    int userID, bookID;

    cout << "\nEnter User ID : ";
    cin >> userID;

    cout << "Enter Book ID : ";
    cin >> bookID;

    User *selectedUser = nullptr;
    Book *selectedBook = nullptr;

    // Find User
    for (User &user : users)
    {
        if (user.getUserID() == userID)
        {
            selectedUser = &user;
            break;
        }
    }

    if (selectedUser == nullptr)
    {
        cout << "\nUser Not Found!\n";
        return;
    }

    // Find Book
    for (Book &book : books)
    {
        if (book.getBookID() == bookID)
        {
            selectedBook = &book;
            break;
        }
    }

    if (selectedBook == nullptr)
    {
        cout << "\nBook Not Found!\n";
        return;
    }

    if (selectedBook->getQuantity() <= 0)
    {
        cout << "\nBook Out of Stock!\n";
        return;
    }

    // Update Book
    selectedBook->setQuantity(selectedBook->getQuantity() - 1);

    if (selectedBook->getQuantity() == 0)
    {
        selectedBook->setAvailability(false);
    }

    // Update User
    selectedUser->setIssuedBooks(selectedUser->getIssuedBooks() + 1);
    selectedUser->setIssuedBookID(bookID);

    cout << "Enter Issue Date (DD-MM-YYYY): ";
    cin.ignore();
    string date;
    getline(cin, date);

    selectedUser->setIssueDate(date);

    saveBooksToFile();
    saveUsersToFile();

    cout << "\nBook Issued Successfully!\n";
}

void Library::returnBook()
{
    if(users.empty())
    {
        cout << "\nNo Users Found!\n";
        return;
    }

    int userID;

    cout << "\nEnter User ID : ";
    cin >> userID;

    User *selectedUser = nullptr;

    for(User &user : users)
    {
        if(user.getUserID() == userID)
        {
            selectedUser = &user;
            break;
        }
    }

    if(selectedUser == nullptr)
    {
        cout << "\nUser Not Found!\n";
        return;
    }

    if(selectedUser->getIssuedBooks() == 0)
    {
        cout << "\nNo Book Issued To This User!\n";
        return;
    }

    int issuedBookID = selectedUser->getIssuedBookID();

    for(Book &book : books)
    {
        if(book.getBookID() == issuedBookID)
        {
            book.setQuantity(book.getQuantity() + 1);
            book.setAvailability(true);
            break;
        }
    }

    selectedUser->setIssuedBooks(0);
    selectedUser->setIssuedBookID(-1);
    selectedUser->setIssueDate("");

    saveBooksToFile();
    saveUsersToFile();

    cout << "\nBook Returned Successfully!\n";
}

void Library::viewIssuedBooks()
{
    if(users.empty())
    {
        cout << "\nNo Users Available!\n";
        return;
    }

    bool found = false;

    cout << "\n========================================";
    cout << "\n         ISSUED BOOKS REPORT";
    cout << "\n========================================";

    for(User &user : users)
    {
        if(user.getIssuedBooks() > 0)
        {
            found = true;

            cout << "\n----------------------------------------";
            cout << "\nUser Name      : " << user.getUserName();
            cout << "\nUser ID        : " << user.getUserID();
            cout << "\nBook ID        : " << user.getIssuedBookID();
            cout << "\nIssue Date     : " << user.getIssueDate();

            for(Book &book : books)
            {
                if(book.getBookID() == user.getIssuedBookID())
                {
                    cout << "\nBook Name      : " << book.getBookName();
                    cout << "\nAuthor         : " << book.getAuthorName();
                    break;
                }
            }

            cout << "\n----------------------------------------";
        }
    }

    if(!found)
    {
        cout << "\nNo Issued Books Found!\n";
    }

    cout << "\n========================================\n";
}