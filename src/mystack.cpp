#include "..\include\mystack.h"

using namespace std;

mystack::mystack()
{
    //ctor
}

mystack::~mystack()
{
    //dtor
}

int  mystack::getTop()
{
    return ( mStack[mStack.size() - 1] );
}

void mystack::push(int item)
{
    mStack.push_back(item);
}

int  mystack::pop()
{
    int rtn = mStack[mStack.size() - 1];
    mStack.pop_back();
    return rtn;
}
