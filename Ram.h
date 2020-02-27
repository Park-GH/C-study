//#pragma once
#ifndef RAM_H
#define RAM_H
class Ram
{
	char mem[100 * 1024] = {0};
	int size=100*1024;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};

#endif