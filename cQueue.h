/**
 * cQueue class header
 */

#pragma once
#include <iostream>
#include "node.h"
#include "cstack.h"
using namespace std;

class cQueue:protected cstack
{
protected:
	node *tail;
	
public:
	cQueue();
	cQueue(node *&Ptr);
	cQueue(const cQueue &Source);
	cQueue &operator=(const cQueue &Source);
	cQueue &enQueue(node *&Ptr);
	void print() const;
	~cQueue();
	node *deQueue();
	bool isEmpty() const;
	bool isNotEmpty() const;
	void frontF();
	void rearF();
};
