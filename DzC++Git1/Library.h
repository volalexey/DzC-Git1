#pragma once
#include "Book.h"
#include "Magazine.h"

class Library
{
protected:
	string name;
	vector<Publication*> pub;
public:
	Library(string name);

	string getName() const;
	void setName(string name);

	void addPub(Publication* obj);
	void delPub(string name, string author);
	void findPub(string name) const;
	void showPub() const;

	void showInfo() const;
};

