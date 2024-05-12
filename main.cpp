#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library library;
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Display Books\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Display Issued Books\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.removeBook();
                break;
            case 3:
                library.displayBooks();
                break;
            case 4:
                library.issueBook();
                break;
            case 5:
                library.returnBook();
                break;
            case 6:
                library.displayIssuedBooks();
                break;
            case 7:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
