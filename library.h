#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Student.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Student> students;

public:
    void addBook();
    void removeBook();
    void displayBooks();
    void issueBook();
    void returnBook();
    void displayIssuedBooks();
};

#endif
