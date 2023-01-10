#include "Roster.h"
#include <sstream>
#include <string>
#include <vector>

Roster::Roster()
{
	Student* classRosterArray[5];

	string StudentID;
	string FirstName;
	string LastName;
	string EmailAddress;
	int Age;
	int DaysNeeded1;
	int DaysNeeded2;
	int DaysNeeded3;
	DegreeProgram degreeProgram;


	const string studentData[] =
	{
	  "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Lafyette,Russell,lrus195@wgu.edu,29,30,20,12,SOFTWARE"
	};

    //Loop to parse string and call add function
	for (int i = 0; i < 5; i++)
	{
        string AtS;
        string DPS;
        string day1;
        string day2;
        string day3;
		string Sdata = studentData[i];
		stringstream s_stream(Sdata);

        getline(s_stream, StudentID, ',');
        getline(s_stream, FirstName, ',');
        getline(s_stream, LastName, ',');
        getline(s_stream, EmailAddress, ',');
        getline(s_stream, AtS, ',');
        Age = stoi(AtS);
        getline(s_stream, day1, ',');
        DaysNeeded1 = stoi(day1);
        getline(s_stream, day2, ',');
        DaysNeeded2 = stoi(day2);
        getline(s_stream, day3, ',');
        DaysNeeded3 = stoi(day3);
        getline(s_stream, DPS, ',');

        if (DPS == "SECURITY") {
            degreeProgram = SECURITY;
        }
        else if (DPS == "NETWORK") {
            degreeProgram = NETWORK;
        }
        else if (DPS == "SOFTWARE") {
            degreeProgram = SOFTWARE;
        }

        add(StudentID, FirstName, LastName, EmailAddress, Age, DaysNeeded1, DaysNeeded2, DaysNeeded3, degreeProgram, i);

    }
    cout << endl;
}

void Roster::add(string StudentID, string FirstName, string LastName, string EmailAddress, int AgeI, int DN1, int DN2, int DN3, DegreeProgram DP, int Index)
{
    int daysArray[] = { DN1, DN2, DN3 };
    classRosterArray[Index] = new Student(StudentID, FirstName, LastName, EmailAddress, AgeI, daysArray, DP);
}

void Roster::remove(string StudentID)
{
    cout << endl << "Removing Student" << endl;
    for (int i = 0; i < rs; i++) {

        if (classRosterArray[i] != 0) {

            string SID = classRosterArray[i]->GetStudentID();

            if (StudentID == SID) {
                classRosterArray[i] = 0;
            }


        }

        else {
            cout << "No Such Student Exist" << endl;
        }

    }
    cout << endl;
}

void Roster::printAll()
{
    for (int i = 0; i < rs; i++) {

        if (classRosterArray[i] != nullptr || classRosterArray[i] != 0) {
            classRosterArray[i]->print();

        }

    }

    cout << endl;

}

void Roster::printAverageDaysInCourse(string StudentID)
{

    for (int i = 0; i < rs; i++) {
        string SID = classRosterArray[i]->GetStudentID();

        if (StudentID == SID) {

            int CLen1 = classRosterArray[i]->GetDaysNeeded()[0];
            int CLen2 = classRosterArray[i]->GetDaysNeeded()[1];
            int CLen3 = classRosterArray[i]->GetDaysNeeded()[2];

            cout << classRosterArray[i]->GetFirstName() << " Average Days Are: " << (CLen1 + CLen2 + CLen3) / 3;

        }

    }
    cout << endl;
}

void Roster::printInvalidEmails()
{
    cout << "Invalid Email's" << endl;
    for (int i = 0; i < rs; i++) {
        string email = classRosterArray[i]->GetEmailAddress();

        if (email.find(' ') != string::npos) {
            cout << email << " --> Spaces are invalid " << endl;
        }

        if (email.find('.') != string::npos) {
 
        }
        else {
            cout << email << " --> '.' is required " << endl;
        };

        if (email.find('@') != string::npos) {
         
        }
        else {
            cout << email << " --> No '@' is present " << endl;
        }

    }
    cout << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
    cout << endl << "Printing by Degree" << endl;
    string DPS;


    if (degreeProgram == SECURITY) {
        DPS = "SECURITY";
    }
    else if (degreeProgram == NETWORK) {
        DPS = "NETWORK";
    }
    else if (degreeProgram == SOFTWARE) {
        DPS = "SOFTWARE";
    }


    for (int i = 0; i < rs; i++) {

        DegreeProgram DP = classRosterArray[i]->GetDegreeProgram();

        if (classRosterArray[i] != 0) {

            if (degreeProgram == DP) {
                classRosterArray[i]->print();
            }

        }

    }

    cout << endl;
}

Roster::~Roster()
{
}
