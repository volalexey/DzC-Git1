#include "Library.h"

Library::Library(string name)
{
    this->name = name;
    pub.push_back(new Book());
    pub.erase(pub.begin(), pub.end());
}

string Library::getName() const
{
    return name;
}

void Library::setName(string name)
{
    this->name = name;
}

void Library::addPub(Publication* obj)
{
    pub.push_back(obj);
}

void Library::delPub(string name, string author)
{
    int x = -1;
    for (int i = 0; i < pub.size(); i++)
    {
        if (pub[i]->getName() == name && pub[i]->getAuthor() == author) {
            x = i;
        }
    }
    if (x == -1) {
        cout << "Book/Mag NOTFOUND\n";
    }
    else {
        pub.erase(pub.begin() + x);
    }
}

void Library::findPub(string name) const
{
    for (int i = 0, j = 1; i < pub.size(); i++)
    {
        if (pub[i]->getName() == name) {
            cout << "#" << j << endl;
            pub[i]->showInfo();
            j++;
        }
    }
}

void Library::showPub() const
{
    for (int i = 0; i < pub.size(); i++)
    {
        cout << "#" << i + 1 << endl;
        pub[i]->showInfo();
        cout << endl;
    }
}

void Library::showInfo() const
{
    cout << "Name: " << name << endl;
    showPub();
}
