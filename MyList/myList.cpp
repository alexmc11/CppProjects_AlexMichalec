
#include "MyList.h"
#include <stdlib.h>



myList::myList()
{
	size = 0;
	last = nullptr;
	first = nullptr;
}







myList::myList(myList &a)
{
	node *new_node = new node();
	node *aux = a.first;
	new_node->info = aux->info;
	size++;
	first = new_node;
	aux = aux->next;
	while (size != a.size)
	{
		node *new_node2 = new node();
		new_node2->info = aux->info;
		size++;
		new_node = new_node2;
		aux = aux->next;
	}
	last = new_node;

}


myList::~myList()

{
}







void myList::push_front(int num)

{
	node *new_node = new node(); //nuevo nodo
	new_node->info = num;	//se le da el valor al nuevo nodo
	if (size == 0)
	{
		last = new_node;	//en caso de que la lista este vacia se le dan los mismos valores tanto para el final como para principio
		first = new_node;
		size++;
	}
	else
	{
	first->previous = new_node;		//en caso de que no sea asi el anterior sera el nuevo nodo
	new_node->next = first;			// el siguiente valor del nuevo nodo sera el primero
	first = new_node;				//el primer nodo pasara a ser nuestro nuevo
	size++;							//aumentamos tamaño
	}
}

void myList::remove(int num)
{
	node *actual;
	node *aux;
	aux = first;
	actual = aux;
	while (actual != nullptr)
	{
		if (actual->info == num)
		{
			aux = actual->next;
			aux = actual->previous;
			delete actual;
			actual = aux;
			size--;
		}
		else
		{
			actual = aux->next;
			actual = aux->previous;
		}
	}
}

void myList::reverse()
{
	node *actual1;
	node *actual2;
	actual1 = first;
	actual2 = last;
	int aux1;
	int aux2;
	while (actual1->previous != actual2->next || actual1 != actual2)
	{
		aux1 = actual1->info;
		aux2 = actual2->info;
		actual1->info = aux2;
		actual2->info = aux1;
		actual1->previous = actual1;
		actual1 = actual1->next;
		actual2->next = actual2;
		actual2 = actual2->previous;
		
	}
}

void myList::shiftLeft()
{
	node *actual;
	node *aux;
	aux = first;
	actual = aux;
	while (actual -> next != nullptr)
	{
		aux = actual->next;
		actual->info = aux->info;
		actual = aux;
	}
	actual->info = rand() % 10;
}

void myList::shiftRight()
{
	node *actual;
	node *aux;
	aux = last;
	actual = aux;
	while (actual->previous != nullptr)
	{
		aux = actual->previous;
		actual->info = aux->info;
		actual = aux;
	}
	actual->info = rand() % 10;
}

void myList::rotateLeft()
{
	node *actual;
	node *aux;
	aux = first;
	actual = aux;
	int value = first->info;
	while (actual->next != nullptr)
	{
		aux = actual->next;
		actual->info = aux->info;
		actual = aux;
	}
	actual->info = value;
}

void myList::rotateRight()
{
	node *actual;
	node *aux;
	aux = last;
	actual = aux;
	int value = last->info;
	while (actual->previous != nullptr)
	{
		aux = actual->previous;
		actual->info = aux->info;
		actual = aux;
	}
	actual->info = value;
}









