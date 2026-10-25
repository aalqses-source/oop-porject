#ifndef STUDENT_H
#define STUDENT_H
#include<Person.h>
#include<iostream>
using namespace std;
class Student:public Person
{
private:
    string gradelevel;
    float gpa;
public:
    Student()
    {
        gradelevel="no gradelevel";
        gpa=1;
    }
    student(string gradelevel,float gpa)
    {

        this-> gradelevel=gradelevel;
        this-> gpa=gpa;
    }
    void setgradelevel(string gradelevel)
    {
        this-> gradelevel=gradelevel;
    }
    void setgpa(float gpa)
    {
        this->gpa=gpa;
    }
    string getgreadlevel()
    {
        return gradelevel;
    }
    float getgpa()
    {
        return gpa;
    }
    void print()
    {
        Person::print();
        cout<<"The greadelevel: is"<<gradelevel<<endl;
        cout<<"The gpa is:"<<gpa<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"please enter greadelevel:";
        cin>>gradelevel;
        cout<<"please enter gpa:";
        cin>>gpa;
    }
};

#endif // STUDENT_H
