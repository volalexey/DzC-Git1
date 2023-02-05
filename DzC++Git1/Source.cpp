#include "Publication.h"
#include "Book.h"
#include "Magazine.h"
using namespace std;

int main() {

	/*Publication a("Book", "author", 2022);
	a.showInfo();*/

	/*Book b("Book", "author", 2022);
	b.showInfo();*/

	Magazine c("Magazine", "Author", 2023);
	Magazine d;
	c.showInfo();

	return 0;
}
