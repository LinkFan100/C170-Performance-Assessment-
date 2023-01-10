#include <iostream>
#include "Roster.h"


int main()
{

    cout << "Course Title: Scripting and Programming - Applications - C867 " << endl;
    cout << "Programming Language: C++" << endl;
    cout << "Student ID: 010396391" << endl;
    cout << "Name: Lafyette Russell" << endl;
    cout << endl;



    Roster classRoster;
    

    classRoster.printAll();
    classRoster.printInvalidEmails();


    cout << endl << "Average Days" << endl;
    for (int i = 0; i < classRoster.rs; i++) {

        string studentID = classRoster.classRosterArray[i]->GetStudentID();

        classRoster.printAverageDaysInCourse(studentID);
    }



    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");



    return 0;
}
