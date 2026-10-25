#ifndef TEACHER_H
#define TEACHER_H
#include<Person.h>
#include<iostream>
using namespace std;
class Teacher:public Person
{
private:
    string subjectSpecialization;
    float salary;
public:
    Teacher()
    {
        subjectSpecialization="no subject";
        salary=0;
    }
    Teacher(string subjectSpecialization,float salary)
    {
        this->subjectSpecialization=subjectSpecialization;
        this->salary=salary;
    }
    void setsubjectSpecialization(string subjectSpecialization)
    {
        this->subjectSpecialization=subjectSpecialization;
    }
    void setsalary(float salary)
    {
        this-> salary=salary;
    }
    string getsubjectSpecialization()
    {
        return subjectSpecialization;
    }
    float getsalarY()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"The  subjectSpecialization:"<<subjectSpecialization<<endl;
        cout<<"The  salary :"<<salary<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"please enter subjectSpecialization:"<<endl;
        cin>>subjectSpecialization;
        cout<<"please enter salary:"<<endl;
        cin>>salary;
    }
};

#endif // TEACHER_H
