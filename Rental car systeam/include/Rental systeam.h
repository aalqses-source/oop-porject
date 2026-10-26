
#ifndef RENTAL_SYSTEM_H
#define RENTAL_SYSTEM_H
#include<Car.h>
#include<Customer.h>
#include<iostream>
using namespace std;

class RentalSystem
{
private:

    Car cars[500];
    Customer customers[1000];
    int carCounter=0;
    int customerscounter=0;

public:
    void addCar()
    {
        cars[carCounter].informations();
        carCounter++;
    }

    void printCars()
    {
        for(int i=0; i<carCounter; i++)
        {
            cars[i].print();
            cout<<endl;
        }
    }

    void deleteCar()
    {
        cout<<"Please Enter Car ID To Delete: "<<endl;
        int id;
        cin>>id;

        int i;
        for(i=0; i<carCounter; i++)
        {
            if(cars[i].getID()==id)
            {
                cars[i]=cars[carCounter-1];
                carCounter--;
                cout<<"The Car Is Deleted Successfully"<<endl;
                return;
            }
        }

        if(i==carCounter)
        {
            cout<<"The Car Not Found"<<endl;
        }
    }

    void SearchCar()
    {
        cout<<"Please Enter Car ID To Search: "<<endl;
        int id;
        cin>>id;

        int i;
        for(i=0; i<carCounter; i++)
        {
            if(cars[i].getID()==id)
            {
                cars[i].print();
                return;
            }
        }

        if(i==carCounter)
        {
            cout<<"The Car Not Found"<<endl;
        }
    }

    void editCar()
    {
        cout<<"Please Enter Car ID To Edit: "<<endl;
        int id;
        cin>>id;

        int i;
        for(i=0; i<carCounter; i++)
        {
            if(cars[i].getID()==id)
            {
                cars[i].informations();
                return;
            }
        }

        if(i==carCounter)
        {
            cout<<"The Car Not Found"<<endl;
        }
    }

    void addCustomer()
    {
        customers[customerscounter].information();
        customerscounter++;
    }

    void printCustomers()
    {
        for(int i=0; i<customerscounter; i++)
        {
            customers[i].print();
            cout<<endl;
        }
    }

    void deleteCustomers()
    {
        cout<<"Please Enter Customers ID To Delete: "<<endl;
        int id;
        cin>>id;

        int i;
        for(int i=0; i<customerscounter; i++)
        {
            if(customers[i].getid()==id)
            {
                customers[i]=customers[customerscounter-1];
                customerscounter--;
                cout<<"The Customers Is Deleted Successfully"<<endl;
                return;
            }
        }

        if(i==customerscounter)
        {
            cout<<"The Customers Not Found"<<endl;
        }
    }

    void SearchCustomer()
    {
        cout<<"Please Enter Customers ID To Search: "<<endl;
        int id;
        cin>>id;

        int i;
        for(i=0; i<customerscounter; i++)
        {
            if(customers[i].getid()==id)
            {
                customers[i].print();
                return;
            }
        }

        if(i==customerscounter)
        {
            cout<<"The Customers Not Found"<<endl;
        }
    }

    void editCustomers()
    {
        cout<<"Please Enter Customers ID To Edit: "<<endl;
        int id;
        cin>>id;

        int i;
        for(i=0; i<customerscounter; i++)
        {
            if(customers[i].getid()==id)
            {
                customers[i].information();
                return;
            }
        }

        if(i==customerscounter)
        {
            cout<<"The Customers Not Found"<<endl;
        }
    }
};

#endif
