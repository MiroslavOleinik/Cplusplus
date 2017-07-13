#pragma once

#include <string>
#include <list>
#include <iostream>

class PhoneBook
{
private:
	std::string m_name;
	int m_phoneNumbers[10];
	int m_count = 0;
public:
	PhoneBook(std::string name, int phoneNumber);

	int GetCount();
	void AddNewNumber(int phoneNumber);
	void RemoveNumber(int count);
	void PrintMembersPhoneNumbers();
};

PhoneBook::PhoneBook(std::string name, int phoneNumber)
{
	m_name = name;
	m_phoneNumbers[0] = phoneNumber;
	m_count += 1;
}

int PhoneBook::GetCount()
{
	return m_count;
}

void PhoneBook::AddNewNumber(int phoneNumber)
{
	m_phoneNumbers[m_count] = phoneNumber;
	m_count += 1;
}

void PhoneBook::RemoveNumber(int count)
{
	m_phoneNumbers[count] = NULL;
	for (int i = count; i < m_count; i++)
	{
		m_phoneNumbers[i] = m_phoneNumbers[i + 1];
	}
	m_phoneNumbers[m_count] = NULL;
	m_count -= 1;
}

void PhoneBook::PrintMembersPhoneNumbers()
{
	std::cout << m_name << "\'s phone numbers:\n";
	for (int i = 0; i < m_count; i++)
	{
		std::cout << i+1 << ": " << m_phoneNumbers[i] << std::endl;
	}
}

class Favorites
{
public:
	Favorites(PhoneBook* favoriteMember);

private:
	std::list<PhoneBook*> m_favoriteMember;
};

Favorites::Favorites(PhoneBook* favoriteMember)
{
	m_favoriteMember.push_back(favoriteMember);
}
