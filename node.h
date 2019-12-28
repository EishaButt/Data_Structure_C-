#pragma once
class node
{	
	int data;
	int priority;
public:
	node *next;
	node();
	node(int value);
	void print();
	int getdata();
	void setdata(int data);
	void setnextNode(node *ptr);
	node* getnextNode();
	void setPriority(int input);
	int getPriority();
	~node();
};

