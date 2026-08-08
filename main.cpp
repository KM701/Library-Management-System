#include <iostream>

#include "include/Book.h"
#include "include/User.h"
#include "include/Library.h"
#include "include/Admin.h"

using namespace std;

int main()
{
    Library library;

    int choice;

    do
    {
        cout << "\n==========================================";
        cout << "\n        LIBRARY MANAGEMENT SYSTEM";
        cout << "\n==========================================";

        cout << "\n1. Admin Login";

        cout << "\n\n========== BOOK MANAGEMENT ==========";
        cout << "\n2. Add Book";
        cout << "\n3. Remove Book";
        cout << "\n4. Update Book";
        cout << "\n5. Search Book";
        cout << "\n6. Display All Books";

        cout << "\n\n========== USER MANAGEMENT ==========";
        cout << "\n7. Add User";
        cout << "\n8. Display Users";
        cout << "\n9. Search User";

        cout << "\n\n========== DASHBOARD ==========";
        cout << "\n10. Search By Author";
cout << "\n11. Search By Category";
cout << "\n12. Issue Book";
cout << "\n13. Return Book";
cout << "\n14. View Issued Books";
cout << "\n15. Dashboard";
cout << "\n\n16. Exit";

        cout << "\n\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
        case 1:
        {
            library.adminLogin();
            break;
        }

        case 2:
        {
            library.addBook();
            break;
        }

        case 3:
        {
            library.removeBook();
            break;
        }

        case 4:
        {
            library.updateBook();
            break;
        }

        case 5:
        {
            library.searchBook();
            break;
        }

        case 6:
        {
            library.displayAllBooks();
            break;
        }

        case 7:
        {
            library.addUser();
            break;
        }

        case 8:
        {
            library.displayUsers();
            break;
        }

        case 9:
        {
            library.searchUser();
            break;
        }

       case 10:
{
    library.searchByAuthor();
    break;
}

case 11:
{
    library.searchByCategory();
    break;
}

case 12:
{
    library.issueBook();
    break;
}

case 13:
{
    library.returnBook();
    break;
}

case 14:
{
    library.viewIssuedBooks();
    break;
}
case 15:
{
    library.dashboard();
    break;
}

case 16:
{
    cout << "\nThank You For Using Library Management System!\n";
    break;
}

        default:
        {
            cout << "\nInvalid Choice!\n";
        }

        }

    } while(choice != 16);

    return 0;
}