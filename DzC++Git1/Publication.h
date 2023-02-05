#pragma once
#include <iostream>
#include <string>

using namespace std;

class Publication
{
private:
	string name;
	string author;
	int publicYear;
	string info;
public:
	Publication();
	Publication(string name, string author, int publicYear);

	string getName() const;
	string getAuthor() const;
	int getPublicYear() const;

	void setName(string name);
	void setAuthor(string author);
	void setPublicYear(int publicYear);

	void addInfo(string info);
	void showInfo() const;
};

