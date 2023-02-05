#pragma once
#include "Publication.h"
class Book :   public Publication
{
protected:
	string resume;
public:
	Book();
	Book(string name, string author, int publicYear);

	virtual void addInfo(string info) override;
	void showInfo() const;
};

