#include <stack>
#include <iostream>
#include <queue>


std::stack<int> superMerge(std::stack<int> a, std::stack<int> b)
{
	std::stack<int> c;
	std::stack<int> c2;


	while (!a.empty() && !b.empty())
	{
		
		if (a.top() > b.top())
		{
			c.push(a.top());
			a.pop();
		}
		else if(a.top() < b.top())
		{
			c.push(b.top());
			b.pop();
		}
	}
	if (a.empty())
	{
		while (!b.empty())
		{
			c.push(b.top());
			b.pop();
		}
	}
	else if (b.empty())
	{
		while (!a.empty())
		{
			c.push(a.top());
			a.pop();
		}
	}
	while (!c.empty())
	{
		c2.push(c.top());
		c.pop();
	}

	return c2;
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

std::queue<int> transformToQ(std::stack<int> s)
{
	std::queue<int> q;
	
	while (!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
	return q;
}

void printStack(std::stack<int> s)
{
	int print;
	while (!s.empty())
	{
		print = s.top();
		std::cout << print;
		s.pop();
	}
	std::cout << std::endl;
}

void printQueue(std::queue<int> q)
{
	int print;
	while (!q.empty())
	{
		print = q.front();
		std::cout << print;
		q.pop();
	}
	std::cout << std::endl;
}

void main()
{
	//SUPERMERGE
	std::stack<int> s1;
	s1.push(1), s1.push(4), s1.push(8);
	std::stack<int> s2;
	s2.push(4), s2.push(5), s2.push(6);
	std::stack<int> sup;
	//sup = superMerge(s1, s2);
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

	//TRANSFORMTOQ
	std::queue<int> q1;
	std::stack<int> s5;
	s5.push(5), s5.push(4), s5.push(3), s5.push(2);
	q1 = transformToQ(s5);
	std::cout << "Transform To Queue" << std::endl;
	printQueue(q1);


}