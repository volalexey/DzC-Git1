#pragma once
#include <iostream>
#include <string>
#include "Exception.h"

using namespace std;

class Publication
{
private:
	string name;
	string author;
	int publicYear;
public:
	Publication();
	Publication(string name, string author, int publicYear);

	string getName() const;
	string getAuthor() const;
	int getPublicYear() const;

	void setName(string name);
	void setAuthor(string author);
	void setPublicYear(int publicYear);

	virtual void addInfo(string info) = 0;
	void showInfo() const;
};

