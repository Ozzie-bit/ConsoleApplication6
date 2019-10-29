#ifndef Booklist_h
#define Booklist_h
#include <iostream>
#include <list>
#include <iterator>
#include <string>
#include "Employee.h"
#include "Date.h"
#include "priorityQueue.h"

class book {
public:
	book();
	book(const string& bookName);
	~book();
	void setArchived(const Date& date);
	void set_start_date(Date theDate);
	string getName();
	void add_employee(employee*& personnel);
	void passOn(const Date& passDate);
	bool getArchived();
	employee* pop_max();
	employee* get_top();

private:
	string name;
	bool archived;
	Date start_date;
	Date end_date;
	Date lastPass;
	priorityQueue theQueue;
};
#endif /* Booklist_h */