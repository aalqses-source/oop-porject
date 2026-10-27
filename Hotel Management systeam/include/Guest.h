#ifndef GUEST_H
#define GUEST_H


class Guest:public Person
{
private:
    string Nationalid;
    int NumberofNight;
public:
    void setNationalid(int Nationalid)
    {
        this->Nationalid=Nationalid;
    }
    void setNumberofNight(int NumberofNight)
    {
        this->NumberofNight=NumberofNight;
    }
    string getNationalid()
    {
        return Nationalid;
    }
    int getNumberofNight()
    {
        return NumberofNight;
    }
    void print()
    {
        Person::print();
        cout<<"the Nationalid is :"<<Nationalid<<endl;
        cout<<"the NumberofNight is:"<<NumberofNight<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"please enter Nationalid is:"<<endl;
        cin>> Nationalid;
        cout<<"please enter Numberofnight is:"<<endl;
        cin>>NumberofNight;
    }


};

#endif // GUEST_H
