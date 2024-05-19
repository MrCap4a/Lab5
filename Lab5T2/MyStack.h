#pragma once
#include <list>

using namespace std;

extern list <int> StackData;

class MyStack
{
public:
	void pop();
	void add(int element);
	int get_front();
};

