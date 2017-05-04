#include <stack>
#include <iostream>


std::stack<int> superMerge(std::stack<int> a, std::stack<int> b)
{
	std::stack<int> c;

	for (int i = 0; i < a.size(); i++)
	{
		
	}
	while (!a.empty())
	{
		c.push(a.top());
		a.pop();
	}
	while (!b.empty())
	{
		c.push(b.top());
		b.pop();
	}
	return c;
}

std::stack<int> putHat(std::stack<int> a, std::stack<int> b)
{
	std::stack<int> swap;
	while(!a.empty())
	{
		swap.push(a.top());
		a.pop();
	}

	while (!swap.empty())
	{
		b.push(swap.top());
		swap.pop();
	}
	return b;
}

void printStack(std::stack<int> s)
{
	while (!s.empty())
	{
		int print = s.top();
		std::cout << print;
		s.pop();
	}
	std::cout << std::endl;
}

void main()
{
	//SUPERMERGE
	std::stack<int> s1;
	s1.push(3), s1.push(2), s1.push(1);
	std::stack<int> s2;
	s2.push(6), s2.push(5), s2.push(4);
	std::stack<int> sup;
	sup = superMerge(s1, s2);
	std::cout << "Super Merge" << std::endl;
	printStack(sup);
	
	//PUTHAT
	std::stack<int> s3;
	s3.push(2), s3.push(9), s3.push(4), s3.push(7);
	std::stack<int> s4;
	s4.push(6), s4.push(3), s4.push(5);
	std::stack<int> hat;
	hat = putHat(s3, s4);
	std::cout << "Put Hat" << std::endl;
	printStack(hat);

}