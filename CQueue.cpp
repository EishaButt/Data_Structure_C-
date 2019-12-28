/**
 * cQueue class
 */
#include "pch.h"
#include <iostream>
#include "cQueue.h"

using namespace std;

cQueue::cQueue() : tail(NULL) {
} // Default constructor.

cQueue::cQueue(node *&ptr) : cstack(ptr) 
{ 
	tail = top; 
	
} // Constructor with parameter.

cQueue &cQueue::enQueue(node *&ptr) // Adds a new node at top of the Queue.
{
	if (tail)
	{
		tail->next = ptr;
		tail = tail->next;
	}
	else {
		tail = top = ptr;
	}
		
	tail->next = ptr = NULL;
	return *this;
}

node *cQueue::deQueue() // Removes last node from the Queue.
{
	if (!top) {
		return cstack::pop();
	}
	if (top->next) {
		return cstack::pop();
	}	
	else
		tail = NULL;

	return cstack::pop();
}

cQueue::cQueue(const cQueue &src) // Self defined copy constructor.
{
	this->top = src.top;
	this->tail = src.tail;
	if (src.top)
	{
		node *sptr, *dptr;
		dptr = top = new node(*src.top);
		sptr = src.top->next;

		while (sptr)
		{
			dptr->next = new node(*sptr);
			dptr = dptr->next;
			sptr = sptr->next;
		}
		tail = dptr;
	}
}

cQueue &cQueue::operator=(const cQueue &obj) // Overloads assingment operator
{
	if (this == &obj)
	{
		return *this;
	}

	if (true)
	{
		cQueue temp;
		temp.top = top;
		temp.tail = tail;
	}
	if (true)
	{
		cQueue temp;
		temp = obj;
		top = temp.top;
		tail = temp.tail;
		temp.top = NULL;
		temp.tail = NULL;
		return *this;
	}
}

void cQueue::print() const // Prints all nodes in the Queue.
{
	cstack::print();
}

void cQueue::frontF()
{
	cout << top->getdata();
}

void cQueue::rearF()
{
	cout << tail->getdata();
}

cQueue::~cQueue() // Destructor.
{
	node *ptr = top;

	tail = NULL;

	while (ptr)
	{
		ptr = ptr->next;
		delete top;
		top = ptr;
	}
}

// Validation functions.

bool cQueue::isEmpty() const { return cstack::IsEmpty(); }

bool cQueue::isNotEmpty() const { return cstack::IsNotEmpty(); }


