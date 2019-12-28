#include "pch.h"
#include "node.h"
#include "cstack.h"
#include<string.h>
#include<iostream>
using namespace std;


cstack::cstack():top(NULL)
{
	
}

cstack::cstack(node *& ptr) : top(ptr)
{
	top->next = nullptr; ptr = nullptr; 
}

bool cstack::IsEmpty() const
{
	if (top == nullptr)
		return true;
	else
		return false;
}

bool cstack::IsNotEmpty() const
{
	if (top == nullptr)
		return false;
	else
		return true;
}

void cstack::push(node* &ptr)
{
	/*node *ptr = new node();
	ptr->data = value;
	ptr->next = top;
	top = ptr;*/
	//sir
	ptr->next = top;
	top = ptr;
	ptr = NULL;
}

node* cstack::pop()
{
	if (IsEmpty()) {
		cout << "stack is emty" << endl;
		return false;
	}
	else
	{
		//int x = top->data;
		node *ptr = top;
		top = top->next;
		ptr->next= NULL;
		//delete(ptr);
		return ptr;
	}
}

void cstack::showtop()
{
	if (IsEmpty())
		cout << "Satck is empty!" << endl;
	else
		cout << "element at top is " << top->getdata();
}

void cstack::print() const
{
	if (IsEmpty())
		cout << "You are trying to access empty stack!" << endl;
	else {
		node *ptr = top;
		while (ptr) {
			ptr->print();
			ptr = ptr->next;
		}
	}
}

cstack::cstack(const cstack & src)
{
	this->top = src.top;
	if (src.top) {
		node *sptr, *dptr;
		dptr = top = new node(*src.top);
		sptr = src.top->next;
		while (sptr) {
			dptr->next = new node(*sptr);
			sptr = sptr->next;
			dptr = dptr->next;
		}
	}
	else
		cerr << "you are truing to copy an empty stack!" << endl;
}

cstack & cstack::operator=(const cstack & robj)
{
	if (this == &robj)
		return *this;
	if (true)
	{
		cstack temp;
		temp.top = top;
	}
	if (true) {
		cstack temp = robj;
		top = temp.top;
		temp.top = NULL;
		return *this;
	}
}

	cstack::~cstack()
{
		node *ptr=top;
	/*while (top != NULL) {
		ptr = top;
		cout << "&";
		top = top->next;
		cout << "$";
		delete ptr;
		cout << "8";
	}*/
	while (ptr) {
		ptr = ptr->next;
		delete top;
		top = ptr;
	}
}
