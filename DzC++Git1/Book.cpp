#include "Book.h"

Book::Book()
	:Publication()
{
	resume = "";
}

Book::Book(string name, string author, int publicYear)
	:Publication(name, author, publicYear)
{
	int x = -1;
	cout << "Add resume?\n 1.yes  2.no\n"; cin >> x;
	if (x == 1) {
		string y;
		cout << "Input info: "; cin.ignore(); getline(cin, y);
		addInfo(y);
	}
	else {
		resume = "";
	}
}

void Book::addInfo(string info)
{
	if (info == " " || info == "" || info == "  ") {
		throw new BookException;
	}
	resume = info;
}

void Book::showInfo() const
{
	Publication::showInfo();
	cout << "Resume: ";
	if (resume == "" || resume == " ") {
		cout << "*not added*\n";
	}
	else {
		cout << resume << endl;
	}
}
