#ifndef EMPLOYE_H
#define EMPLOYE_H


class Employe:public Person
{
private:
    double salary;
    string position;
public:
    void setsalary(double salary)
    {
        this->salary=salary;
    }
    void setPosition(double position)
    {
        this->position=position;
    }
    double getsalary()
    {
        return salary;
    }
    string getposition()
    {
        return position;
    }
    void print()
    {
        Person::print();
        cout<<"the employe salary is:"<<salary<<endl;
        cout<<"the employe position is:"<<position<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"please enter employe salary:"<<endl;
        cin>>salary;
        cout<<"please enter employe position:"<<endl;
        cin>>position;
    }

};

#endif // EMPLOYE_H
