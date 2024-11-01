#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Member> members;

public:
    void addBook(const Book& book);
    void addMember(const Member& member);
    void issueBook(const std::string& title);
    void returnBook(const std::string& title);
    void displayBooks();
};

#endif
