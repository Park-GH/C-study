#pragma once
#include <iostream>
#include "BaseArray.h"
using namespace std;


class MyStack : public BaseArray {
	int index;
public:
	MyStack(int n) : BaseArray(n) { this->index = 0; }
	void push(int n) { put(index++, n); }
	int  pop() { return get(--index); }
	int length() { return index; }
	int capacity() { return getCapacity(); }

};
