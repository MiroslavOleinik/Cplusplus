#pragma once

class Stack
{
public:
	Stack(const Stack& obj);
	Stack();
	~Stack();

	void Push(int element);
	int Pop();
	int Top();
	void Clear();

	Stack& operator>> (int& element);
	Stack& operator << (int element);
	
private:
	void ExpandCapacity();

	int* m_elements;
	int m_capacity;
	int m_count;
};
