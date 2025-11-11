#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here



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









#endif
