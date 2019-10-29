#pragma once

#ifndef LIBRARY_H
#define LIBRARY_H

#include "stdafx.h"
#include "employee.h"
#include "book.h"
#include <string>
#include <list>
#include "date.h"

using namespace std;

class library {
public:
	library();
	~library();

	void add_employee(string name);
	void add_book(string bookName);
	void pass_on(string bookName, Date& book_pass);
	void circulate_book(string bookName, Date& date_cir);

private:
	list <book> books_archived;
	list <book> books_circulated;
	list <employee*> employees;
};

#endif
