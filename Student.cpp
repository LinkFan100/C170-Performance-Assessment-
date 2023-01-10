#include "student.h"
#include "degree.h"
#include <iostream> 

using namespace std;


Student::Student(string SID, string FN, string LN, string Email, int age, int* daysneeded, DegreeProgram DPS)
{
	StudentID = SID;
	FirstName = FN;
	LastName = LN;
	EmailAddress = Email;
	Age = age;
	DaysNeeded[0] = daysneeded[0];
	DaysNeeded[1] = daysneeded[1];
	DaysNeeded[2] = daysneeded[2];
	degreeProgram = DPS;
}

string Student::GetStudentID()
{
	return StudentID;
}

string Student::GetFirstName()
{
	return FirstName;
}

string Student::GetLastName()
{
	return LastName;
}

string Student::GetEmailAddress()
{
	return EmailAddress;
}

int Student::GetAge()
{
	return Age;
}

int* Student::GetDaysNeeded()
{
	return DaysNeeded;
}

DegreeProgram Student::GetDegreeProgram()
{
	return degreeProgram;
}

void Student::SetStudentID(string studentID)
{
	StudentID = studentID;
}

void Student::SetFirstName(string FN)
{
	FirstName = FN;
}

void Student::SetLastName(string LN)
{
	LastName = LN;
}

void Student::SetEmailAddress(string Email)
{
	EmailAddress = Email;
}

void Student::SetAge(int age)
{
	Age = age;
}

void Student::SetDaysNeeded(int DaysNumber, int DaysInput)
{
	DaysNeeded[DaysNumber - 1] = DaysInput;
}

void Student::SetDegreeProgram(DegreeProgram DPS)
{
	degreeProgram = DPS;
}

void Student::print()
{
	DegreeProgram degreeProgram = GetDegreeProgram();
	string DPI;

	if (degreeProgram == SECURITY) {
		DPI = "SECURITY";
	}
	else if (degreeProgram == NETWORK) {
		DPI = "NETWORK";
	}
	else if (degreeProgram == SOFTWARE) {
		DPI = "SOFTWARE";
	}
	cout << GetStudentID() << " ";
	cout << GetFirstName() << " ";
	cout << GetLastName() << " ";
	cout << GetEmailAddress() << " ";
	cout << GetAge() << " ";
	cout << DaysNeeded[0] << "," << DaysNeeded[1] << "," << DaysNeeded[2] << " ";
	cout << DPI << endl;

}
