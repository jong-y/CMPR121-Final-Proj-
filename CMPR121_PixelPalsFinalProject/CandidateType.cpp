#include "CandidateType.h"
#include <string>
#include <iostream>

CandidateType::CandidateType() {
	votes = 0;
	for (int i = 0; i < NUM_OF_CAMPUSES; i++) {
		campuses[i] = 0;
	}
}

void CandidateType::updateVotesByCampus(int campNum, int numVotes)
{
    switch (campNum)
    {
    case 1:
        campuses[0] = numVotes;
        break;
    case 2:
        campuses[1] = numVotes;
        break;
    case 3:
        campuses[2] = numVotes;
        break;
    case 4:
        campuses[3] = numVotes;
        break;

    default:
        std::cout << "Please check if the campus number is valid. Select from 1-4." << std::endl;

    }
    
    votes = 0;
    for (int num : campuses) {
        votes += num;
    }
}

int CandidateType::getNumVotes() const
{
    return votes;
}

int CandidateType::getVotesByCampus(int campNum) const
{
    return (campuses[campNum-1]);
}

void CandidateType::printCandidateInfo() const
{
    PersonType::printSSN();
    std::cout << " - ";
    PersonType::printName();
}

void CandidateType::printCandidateTotalVotes() const
{
    PersonType::printName();
    std::cout << "  => Total Votes (All Campuses) : " << votes << std::endl;
}

void CandidateType::printCandidateCampusVotes(int campNum) const
{
    PersonType::printName();
    std::cout << "  => Campus " << campNum << " Total Votes : " << campuses[campNum - 1] << std::endl;
}