#include <iostream>
#include ".\include\mystack.h"

using namespace std;

int main()
{
    mystack aStack;

    aStack.push(1);
    aStack.push(2);
    aStack.push(3);
    cout << aStack.getTop() << endl;
    cout << aStack.pop() << endl;
    cout << aStack.pop() << endl;
    cout << aStack.getTop() << endl;
    return 0;
}
