#include "Publication.h"
#include "Book.h"
#include "Magazine.h"
#include "Library.h"
using namespace std;

int main() {

	/*Publication a("Book", "author", 2022);
	a.showInfo();*/

	/*Book b("Book", "author", 2022);
	b.showInfo();*/

	/*Magazine c("Magazine", "Author", 2023);
	Magazine d;
	c.showInfo();*/

	Library boo("BooLib");

	boo.showInfo();
	boo.addPub(new Magazine("Magazine", "Author", 2023));
	boo.addPub(new Book("Book", "author", 2022));
	boo.showInfo();
	cout << "========================================\n";
	boo.findPub("Book");
	boo.showPub();
	cout << "========================================\n";
	boo.delPub("Magazine", "Author1");
	boo.delPub("Magazine", "Author");
	boo.showInfo();
	cout << "========================================\n";
	cout << "exeptions\n";
	try {
		Magazine f("1", "2", 2000);//info = " "
	}
		catch(PublicationException* obj){
			cout << obj->Message() << endl;
	}
	cout << "==========\n";

	try{
		Magazine f("1", "2", -1);
	}
		catch (PublicationException* obj) {
		cout << obj->Message() << endl;
	}


		return 0;
}
