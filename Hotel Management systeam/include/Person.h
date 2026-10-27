#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;
class Person
{
private:
    int id;
    string name;
    string phone;
    string address;
public:
    void setname()
    {
        this->name=name;
    }
    void setid()
    {
        this->id=id;
    }
    void setphone()
    {
        this->phone=phone;
    }
    void setaddress()
    {
        this->address=address;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    string getphone()
    {
        return phone;
    }
    string getaddress()
    {
        return address;
    }
    void print()
    {
        cout<<"the id is:"<<id<<endl;
        cout<<"the name is:"<<name<<endl;
        cout<<"the phone:"<<phone<<endl;
        cout<<"the address:"<<address<<endl;
    }
    void information()
    {
        cout<<"please enter id"<<endl;
        cin>>id;
        cout<<"please enter name"<<endl;
        cin>>name;
        cout<<"please enter phone"<<endl;
        cin>>phone;
        cout<<"please enter address"<<endl;
        cin>>address;
    }
};


#endif // PERSON_H
