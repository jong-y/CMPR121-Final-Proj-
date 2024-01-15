#include "PersonType.h"
#include <string>
#include <iostream>

PersonType::PersonType() {
	ssn = 0;
}

PersonType::PersonType(std::string first, std::string last, int num) {
	fName = first;
	lName = last;
	ssn = num;
}

void PersonType::setPersonInfo(std::string firstName, std::string lastName, int SSN)
{
	fName = firstName;
	lName = lastName;
	ssn = SSN;

}

std::string PersonType::getFirstName() const
{
	return fName;
}

std::string PersonType::getLastName() const
{
	return lName;
}

int PersonType::getSSN() const
{
	return ssn;
}

void PersonType::printName() const
{
	std::cout << lName << ", " << fName << std::endl;
}

void PersonType::printPersonInfo() const
{
	printSSN();
	std::cout << " " << fName << " " << lName << std::endl;
}

void PersonType::printSSN() const
{
	std::cout << ssn / 1000000 << "-" << (ssn / 10000) % 100 << "-" << ssn % 10000;
}