//
//  priorityQueue.h
//  Project 1B
//
//  Created by Ahmed Boukhousse on 10/8/19.
//  Copyright © 2019 Ahmed Boukhousse. All rights reserved.
// 

#ifndef prioirtyQueue_h

#define prioirtyQueue_h

#include <stdio.h>
#include <list>
#include "employee.h"

using namespace std;

class priorityQueue {

private:
	//! the list of employees sorted by priority
	list<employee*> employee_queue;
public:
	//! Constructor for priorityQueue object
	priorityQueue();
	//! Push a new item into the back of the queue
	void push(employee* temp);
	//! Pop employee with highest priority out of queue
	employee* pop_max();
	//! Get the empoyee with the highest priority inside the queue
	employee* get_top();
	//! Return whether the queue is empty
	bool isEmpty();

};
#endif 
