# Election Results Software Application

## Description

This application will use the data from student votes to determine who is the next student government president. 
This program is designed to output a precise amount of votes for each candidate that they get from each college as well as calculate the total votes to find who is the winner from the election. 
This application will securely manage the voting process, ensuring accuracy, transparency, and integrity throughout.

We use the advantage of classes to minimize the energy to run the program while maximizing the ability of the program to perform each task to its limit. 
By using implementation and declaration classes, we were able to make the code more clean and organize for later programmers to work on as well.
We utilize the switch function to make a menu for the ease of selecting your choices so that there will be no confusion on how to use this application.

## Prerequisites

• Hardware Requirements
The versatility of this application extends to various operating systems, making it compatible with Mac, Windows, and Linux systems that have Visual Studio Code installed. 
However, even if Visual Studio Code is not available on your system, you can still utilize the application seamlessly through the GDB online Debugger, which only requires an internet connection.

• Software Requirements
Our application will have some requirements that you must have to run the program.
First, you need a text file containing a list of candidates name, numbers of votes from each college and social security number inorder for the program to pull those data from. 
Second, you need to need all of the classes and a main file. There are 1 main.cpp, 4 declaration file (CandidateType.h, PersonType.h, CandidateList.h, Node.h), 3 implementation file (CandidateType.cpp, PersonType.cpp, CandidateList.cpp), 1 text file (Data.txt). 

In the PersonType file: there are setPersonInfo; getFirstName; getLastName; getSSN; printName; printPersonInfo; printSSN. 

In the CandidateType file: there are updateVotesByCampus ; getNumVotes; getVotesByCampus; printCandidateInfo; printCandidateTotalVotes; printCandidateCampusVotes. 

In the CandidateList file: there are addCandidate; getWinner; searchCandidate; printCandidateName; printAllCandidates; printCandidateCampusVotes; printCandidateTotalVotes; printFinalResults. 
	
In the Node file, there are getLink; getCandidate; setCandidate; setLink.

To achieve the desired results, it is important for the user to input the correct number corresponding to their desired action. 
If an incorrect or invalid number is entered, the program will display a message indicating that the input is not valid and prompt the user to enter a valid selection. This ensures that the program continues to ask for a valid input until it is provided.

The program has been carefully designed to prioritize reliability and scalability. It guarantees that access to private data is only granted through the program's public interface, ensuring security and confidentiality.
Moreover, the program has been developed with ample storage capacity, allowing for easy and efficient storage and addition of data. This ensures that all necessary information can be accommodated without any inconvenience or limitations.


## Usage

Provide examples and explanations of how to use your project. Include code snippets, screenshots, or any relevant information.

```bash
npm start
```

## Contributing

Explain how others can contribute to your project. Include guidelines for submitting pull requests, reporting issues, and any coding standards.

## Credits

Give credit to the group members who contributed to the project. Include their GitHub usernames and a brief description of their contributions.

- https://github.com/sealarith
- https://github.com/3ileen014

## License

Copyright (c) 2023 Johnny Vo and others

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.



