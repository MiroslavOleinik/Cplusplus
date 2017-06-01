//Task 2. Stack.

#include <iostream>
#include "Stack.h"

enum Menu
{
	Push = 1,
	Pop,
	Top,
	Clear,
	Exit
};

int main()
{
	Stack s1;
	int menu;
	int element;
	while (0 < 1)
	{
		std::cout << "\tMenu\n1. Add new number to stack.\n2. Took number from stack.\n3. Show last number in stack.\n4. Clear all stack.\nEntre: ";
		std::cin >> menu;
		switch (menu)
		{
		case Push:
			std::cout << "Entre your number: ";
			std::cin >> element;
			s1 << element;
			break;
		case Pop:
			s1 >> element;
			if (element == NULL)
			{
				std::cout << "Stack is empty.\n";
				continue;
			}
			std::cout << "Number " << element << " was took from stack.\n";
			break;
		case Top:
			if (s1.Top() == NULL)
			{
				std::cout << "Stack is empty.\n";
				continue;
			}
			else
			{
				std::cout << "Last number in stack is "<< s1.Top() << ".\n";
			}
			break;
		case Clear:
			s1.Clear();
			std::cout << "Stack is clear now.\n";
			break;
		case Exit:
			std::cout << "Good Bye.\n";
			return 1;
			break;
		default:
			break;
		}
	}
}
