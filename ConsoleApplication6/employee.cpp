
#include "stdafx.h"
#include "employee.h"

using namespace std;

//gathering information about the employee
employee::employee() {
	name = "none";
	waitTime = 0;
	retainTime = 0;
}

//applying the employee information
employee::employee(string theName) {
	name = theName;
	waitTime = 0;
	retainTime = 0;
}

//setting the wait time for the next employee
void employee::setWaitTime(Date firstDate, Date currentDate) {
	waitTime = currentDate - firstDate;
}

//setting the retain time for the previous employee
void employee::setRetainTime(Date currentDate, Date lastPass) {
	retainTime = currentDate - lastPass;
}

//setting the employees priority based on the wait and retain time
int employee::getPriority() {
	return waitTime - retainTime;
}
//returning the name of the employee
string employee::getName() {
	return name;
}
