#pragma once
class cstack
{
protected:
	node *top;
public:
	cstack();
	cstack(node* &ptr);
	bool IsEmpty()const;
	bool IsNotEmpty()const;
	void push(node* &ptr);
	node* pop();
	void showtop();                  //show the top value placed in the stack 
	void print() const;              //show all data placed in stack
	cstack(const cstack &src);       //copy constructor
	cstack &operator=(const cstack &robj);
	~cstack();
};



