#include "Publication.h"

Publication::Publication()
{
    name = "";
    author = "";
    publicYear = 0;
    info = "";
}

Publication::Publication(string name, string author, int publicYear)
{
    this->name = name;
    this->author = author;
    this->publicYear = publicYear;
    int x = -1;
    cout << "Add info?\n";
    cout << "1.yes  2.no\n";
    cin >> x;
    cout << endl;
    if (x == 1) {
        string y;
        cout << "Input info: ";
        cin.ignore(); getline(cin, y);
        addInfo(y);
    }
    else {
        info = "";
    }
}

string Publication::getName() const
{
    return name;
}

string Publication::getAuthor() const
{
    return name;
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

void Publication::addInfo(string info)
{
    this->info = info;
}

void Publication::showInfo() const
{
    cout << "Title: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Publication year: " << publicYear << endl;
    cout << "Info: ";
    if (info == "" || info == " ") {
        cout << "Information not added\n";
    }
    else {
        cout << info << endl;
    }
}
