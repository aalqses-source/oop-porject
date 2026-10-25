#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class Person
{


private:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
    int id;
public:
    Person()
    {
        name="no name";
        age=1;
        gender="no gender";
        address="no address";
        phoneNumber="no phoneNumber";
        email="no email";
        id=1;
    }
    Person(string name,int age,string gender,string address,string phoneNumber,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this-> address=address;
        this->  phoneNumber=phoneNumber;
        this-> email=email;
        this->id=id;
    }
    void setname(string name)
    {
        this->  name=name;
    }
    void setage(int age)
    {
        this-> age=age;
    }
    void setgender(string gender)
    {
        this->gender=gender;
    }
    void setaddress(string address)
    {
        this-> address=address;
    }
    void setphoneNumber(string phoneNumber)
    {
        this-> phoneNumber=phoneNumber;
    }
    void setemail(string email)
    {
        this-> email=email;
    }
    void setid(int i)
    {
        this->id=id;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    string getgender()
    {
        return gender;
    }
    string getaddress()
    {
        return address;
    }
    string  getphoneNumber()
    {
        return  phoneNumber;
    }
    string getemail()
    {
        return email;
    }
    int getid()
    {
        return id;
    }
    void print()
    {
        cout<<"the name is:"<<name<<endl;
        cout<<"the gender is:"<<gender<<endl;
        cout<<"the age is:"<<age<<endl;
        cout<<"the address is:"<<address<<endl;
        cout<<"the phonenumber is:"<< phoneNumber<<endl;
        cout<<"the email is:"<<email<<endl;
        cout<<"the id is:"<<id<<endl;
    }
    void information()
    {
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your gender:"<<endl;
        cin>>gender;
        cout<<"enter your age:"<<endl;
        cin>>age;
        cout<<"enter your address:"<<endl;
        cin>>address;
        cout<<"enter your phonenumber:"<<endl;
        cin>>phoneNumber;
        cout<<"enter your email:"<<endl;
        cin>>email;
        cout<<"enter your id:"<<endl;
        cin>>id;
    }
};

#endif // PERSON_H
