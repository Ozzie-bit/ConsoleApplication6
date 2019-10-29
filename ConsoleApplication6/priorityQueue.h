//
//  Queue.hpp
//  Project 1
//
//  Created by Ahmed Boukhousse on 10/8/19.
//  Copyright © 2019 Ahmed Boukhousse. All rights reserved.
// 

#ifndef prioirtyQueue_h

#define prioirtyQueue_h

#include <stdio.h>

#include <list>

#include "employee.h"

#include <vector>

#include <algorithm>

#include <iostream>

using namespace std;

class priorityQueue {

private:
	list<employee*> WorkQueue;
public:
	priorityQueue();
	void addEmployee(employee* temp);
	employee* pop_max();
	employee* get_top();
	bool empty();

};
#endif /* Queue_h */
//********************************
/* #ifndef Queue_h
#define Queue_h
template <typename T>
class Queue {


public:
//! Push a new item into the back of the queue
void Push(const T& newData );
//! Remove the item at the front of the queue
void Pop();
//! Access the data at the front of the queue
T& Front();
//! Get the amount of items in the queue
int Size();
//! Return whether the queue is empty
bool IsEmpty();

private:
Queue <T> employee;
};*/
