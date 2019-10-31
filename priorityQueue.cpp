#include "priorityQueue.h"

priorityQueue::priorityQueue() {
}

void priorityQueue::push(employee* employee) { //! Push a new item into the back of the queue
	employee_queue.push_back(employee);
}

employee* priorityQueue::pop_max() { //! Pop employee with highest priority out of queue: O(n)
	employee *max = *employee_queue.begin(); // max is assumed first in queue
	list<employee*>::iterator it = employee_queue.begin();
	list<employee*>::iterator toErase = employee_queue.begin();
	it++; //skip first in queue as not to compare it to itself
	for (it; it != employee_queue.end(); it++) {
		if ((max->getPriority()) < ((*it)->getPriority())) { // compare priorities; set max to item of highest priority value
			max = *it;
			toErase = it;
		}
	}
	employee_queue.erase(toErase); //pop highest priority employee from queue
	return max;
}

employee* priorityQueue::get_top() { //! Get the empoyee with the highest priority inside the queue: O(n)
	employee *max = *employee_queue.begin(); //max is assumed first in queue
	list<employee*>::iterator it = employee_queue.begin();
	it++; //skip first in queue as not to compare it to itself
	for (it; it != employee_queue.end(); it++) {
		if ((max->getPriority()) < ((*it)->getPriority())) { //compare priorities; set max to item of highest priority value
			max = *it;
		}
	}
	return max; //return the highest priority employee
}

bool priorityQueue::isEmpty() { //! Return whether the queue is empty: O(1)
	return employee_queue.size() == 0;
}