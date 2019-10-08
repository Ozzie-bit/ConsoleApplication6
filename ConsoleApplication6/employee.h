#pragma once

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "stdafx.h"
#include "date.h"
#include <string>
#include <queue>

using namespace std;
template <typename T>
class employee {
private:
	T name;
	T waitTime = 0;
	T retainTime = 0;
	queue<T> employeeQueue;
public:
	employee();
	~employee();
	push(const T&the_data);
	pop();
	T getWaitTime();
	T getRetainTime();
	T setRetainTime(int theRetainTime);
	T setWaitTime(int theWaitTime);
};

#endif