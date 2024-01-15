#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include <string>
#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType {
	private:
		int votes;
		int campuses[NUM_OF_CAMPUSES];
	public:
		CandidateType();
		
		void updateVotesByCampus(int campNum, int numVotes);
		
		int getNumVotes() const;
		int getVotesByCampus(int campNum) const;

		void printCandidateInfo() const;
		void printCandidateTotalVotes() const;
		void printCandidateCampusVotes(int campNum) const;
};

#endif