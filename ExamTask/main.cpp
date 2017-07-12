#include <iostream>
#include <list>
#include "PhoneBook.h"



IPhoneBook* AddNewNumber(std::string name, std::string phoneNumber)
{
	return new NewPhoneMemberNumber(name, phoneNumber);
}

void PrintMembersInfo(IPhoneBook* newMember)
{
	std::cout << newMember->GetName() << ": \n" << newMember->GetNumber();
}

int main()
{	
	std::string name;
	std::string phoneNumber;
	std::cout << "Entre name: ";
	std::cin >> name;
	std::cout << "Entre phone: ";
	std::cin >> phoneNumber;
	IPhoneBook* newMember = new GetPhoneMemberName(name, phoneNumber);
	newMember = AddNewNumber(name, phoneNumber);
	std::cout << "Entre name: ";
	std::cin >> name;
	std::cout << "Entre phone: ";
	std::cin >> phoneNumber;
	newMember = AddNewNumber(name, phoneNumber);
	PrintMembersInfo(newMember);

}

