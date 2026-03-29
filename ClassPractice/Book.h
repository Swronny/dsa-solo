#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
    private:
        string title;
        string author;
        int publication_year;
    public:
        Book();
        Book(string title, string author, int publication_year);
        string get_title();
        string get_author();
        int get_year();
};

#endif