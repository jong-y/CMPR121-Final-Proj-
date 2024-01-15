#include <string>
#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H


class PersonType 
{
	private:
		std::string fName;
		std::string lName;
		int ssn;

	public: 
		PersonType();
		PersonType(std::string first, std::string last, int num);

		void setPersonInfo(std::string firstName, std::string lastName, int SSN);

		std::string getFirstName() const;
		std::string getLastName() const;
		int getSSN() const;

		void printName() const;
		void printPersonInfo() const;
		void printSSN() const;
};
#endif