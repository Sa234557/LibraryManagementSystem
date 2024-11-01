#include <iostream>
#include "Library.h"

int main() {
    Library library;
    library.addBook(Book("1984", "George Orwell"));
    library.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald"));
    
    library.addMember(Member("Alice"));
    library.addMember(Member("Bob"));
    
    library.displayBooks();
    library.issueBook("1984");
    library.displayBooks();
    library.returnBook("1984");
    library.displayBooks();
    
    return 0;
}
