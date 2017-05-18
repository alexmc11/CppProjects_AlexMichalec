#pragma once

struct node {
	int info;
	node *next;
	node *previous;
};

class myList
{
	int size;
	node *first;
	node *last;

public:
	myList();
	myList(myList &m);
	~myList();
	void push_front(int elem);
	void remove(int num);
	void reverse();
	void shiftLeft();
	void shiftRight();
	void rotateLeft();
	void rotateRight();
};

