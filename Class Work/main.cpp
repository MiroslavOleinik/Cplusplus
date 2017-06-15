#include <iostream>
#include "List.h"

int main()
{
	List list;

	for (Iterator it = list.begin(); it != list.end(); ++it)
	{

		std::cout << *it << " ";
	}
}