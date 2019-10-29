#include "stdafx.h"
#include "library.h"

using namespace std;

library::library() {

}

library::~library() {

}

void library::add_book(string newBook) {
	book tempBook(newBook);
	books_circulated.push_back(tempBook);
	cout << "Book " << newBook << " has been added to the database." << endl;
}

void library::add_employee(string name) {
	employee *temp;
	temp = new employee(name);
	employees.push_back(temp);
	cout << "Employee " << name << " has been added to the database." << endl;
	list<book>::iterator iter;
	for (iter = books_circulated.begin(); iter != books_circulated.end(); iter++) {
		iter->add_employee(employees.back());
	}
}

void library::pass_on(string bookName, Date& book_pass) {
	list<book>::iterator iter;
	bool isThere = false;
	for (iter = books_circulated.begin(); iter != books_circulated.end(); iter++) {
		if (iter->getName() == bookName) { 
			iter->passOn(book_pass);
			isThere = true;
			if (iter->getArchived()) {
				books_archived.push_back(*iter);
				books_circulated.erase(iter);
				return;
			}
		}
	}
	if (isThere = false) {
		throw std::exception("Book not found");
	}
}

void library::circulate_book(string bookName, Date& date_cir) {
	cout << "Book " << bookName << " has been circulated as of " << date_cir << endl;
	list<book>::iterator iter;
	for (iter = books_circulated.begin(); iter != books_circulated.end(); iter++) {
		if (iter->getName() == bookName) {
			iter->set_start_date(date_cir); 
			return;
		}
	}
	throw std::exception("Book not found"); 
}

