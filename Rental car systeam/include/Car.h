#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;
class Car
{
private:
    int id;
    string brand;
    string model;
    int year;
    int pricePerDay;
    string isAvailable;
public:
    void setID(int id)
    {
        this->id=id;
    }
    void setBrand(string brand)
    {
        this->brand=brand;
    }
    void setModel(string model)
    {
        this->model=model;
    }
    void setYear(int year)
    {
        this->year=year;
    }
    void setPricePerDay(int pricePerDay)
    {
        this->pricePerDay=pricePerDay;
    }
    void setIsAvalibale(bool isAvailable)
    {
        this->isAvailable=isAvailable;
    }
    int getID()
    {
        return id;
    }
    string getBrand()
    {
        return brand;
    }
    string getModel()
    {
        return model;
    }
    int getYear()
    {
        return year;
    }
    int getPricePerDay()
    {
        return pricePerDay;
    }
    string getIsAvailable()
    {
        return isAvailable;
    }
    void print()
    {
        cout<<"The Car ID Is : "<<id<<endl;
        cout<<"The Car Model Is : "<<model<<endl;
        cout<<"The Car Brand Is : "<<brand<<endl;
        cout<<"The Car Year Is : "<<year<<endl;
        cout<<"The Car Price Per Day Is : "<<pricePerDay<<endl;
        cout<<"The Car Available Is : "<<isAvailable<<endl;
    }
    void informations()
    {
        cout<<"Please Enter Car ID : "<<endl;
        cin>>id;
        cout<<"Please Enter Car Model : "<<endl;
        cin>>model;
        cout<<"Please Enter Car Brand : "<<endl;
        cin>>brand;
        cout<<"Please Enter Car Year : "<<endl;
        cin>>year;
        cout<<"Please Enter Car Price Per Day : "<<endl;
        cin>>pricePerDay;
        cout<<"Car Is Available? : "<<endl;
        cin>>isAvailable;
    }
};

#endif // CAR_H
