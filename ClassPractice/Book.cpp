#include <string>
#include "Book.h"

using namespace std;


Book::Book() {
    this->title = "Null";
    this->author = "Null";
    this->publication_year = 0;
}

Book::Book(string title, string author, int publication_year) {
    this->title = title;
    this->author = author;
    this->publication_year = publication_year;
}

string Book::get_title() {
    return title;
}


string Book::get_author() {
    return author;
}


int Book::get_year() {
    return publication_year;
}