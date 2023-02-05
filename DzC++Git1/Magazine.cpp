#include "Magazine.h"

Magazine::Magazine()
	:Publication()
{
	articles.push_back("");
	articles.erase(articles.begin(), articles.end());
}

Magazine::Magazine(string name, string author, int publicYear)
	:Publication(name, author, publicYear)
{
	int x = -1;
	cout << "Add article/s?\n 1.yes  2.no\n"; cin >> x;
	if (x == 1) {
		string y;
		cout << "Input article: "; cin.ignore(); getline(cin, y);
		addInfo(y);
	}
	else {
		articles.push_back("");
		articles.erase(articles.begin(), articles.end());
	}
}

void Magazine::addInfo(string info)
{
	articles.push_back(info);
	cout << "one more?\n 1.yes  2.no\n";
	int x = 0;
	cin >> x;
	if (x == 1) {
		string y;
		cout << "Input article: "; cin.ignore(); getline(cin, y);
		addInfo(y);
	}
}

void Magazine::showInfo() const
{
	Publication::showInfo();
	if (articles.size() != 0) {
		for (int i = 0; i < articles.size(); i++)
		{
			cout << i + 1 << ". " << articles[i] << endl;
		}
	}
}
