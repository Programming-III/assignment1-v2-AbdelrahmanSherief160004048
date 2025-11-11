#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here

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










#endif
