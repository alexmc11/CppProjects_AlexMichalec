#include <list>
#include <iostream>
#include <algorithm>

std::list<int>superMerge(std::list<int>l1, std::list<int>l2)
{
	for (std::list<int>::iterator it = l2.begin(); it != l2.end(); ++it)
	{
		l1.push_front(*it);
	}
	l1.sort();
	l1.reverse();
	return l1;
	/*int size1 = l1.size();
	int size2 = l2.size();
	int iterator;
	std::list<int>::iterator it1;
	std::list<int>::iterator it2;

	if (size1 < size2)
		iterator = size1;
	else if (size2 < size1)
		iterator = size2;
	else
		iterator = size1;

	it1 = l1.begin();
	it2 = l2.begin();

	std::list<int> l3;
	for (int i = 0; i < iterator; i++)
	{
		if (*it1 > *it2)
		{
			l3.push_front(*it1);
			l3.push_front(*it2);
		}
		else
		{
			l3.push_front(*it2);
			l3.push_front(*it1);
		}
		it1++;
		it2++;
	}*/
}
void printList(std::list<int>list)
{
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	{
		std::cout << *it;
	}
	std::cout << std::endl;
}
void change(std::list<int>&list)
{
	std::list<int>::iterator it1;
	std::list<int>::iterator it2;

	it1 = list.begin();
	it2 = list.end();
	it2--;
	int aux1 = *it1;
	int aux2 = *it2;
	list.pop_back();
	list.pop_front();
	list.push_front(aux2);
	list.push_back(aux1);
}
int getElementPos(std::list<int>list, int pos)
{
	std::list<int>::iterator it;
	it = list.begin();
	std::advance(it, pos - 1);
	int pos2 = *it;
	return pos2;
}
void removeDuplicates(std::list<int>&list)
{
	list.sort();
	list.unique();
}
void removeElement(std::list<int>&list, int el)
{
	std::list<int>list2;
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	{
		if (*it != el)
			list2.push_back(*it);			
	}
	std::list<int>::iterator it1;
	std::list<int>::iterator it2;
	it1 = list.begin();
	it2 = list.end();
	list.erase(it1, it2);
	for (std::list<int>::iterator it = list2.begin(); it != list2.end(); ++it)
	{
		list.push_back(*it);
	}
}
bool palindrome(std::list<int>list)
{
	std::list<int>::iterator rit;
	std::list<int>::iterator it;
	it = list.begin();
	rit = list.end();
	rit--;
	int aux = list.size();
	aux /= 2;
	while (aux != 0)
	{
		if (*it != *rit)
			return false;
		it++;
		rit--;
		aux--;
	}
	return true;
}

void main() 
{
	//SUPERMERGE
	std::list<int>l1 { 7, 1, 9, 2 };
	std::list<int>l2 { 5, 3, 4, 6};
	std::list<int>l3;
	l3 = superMerge(l1, l2);
	printList(l3);

	//CHANGE
	std::list<int>l4{ 2, 4, 6, 8, 9 };
	change(l4);
	printList(l4);

	//GETELEMENTPOS
	std::list<int>l5{ 3, 5, 1, 4, 8 };
	int pos = 3;
	int element = getElementPos(l5, pos);
	std::cout << element << std::endl;

	//REMOVEELEMENT
	std::list<int>l6{ 4, 3, 4, 2, 4 };
	int el = 4;
	removeElement(l6, el);
	printList(l6);

	//PALINDROME
	bool ispalindrome;
	std::list<int>l7{ 3, 4, 5, 4, 3 };
	ispalindrome = palindrome(l7);
	if (ispalindrome)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	//REMOVEDUPLICATES
	std::list<int>l8{ 3,4, 5,5,6,6, };
	removeDuplicates(l8);
	printList(l8);
}
