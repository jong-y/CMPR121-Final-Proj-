#include "CandidateList.h"
#include <string>
#include <iostream>

CandidateList::CandidateList() 
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

void CandidateList::addCandidate(const CandidateType newCand) 
{
	Node* newNode = new Node();
	newNode->setCandidate(newCand);

	if (count == 0) {
		first = newNode;
		last = newNode;
	}
	else {
		last->setLink(newNode);
		last = newNode;
	}
	count++;
}

int CandidateList::getWinner() const  
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
		return 0;
	}

	Node* temp = first;

	int mostVotes = 0;
	int SSN = 0;

	while (temp != nullptr) {
		int votes = temp->getCandidate().getNumVotes();
		int ssn = temp->getCandidate().getSSN();

		if (votes > mostVotes) {
			mostVotes = votes;
			SSN = ssn;
		}

		temp = temp->getLink();	
	}

	return SSN; 
}

bool CandidateList::searchCandidate(int social) const 
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
		return 0;
	}

	Node* temp = first;

	while (temp != nullptr) {
		int ssn = temp->getCandidate().getSSN();

		if (ssn == social) {
			return true;
		}

		temp = temp->getLink();
	}

	std::cout << "=> SSN not in list." << std::endl;
	return false;
}

void CandidateList::printCandidateName(int social) const 
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
	}

	Node* temp = first;
	bool flag = false;

	while (temp != nullptr && !flag) {
		int ssn = temp->getCandidate().getSSN();

		if (ssn == social) {
			temp->getCandidate().printName();
			flag = true;
		}

		temp = temp->getLink();
	}

	if (!flag) {
		std::cout << "=> SSN not in list." << std::endl;
	}
}

void CandidateList::printAllCandidates() const
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
	}

	Node* temp = first;

	while (temp != nullptr) {
		temp->getCandidate().printCandidateInfo();
		temp = temp->getLink();
	}
}

void CandidateList::printCandidateCampusVotes(int social, int div) const
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
	}

	Node* temp = first;

	while (temp != nullptr) {
		int ssn = temp->getCandidate().getSSN();

		if (ssn == social) {
			std::cout << temp->getCandidate().getVotesByCampus(div) << std::endl;
		}

		temp = temp->getLink();
	}
}

void CandidateList::printCandidateTotalVotes(int social) const
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
	}

	Node* temp = first;

	while (temp != nullptr) {
		int ssn = temp->getCandidate().getSSN();

		if (ssn == social) {
			std::cout << temp->getCandidate().getNumVotes() << std::endl;
		}

		temp = temp->getLink();
	}
}

void CandidateList::printFinalResults() const
{
	if (count == 0) {
		std::cout << "=> List is empty." << std::endl;
	}

	Node* temp = first;

	while (temp != nullptr) {
		temp->getCandidate().printCandidateTotalVotes();
		temp = temp->getLink();
	}
}


void CandidateList::destroyList()
{
	Node* temp = first;

	while (temp != nullptr) {
		first = first->getLink();
		delete temp;
		temp = first;
	}

	count = 0;
}

CandidateList::~CandidateList()
{
	destroyList();
}