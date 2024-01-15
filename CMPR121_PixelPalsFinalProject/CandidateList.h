#pragma once
#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "Node.h"

class CandidateList {
private:
	Node* first;
	Node* last;
	int count;
public:
	CandidateList();
	
	void addCandidate(const CandidateType newCand);
	
	int getWinner() const;
	bool searchCandidate(int social) const;
	
	void printCandidateName(int social) const;
	void printAllCandidates() const;
	void printCandidateCampusVotes(int social, int div) const;
	void printCandidateTotalVotes(int social) const;
	void printFinalResults() const;
	
	void destroyList();
	~CandidateList();
};

#endif