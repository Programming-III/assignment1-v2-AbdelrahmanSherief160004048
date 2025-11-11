#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class course
{

private :
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public :
    addStudents(const Student& s);
    displayCourseInfo();

};
void course :: addStudents(const Student& s)
{
    Students = Students + s;

}
void course :: displayCourseInfo()
{
    cout << "course code is :" << courseCode << endl;
    cout << "coursename is: " << courseName << endl;
    cout << "maxstudents is :" << maxStudents << endl;
    cout << "current students :" << currentStudents << endl;
}













#endif
