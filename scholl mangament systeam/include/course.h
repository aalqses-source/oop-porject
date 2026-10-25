#ifndef COURSE_H
#define COURSE_H
#include<iostream>
using namespace std;
class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    car()
    {
        courseCode="no course code";
        courseName="no course name";
        teacherName="no teacher";
    }
    car(string courseCode,string courseName,string teacherName)
    {
        this-> courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;
    }
    void setcoursecode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setcourseName(string courseName)
    {
        this->courseName=courseName;
    }
    void setteacherName(string teacherName)
    {
        this-> teacherName=teacherName;
    }
    string getcourseCode()
    {
        return courseCode;
    }
    string getcourseName()
    {
        return courseName;
    }
    string getteacherName()
    {
        return teacherName;
    }
    void print()
    {
        cout<<"The coursecode is:"<<courseCode<<endl;
        cout<<"The coursename: is"<<courseName<<endl;
        cout<<"The teachername is:"<<teacherName<<endl;
    }
    void information()
    {
        cout<<"please enter coursecode:";
        cin>>courseCode;
        cout<<"please enter coursename:";
        cin>>courseName;
        cout<<"please enter teachername:";
        cin>>teacherName;
    }
};
#endif // COURSE_H
