#include "Publication.h"

Publication::Publication()
{
    name = "";
    author = "";
    publicYear = 0;
}

Publication::Publication(string name, string author, int publicYear)
{
    if (publicYear > 0) {

    
    this->name = name;
    this->author = author;
    this->publicYear = publicYear;}
    else {
        throw new EditionYearException;
    }
}

string Publication::getName() const
{
    return name;
}

string Publication::getAuthor() const
{
    return author;
}

int Publication::getPublicYear() const
{
    return publicYear;
}

void Publication::setName(string name)
{
    this->name = name;
}

void Publication::setAuthor(string author)
{
    this->author = author;
}

void Publication::setPublicYear(int publicYear)
{
    this->publicYear = publicYear;
}

void Publication::showInfo() const
{
    cout << "Title: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Publication year: " << publicYear << endl;
}
