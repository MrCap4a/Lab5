#include <iostream>
#include "MyStack.h"

int main()
{
    MyStack stack;
    stack.add(14);
    stack.add(5);
    stack.add(8);
    cout << stack.get_front() << endl;
    stack.pop();
    cout << stack.get_front() << endl;
}