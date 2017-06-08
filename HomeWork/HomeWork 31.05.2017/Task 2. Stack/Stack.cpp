#include "Stack.h"
#include <iostream>

Stack::Stack(const Stack& obj)
{
	m_capacity = obj.m_capacity;
	m_count = obj.m_count;
	m_elements = new int[m_capacity];
	memcpy(m_elements, obj.m_elements, m_count * sizeof(int));
}

Stack::Stack()
{
	m_capacity = 10;
	m_elements = new int[m_capacity];
	m_count = 0;
}

Stack::~Stack()
{
	delete[] m_elements;
}

void Stack::ExpandCapacity()
{
	m_capacity *= 2;
	int* newMemory = new int[m_capacity];
	memcpy(newMemory, m_elements, m_count);
	delete[] m_elements;
	m_elements = newMemory;
}

void Stack::Push(int element)
{
	if (m_count == m_capacity)
	{
		ExpandCapacity();
	}
	m_elements[m_count] = element;
	m_count++;
	std::cout << "Element add to stack.\n";
}

int Stack::Pop()
{
	if (m_count == 0)
	{
		return NULL;
	}
	int buff = m_elements[m_count-1];
	m_count--;
	return buff;
}

int Stack::Top()
{
	if (m_count == 0)
	{
		return NULL;
	}
	return m_elements[m_count-1];
}

void Stack::Clear()
{
	m_elements = new int[m_capacity];
	m_count = 0;
	delete[] m_elements;
}

Stack& Stack::operator>>(int& element)
{
	element = Pop();
	return *this;
}

Stack& Stack::operator << (int element)
{
	Push(element);
	return *this;
}
