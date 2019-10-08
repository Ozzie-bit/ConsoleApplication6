#pragma once

#ifndef LIBRARY_H
#define LIBRARY_H

#include "stdafx.h"
#include "employee.h"
#include "book.h"
#include <string>
#include <queue>

using namespace std;
template <typename T>
class library {
private:
	
public:
	Library();
	~Library();

	void add_employee(string name);
	void add_book(string bookName);
	void pass_on();
	void circulate_book();
};

#endif