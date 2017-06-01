#include <iostream>
#include "Stack.h"


int main()
{
	Stack s1;
	std::cout << "Entre number: ";
	int element;
	std::cin >> element;
	s1 << element;
	std::cout << s1.Top();
}