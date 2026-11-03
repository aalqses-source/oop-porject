#ifndef SCHOOL_H
#define SCHOOL_H
#include<Student.h>
#include<Teacher.h>
#include<Staff.h>
#include<Course.h>
#include<Classroom.h>
#include<iostream>
using namespace std;
class school
{
private:
    string schoolname;
    string address ;
    string principalname;
    Student Student[1000];
    Teacher Teacher[50];
    Staff Staff[50];
    Course Course[8];
    Classroom Classroom[50];
    int Studentcounter=0;
    int Teachercounter=0;
    int Staffcounter=0;
    int Coursecounter=0;
    int Classroomcounter=0;
public:
    void addstudent()
    {
        Student[Studentcounter].information();
        Studentcounter++;
    }
    void addteacher()
    {
        Teacher[Teachercounter].information();
        Teachercounter++;
    }
    void addstaff()
    {
        Staff[Staffcounter].information();
        Staffcounter++;
    }
    void addcourse()
    {
        Course[Coursecounter].information();
        Coursecounter++;
    }
    void addsclassroom()
    {
        Classroom[Classroomcounter].information();
        Classroomcounter++;
    }
    void printstudent()
    {
        for(int i=0; i<Studentcounter; i++)
        {
            Student[i].print();
            cout<<endl;
        }
    }
    void printteacher()
    {
        for(int i=0; i<Teachercounter; i++)
        {
            Teacher[i].print();
            cout<<endl;
        }
    }
    void printstaff()
    {
        for(int i=0; i<Staffcounter; i++)
        {
            Staff[i].print();
            cout<<endl;
        }
    }
    void printcourse()
    {
        for(int i=0; i<Coursecounter; i++)
        {
            Course[i].print();
            cout<<endl;
        }
    }
    void printclassroom()
    {
        for(int i=0; i<Classroomcounter; i++)
        {
            Classroom[i].print();
            cout<<endl;
        }
    }
};

#endif // SCHOOL_H
