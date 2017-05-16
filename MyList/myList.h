#pragma once

struct node {
	int info;
	node *next;
	node *previous;
};

class myList
{
	node *first;
	node *last;

public:
	myList();
	myList(myList &m);
	~myList();
	void push_front(int elem);
	int size();
};

