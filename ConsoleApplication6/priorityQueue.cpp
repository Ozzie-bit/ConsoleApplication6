#include "priorityQueue.h"

priorityQueue::priorityQueue() {
}

void priorityQueue::addEmployee(employee* employee) {
	WorkQueue.push_back(employee);
}

employee* priorityQueue::pop_max() { // pulls highest priority from queue : O(n)
	employee *max = *WorkQueue.begin(); // assume max is first element
	list<employee*>::iterator it, toErase;
	it = toErase = WorkQueue.begin();
	it++; // start at second element so we don't compare top to itself
	for (it; it != WorkQueue.end(); it++) {
		if ((max->getPriority()) < ((*it)->getPriority())) { // if new max is found, update pointers
			max = *it;
			toErase = it;
		}
	}
	WorkQueue.erase(toErase);
	return max;
}

employee* priorityQueue::get_top() { // O(n)
	employee *max = *WorkQueue.begin(); // assume max is first element
	list<employee*>::iterator it = WorkQueue.begin();
	it++; // start at second element so we don't compare max to itself
	for (it; it != WorkQueue.end(); it++) {
		if ((max->getPriority()) < ((*it)->getPriority())) { // if new max is found, update pointer
			max = *it;
		}
	}
	return max;
}

bool priorityQueue::empty() {
	return WorkQueue.size() == 0;
}