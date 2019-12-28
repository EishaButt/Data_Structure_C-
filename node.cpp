#include "pch.h"
#include "node.h"
#include<iostream>
using namespace std;

node::node()
{
	data = NULL;
	next = nullptr;

}

node::node(int value) :next(nullptr), data(value)
{
}

void node::print()
{
	cout << data << "  ";
}

int node::getdata()
{
		return data;
}

void node::setdata(int data)
{
	this->data = data;
}

void node::setnextNode(node * ptr)
{
	next = ptr;
}

node * node::getnextNode()
{
	return next;
}

void node::setPriority(int input)
{
	priority = input;
}

int node::getPriority()
{
	return priority;
}


node::~node()
{
}


