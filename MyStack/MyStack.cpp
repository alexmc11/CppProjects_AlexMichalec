#include "MyStack.h"



MyStack::MyStack()
{
}

MyStack::MyStack(MyStack & s)
{
}

MyStack::MyStack(int num, int val)
{
}

MyStack::~MyStack()
{
}

void MyStack::Pop()
{
}

void MyStack::Push(int el)
{
	s = new node{ el, s };


}

int MyStack::Top()
{
	return 0;
}

int MyStack::Size()
{
	return 0;
}

bool MyStack::isEmpty()
{
	return false;
}


