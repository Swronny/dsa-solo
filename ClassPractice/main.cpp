#include <iostream>
#include "Book.h"

using namespace std;

int main() {
    // 1. Test Book constructors and getters
    Book defaultBook;
    cout << "Default Book: " 
         << defaultBook.get_title() << ", "
         << defaultBook.get_author() << ", "
         << defaultBook.get_year() << endl;

    Book b1("1984", "George Orwell", 1949);
    Book b2("Dune", "Frank Herbert", 1965);
    Book b3("The Hobbit", "J.R.R. Tolkien", 1937);
    Book b4("Neuromancer", "William Gibson", 1984);

    cout << "Book 1" << b1.get_title() << ", " << b1.get_author() << ", " << b1.get_year() << endl;
}