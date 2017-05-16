#include "myList.h"



myList::myList()
{
	first = nullptr;
	last = nullptr;
}

myList::myList(myList &m)
{
	node *i;
	i->info;
	first = m.first;
	while (first->next != nullptr)
	{
		new node(i->info)
	}
	last = m.last;
}


myList::~myList()
{
	delete first;
	delete last;
}

void myList::push_front(int elem)
{
	if (first != nullptr)
	{
		node *front = new node{ elem, first, front };
		first = front;
		
	}
	else
		first = new node{ elem, last, first };
}




