#include <iostream>
#include "Student.h"

using namespace std;

class Roster
{
public:
    //array pointer
	Student* classRosterArray[5];

    //roster size
    int rs = 5;
    
    Roster();
    
    //Functions
    void add(string StudentID, string FirstName, string LastName, string EmailAddress, int Age, int DaysNeeded1, int DaysNeeded2, int DaysNeeded3, DegreeProgram degreeProgram, int Index);
    void remove(string StudentID);
    void printAll();
    void printAverageDaysInCourse(string StudentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

    //Destructor
    ~Roster();


};

