#include <iostream>
using namespace std;
#include<string>
#ifndef person_H
#define person_H
#include "person.H"
#include "student.H"
#include "intructor.H"
#include "course.H"
class person
{
private :
       string name;
       int id;
public :
    person(string n , int i);
    display();
    string getName();
    int getId();
};
person ::person(string n , int i)
{

    this.name->n;
    this.id=i;
}
string person ::getName()
{
    return name;
}
int person :: getId()
{

    return id;
}

void person :: display(name , id)
{

    cout<< "persons name" << name << endl;
    cout<< "persons id" << id << endl;
}


class student
{
private :
    int yearLevel;
    string major;
public :
    void student(int y , string m)
    int getYearLevel();
    string getMajor();
    display();

};
void student :: student(int y , string m)
{

    this->yearLevel = y;
    this->major=m
}
int student :: getYearLevel()
{

    return yearLevl;
}
string student :: getMajor()
{

    return major;
}
void student :: display()
{

    cout << "yearlevel is : " << yearLevel << endl;
    cout << "major is " << major << endl;
}



class instructor{
private:
    string department;
    int experienceYears;
public :
    void instuctor(string d , int e)
    string getDepartment();
    int getExperienceYears();
    display();
};
void instructor :: intsructor(string d , int e)
{

    this->department = d;
    this experienceYears=e;
}
string getDepartment()
{

    return department;

}
int getExperienceYears()
{

    return experienceYears;
}
void instructor :: display()
{

    cout << "department is :" << department << endl;
    cout << "experienceYears is :" << experienceYears << endl;
}



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


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
