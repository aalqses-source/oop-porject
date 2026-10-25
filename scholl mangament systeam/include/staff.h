#ifndef STAFF_H
#define STAFF_H
#include<Staff.h>
#include<iostream>
using namespace std;
class Staff:public Person
{
private:
    string role;
    float salary;
public:
    Staff()
    {
        role="no role";
        salary=0;
    }
    Staff(string role,float salary)
    {
        this->role=role;
        this-> salary=salary;
    }
    void setrole(string r)
    {
        this->role=role;
    }
    void setsalary(float a)
    {
        this->salary=salary;
    }
    string getrole()
    {
        return role;
    }
    float getsalary()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"the role is:"<<role<<endl;
        cout<<"the salary is:"<<salary<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"please enter role"<<endl;
        cin>>role;
        cout<<"please enter salary:"<<endl;
        cin>>salary;
    }
};
#endif // STAFF_H
