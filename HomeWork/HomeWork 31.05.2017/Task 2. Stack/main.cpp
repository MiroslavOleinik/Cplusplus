#include <iostream>
#include <locale.h>
#include "Stack.h"

enum Menu
{
	Push = 1,
	Pop,
	Top,
	Clear
};

int main()
{
	setlocale(LC_ALL, "Rus");
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
				continue;
			}
			std::cout << element << "Element was took from stack.\n";
			break;
		case Top:
			break;
		case Clear:
			break;
		default:
			break;
		}
	}
}
