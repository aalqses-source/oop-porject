#ifndef CUST0MER_H
#define CUST0MER_H
#include<iostream>
using namespace std;
class Customer
{
private:
    int id;
    string name;
    string phoneNumber;
    string address;
public:
    void setid(int id)
    {
        this->id=id;
    }
    void setname(int name)
    {
        this->name=name;
    }
    void setphoneNumber(int phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setaddress(int address)
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
    string getphoneNumber()
    {
        return phoneNumber;
    }
    string getaddress()
    {
        return address;
    }
    void print()
    {
        cout<<"the Customer id:"<<id<<endl;
        cout<<"the Customer name:"<<name<<endl;
        cout<<"the Customer phoneNumber:"<<phoneNumber<<endl;
        cout<<"the Customer address:"<<address<<endl;
    }
    void information()
    {
        cout<<"please enter Customer id:"<<endl;
        cin>>id;
        cout<<"please enter Customer name:"<<endl;
        cin>>name;
        cout<<"please enter Customer phoneNumber:"<<endl;
        cin>>phoneNumber;
        cout<<"please enter Customer address:"<<endl;
        cin>>address;

    }







};

#endif // CUST0MER_H
