#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here




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









#endif
