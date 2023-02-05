#pragma once
#include <string>
#include <iostream>
using namespace std;
class PublicationException
{
public:
	virtual string Message() const = 0;
};
class BookException : public PublicationException {
public: string Message() const override { return "Bad info\n"; }
};

class EditionYearException : public PublicationException {
public: string Message() const override { return "Unable to create publication - publication year specified by it: <publication year>\n"; }

};

