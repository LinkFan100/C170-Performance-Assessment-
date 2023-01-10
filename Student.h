#include <iostream>
#include <string>
#include "Degree.h"


using namespace std;


class Student
{
private:
	string StudentID;
	string FirstName;
	string LastName;
	string EmailAddress;
	int Age;
	int DaysNeeded[3];
	DegreeProgram degreeProgram;

public:
	//constructor
	Student(string, string, string, string, int, int*, DegreeProgram);

	//Getters
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetAge();
	int* GetDaysNeeded();
	DegreeProgram GetDegreeProgram();

	//Setters
	void SetStudentID(string);
	void SetFirstName(string);
	void SetLastName(string);
	void SetEmailAddress(string);
	void SetAge(int);
	void SetDaysNeeded(int, int);
	void SetDegreeProgram(DegreeProgram);

	void print();




};

