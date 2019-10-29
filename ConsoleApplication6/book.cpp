
#include "stdafx.h"
#include "book.h"

using namespace std;

book::book(const string& bookName) {
	name = bookName;
	archived = false;
}

book::book() {
	name = "none";
	start_date = Date(2000, 1, 1, DateFormat::US);
	end_date = Date(2000, 1, 1, DateFormat::US);
	lastPass = start_date;
	archived = false;
}

book::~book() {

}

void book::addToCirculation(const Date& date) {
	start_date = date;
	lastPass = date;
}

string book::getName() {
	return name;
}

void book::add_employee(employee*& personnel) {
	theQueue.addEmployee(personnel);
}

void book::setArchived(const Date& date) {
	archived = true;
	end_date = date;
}

void book::passOn(const Date& passDate) {
	employee *mostNeeded;
	employee *otherEmployee;
	cout << "Book " << name << " has been passed from " << theQueue.get_top()->getName();
	mostNeeded = pop_max();
	mostNeeded->setRetainTime(passDate, lastPass);
	if (theQueue.empty()) {
		setArchived(passDate);
		cout << " to " << "the Archives" << " on " << end_date << endl;
	}
	else {
		otherEmployee = get_top();
		otherEmployee->setWaitTime(start_date, passDate);
		lastPass = passDate;
		cout << " to " << theQueue.get_top()->getName() << " on " << lastPass << endl;
	}
}

void book::set_start_date(Date theDate) {
	start_date = theDate;
	lastPass = theDate;
}
void book::set_end_date(Date theDate) {
	end_date = theDate;
}

Date book::get_start_date() {
	return start_date;
}

Date book::get_end_date() {
	return end_date;
}

bool book::getArchived() {
	return archived;
}

employee* book::pop_max() {
	return theQueue.pop_max();
}

employee* book::get_top() {
	return theQueue.get_top();
}
