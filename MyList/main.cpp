#include <stdlib.h>
#include "myList.h"

void main()
{
	myList list;
	list.push_front(5);
	list.push_front(4);
	list.push_front(3);
	list.push_front(2);
	list.push_front(1);
	list.push_front(7);
	list.shiftLeft();
	list.shiftRight();
	list.remove(5);
	list.reverse();
	list.rotateLeft();
	list.rotateRight();
}