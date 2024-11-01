#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    std::string title;
    std::string author;
    bool isAvailable;

    Book(std::string t, std::string a);
};

#endif
