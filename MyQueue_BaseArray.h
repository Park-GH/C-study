#pragma once
#include <iostream>
#include "BaseArray.h"
using namespace std;

class MyQueue : public BaseArray {
	int front;
	int rear;
public:
	MyQueue(int n) : BaseArray(n) { this->front = 0, this->rear = 0; }
	void enqueue(int n) { put(rear, n); rear++; }
	int  dequeue() { return get(front++); }
	int length() { return rear - front; }
	int capacity() { return getCapacity(); }
};
