#include <iostream>
#include<Student.h>
#include<Teacher.h>
#include<school.h>
using namespace std;
int main()
{
    school s;
    int x;
    do
    {
        cout<<"press 0 to exit"<<endl;
        cout<<"press 1 to add student"<<endl;
        cout<<"press 2 to add teacher"<<endl;
        cout<<"press 3 to add staff"<<endl;
        cout<<"press 4 to add course"<<endl;
        cout<<"press 5 to add classroom"<<endl;
        cout<<"press 6 to print all student"<<endl;
        cout<<"press 7 to print all teacher"<<endl;
        cout<<"press 8 to print all staff"<<endl;
        cout<<"press 9 to print all course"<<endl;
        cout<<"press 10 to print all classroom"<<endl;
        cin>>x;
        system("cls");
        switch(x)
        {
case 0:
            cout<<"the program end good bay"<<endl;
            break;
case 1:
            s.addstudent();
            break;
case 2:
            s.addteacher();
            break;
case 3:
            s.addstaff();
            break;
case 4:
            s.addcourse();
            break;
case 5:
            s.addsclassroom();
            break;
case 6:
            s.printstudent();
            break;
case 7:
            s.printteacher();
            break;
case 8:
            s.printstaff();
            break;
case 9:
            s.printcourse();
            break;
case 10:
            s.printclassroom();
            break;
        default:
            cout<<"invalid input!! press number (0-10)"<<endl;
            break;
        }
    }
    while(x!=0);
    return 0;
}
