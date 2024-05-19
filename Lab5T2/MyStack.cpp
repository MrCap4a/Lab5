#include "MyStack.h"

std::list <int> StackData;

void MyStack:: pop() {
	StackData.pop_front();
}

void MyStack::add(int element) {
	StackData.push_front(element);
}

int MyStack::get_front() {
	return StackData.front();
}