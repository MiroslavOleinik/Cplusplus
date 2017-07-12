#pragma once

#include <string>
#include <list>
#include <iostream>

class IPhoneBook
{
public:
	virtual ~IPhoneBook() = default;

	virtual std::string GetName() = 0;
	virtual std::string GetNumber() = 0;
};

class GetPhoneMemberName : public IPhoneBook
{
private:
	std::string m_name;
	std::string m_phoneNumber;
public:
	GetPhoneMemberName(std::string name, std::string phoneNumber) :
		m_name(name),
		m_phoneNumber(phoneNumber)
	{
	}

	std::string GetName()
	{
		return m_name;
	}
	
	std::string GetNumber()
	{
		return m_phoneNumber;
	}

};

class NewPhoneMemberNumber : public GetPhoneMemberName
{
public:
	NewPhoneMemberNumber(std::string name, std::string phoneNumber) : GetPhoneMemberName(name, phoneNumber)
	{
	}
};

