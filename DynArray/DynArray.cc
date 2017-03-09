#include "DynArray.hh"
#include <iostream>

DynArray::DynArray(void) 
{
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;
	m_data = new int[DYN_ARRAY_DEFAULT_SIZE];
}

DynArray::DynArray(size_t size, const int & value)
{
	m_capacity = size;
	m_size = size;
	m_data = new int[size];
}



DynArray::~DynArray(void)
{
	delete[] m_data;
}

int * DynArray::begin(void) const
{
	return m_data;
}

int * DynArray::end(void) const
{
	return m_data+m_size;
}



void DynArray::fill(int * first, int * last, int value)
{
	while (first != last)
	{
		*first = value;
		first++;
	}
}



int & DynArray::operator[](size_t n) const
{
	return m_data[n];
}

bool operator==(const DynArray & lhs, const DynArray & rhs)
{
	int i = 0;
	while (i < lhs.m_size)
	{
		if (lhs[i] == rhs[i])
			i++;
		else
			return false;
	}
	return true;
}

void DynArray::push(const int & val)
{
	if (m_capacity == m_size)
	{
		reserve(m_capacity + m_size/2);
	}
	
	m_data[m_size] = val;
	m_size++;
}


void DynArray::reserve(size_t n)
{
	if (m_capacity < n)
	{
		m_capacity = n;

	}
}

void DynArray::copy(int * first, int * last, int * dest)
{
	while (first != last)
	{
		*dest = *first;
		first++, dest++;
	}
}