#ifndef HOTELSYSTEAM_H
#define HOTELSYSTEAM_H
#include<Person.h>
#include<Room.h>
#include<Guest.h>
#include<Employe.h>
#include<Reservation.h>
#include<iostream>
using namespace std;
class HotelSysteam
{
private:
    Room rooms[1000];
    Guest guests[100];
    Employe employees[100];
    Reservation reservations[100];
    int roomscounter=0;
    int guestscounter=0;
    int employeescounter=0;
    int reservationscounter=0;
public:
    void addroom()
    {
        rooms[roomscounter].information();
        roomscounter++;
    }
    void printroom()
    {
        for(int i=0; i<roomscounter; i++)
        {
            rooms[i].print();
            cout<<endl;
        }
    }
    void deleteroom()
    {
        cout<<"Please Enter Room ID To Delete:"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<roomscounter; i++)
        {
            if(rooms[i].getid()==id)
            {
                rooms[i]=rooms[roomscounter-1];
                roomscounter--;
                cout<<"The Room Is Deleted Successfully"<<endl;
                return;
            }
        }
        if(i==roomscounter)
        {
            cout<<"The Room Not Found"<<endl;
        }
    }
    void searchroom()
    {
        cout<<"Please Enter Room ID To Search: "<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<roomscounter; i++)
        {
            if(rooms[i].getid()==id)
            {
                rooms[i].print();
                return;
            }
        }
        if(i==roomscounter)
        {
            cout<<"The Room Not Found"<<endl;
        }
    }
    void editrooms()
    {
        cout<<"Please Enter Car ID To Edit: "<<endl;
        int id;
        cin>>id;
        int i;
        for( i=0; i<roomscounter; i++)
        {
            if(rooms[i].getid()==id)
            {
                rooms[i].information();
                return;
            }
        }

        if(i==roomscounter)
        {
            cout<<"The Room Not Found"<<endl;
        }
    }
    void addrguest()
    {
        guests[guestscounter].information();
        guestscounter++;
    }
    void printguest()
    {
        for(int i=0; i<guestscounter; i++)
        {
            guests[i].print();
            cout<<endl;
        }
    }
    void deleteguest()
    {
        cout<<"Please Enter Guest ID To Delete:"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<guestscounter; i++)
        {
            if(guests[i].getid()==id)
            {
                guests[i]=guests[guestscounter-1];
                guestscounter--;
                cout<<"The Guest Is Deleted Successfully"<<endl;
                return;
            }
        }
        if(i==guestscounter)
        {
            cout<<"The Guest Not Found"<<endl;
        }
    }
    void searchgest()
    {
        cout<<"Please Enter Guest ID To Search: "<<endl;
        int id;
        cin>>id;
        int i;
        for( i=0; i<guestscounter; i++)
        {
            if(guests[i].getid()==id)
            {
                guests[i].print();
                return;
            }
        }
        if(i==guestscounter)
        {
            cout<<"The guest Not Found"<<endl;
        }
    }
    void editguest()
    {
        cout<<"Please Enter Guest ID To Edit: "<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<guestscounter; i++)
        {
            if(guests[i].getid()==id)
            {
                guests[i].information();
                return;
            }
        }

        if(i==guestscounter)
        {
            cout<<"The Guest Not Found"<<endl;
        }
    }
    void addEmploye()
    {
        employees[employeescounter].information();
        employeescounter++;
    }
    void printEmploye()
    {
        for(int i=0; i<guestscounter; i++)
        {
            employees[i].print();
            cout<<endl;
        }
    }
    void deleteEmploye()
    {
        cout<<"Please Enter Employe ID To Delete:"<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<employeescounter; i++)
        {
            if(employees[i].getid()==id)
            {
                employees[i]=employees[employeescounter-1];
                employeescounter--;
                cout<<"The Employe Is Deleted Successfully"<<endl;
                return;
            }
        }
        if(i==employeescounter)
        {
            cout<<"The Employe Not Found"<<endl;
        }
    }
    void searchEmploye()
    {
        cout<<"Please Enter Employe ID To Search: "<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<employeescounter; i++)
        {
            if(employees[i].getid()==id)
            {
                employees[i].print();
                return;
            }
        }
        if(i==employeescounter)
        {
            cout<<"The Employe Not Found"<<endl;
        }
    }
    void editEmploye()
    {
        cout<<"Please Enter Employe ID To Edit: "<<endl;
        int id;
        cin>>id;
        int i;
        for( i=0; i<employeescounter; i++)
        {
            if(employees[i].getid()==id)
            {
                employees[i].information();
                return;
            }
        }

        if(i=employeescounter)
        {
            cout<<"The Employe Not Found"<<endl;
        }
    }
    void addReservation()
    {
        reservations[reservationscounter].information();
        reservationscounter++;
    }
    void printReservation()
    {
        for(int i=0; i<reservationscounter; i++)
        {
            reservations[i].print();
            cout<<endl;
        }
    }
    void deleteReservation()
    {
        cout<<"Please Enter Reservation ID To Delete:"<<endl;
        int id;
        cin>>id;
        int i;
        for( i=0; i<reservationscounter; i++)
        {
            if(reservations[i].getreservationId()==id)
            {
                reservations[i]=reservations[reservationscounter-1];
                reservationscounter--;
                cout<<"The Reservation Is Deleted Successfully"<<endl;
                return;
            }
        }
        if(i==reservationscounter)
        {
            cout<<"The Reservation Not Found"<<endl;
        }
    }
    void searchReservation()
    {
        cout<<"Please Enter Reservation ID To Search: "<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<reservationscounter; i++)
        {
            if(reservations[i].getreservationId()==id)
            {
                reservations[i].print();
                return;
            }
        }
        if(i==reservationscounter)
        {
            cout<<"The Reservation Not Found"<<endl;
        }
    }
    void editReservation()
    {
        cout<<"Please Enter Reservation ID To Edit: "<<endl;
        int id;
        cin>>id;
        int i;
        for(i=0; i<reservationscounter; i++)
        {
            if(reservations[i].getreservationId()==id)
            {
                reservations[i].information();
                return;
            }
        }

        if(i==reservationscounter)
        {
            cout<<"The Reservation Not Found"<<endl;
        }
    }
};

#endif // HOTELSYSTEAM_H
