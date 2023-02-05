#pragma once
#include "Publication.h"
#include <vector>
#include <algorithm>
class Magazine :    public Publication
{
protected:
	vector<string> articles;
public:
	Magazine();
	Magazine(string name, string author, int publicYear);

	virtual void addInfo(string info) override;
	void showInfo() const;
};

