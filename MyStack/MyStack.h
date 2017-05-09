#pragma once
class MyStack
{
	struct node 
	{ 
		int info;
		node *next;
	};

	node *s;
public:
	void Pop();
	void Push(int el);
	int Top();
	int Size();
	bool isEmpty();
	MyStack();
	MyStack(MyStack &s);
	MyStack(int num, int val);
	~MyStack();
};

