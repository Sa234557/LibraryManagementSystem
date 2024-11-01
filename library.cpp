#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addMember(const Member& member) {
    members.push_back(member);
}

void Library::issueBook(const std::string& title) {
    for (auto& book : books) {
        if (book.title == title && book.isAvailable) {
            book.isAvailable = false;
            std::cout << "Book issued: " << title << std::endl;
            return;
        }
    }
    std::cout << "Book not available or not found." << std::endl;
}

void Library::returnBook(const std::string& title) {
    for (auto& book : books) {
        if (book.title == title && !book.isAvailable) {
            book.isAvailable = true;
            std::cout << "Book returned: " << title << std::endl;
            return;
        }
    }
    std::cout << "Book not found or already available." << std::endl;
}

void Library::displayBooks() {
    for (const auto& book : books) {
        std::cout << "Title: " << book.title << ", Author: " << book.author
                  << ", Available: " << (book.isAvailable ? "Yes" : "No") << std::endl;
    }
}
