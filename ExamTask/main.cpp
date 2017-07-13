#include <iostream>
#include <list>
#include "PhoneBook.h"


int main()
{	
	std::string name;
	int phoneNumber;
	std::cout << "Entre name: ";
	std::cin >> name;
	std::cout << "Please, entre phone number in internationale form (17xxxxxxx, 25xxxxxxx, 29xxxxxxx, 33xxxxxxx, 44xxxxxxx): ";
	std::cin >> phoneNumber;
	PhoneBook newMember(name, phoneNumber);

	std::cout << "Please, entre phone number in internationale form (17xxxxxxx, 25xxxxxxx, 29xxxxxxx, 33xxxxxxx, 44xxxxxxx): ";
	std::cin >> phoneNumber;
	newMember.AddNewNumber(phoneNumber);

	std::cout << "Please, entre phone number in internationale form (17xxxxxxx, 25xxxxxxx, 29xxxxxxx, 33xxxxxxx, 44xxxxxxx): ";
	std::cin >> phoneNumber;
	newMember.AddNewNumber(phoneNumber);

	newMember.PrintMembersPhoneNumbers();

	int count = 0;
	std::cout << "Please, choose what number you wan/'t remove: ";
	std::cin >> count;

	newMember.RemoveNumber(count - 1);
	newMember.PrintMembersPhoneNumbers();
}

