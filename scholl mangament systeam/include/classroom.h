#ifndef CLASSROOM_H
#define CLASSROOM_H
#include<iostream>
using namespace std;
class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    Car()
    {
        roomNumber=0;
        capacity=0;
    }
    car(int roomNumber,int capacity)
    {
        this-> roomNumber=roomNumber;
        this-> capacity=capacity;
    }
    void setroomNumber(int roomNumber)
    {
        this->  roomNumber=roomNumber;
    }
    void setcapacity(int capacity)
    {
        this-> capacity=capacity;
    }
    int getroomNumber()
    {
        return roomNumber;
    }
    int getcapacity()
    {
        return capacity;
    }
    void print()
    {
        cout<<"the capacity :"<<capacity<<endl;
        cout<<"the room number:"<<roomNumber<<endl;
    }
    void information()
    {
        cout<<"please enter the room number:"<<endl;
        cin>>roomNumber;
        cout<<" please enter the capacity :"<<endl;
        cin>>capacity;
    }
};

#endif // CLASSROOM_H
