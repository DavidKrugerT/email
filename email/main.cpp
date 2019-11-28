#include "Email.h"
#include "MailBox.h"
#include <vector>
#include <algorithm>


template<class E>
void show(const std::vector<E>& rhs) {
	for (E a : rhs) {
		std::cout << a << '\n';
	}
}

int main() {
	Email a("Anders", "2002-02-28", "lab 1");
	Email b("Anders", "2002-02-28", "lab 2");
	Email c("Anders", "2002-02-28", "lab 3");

	std::vector<Email> mails;

	mails.push_back(c);
	mails.push_back(a);
	mails.push_back(b);

	MailBox box(mails);	

	box.writeMail(Email("David", "2002-02-22", "lab 4"));
	box.writeMail(Email("Albin", "2004-02-22", "lab 8"));
	box.writeMail(Email("David", "2002-12-22", "lab 1"));
	box.writeMail(Email("David", "2002-05-22", "lab 2"));
	box.writeMail(Email("David", "2002-03-22", "lab 5"));

	box.SortSubject();
	box.SortDate();
	box.SortWho();
	show(box.getMail());

	system("PAUSE");
	return 0;
}


