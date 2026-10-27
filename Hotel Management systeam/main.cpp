#include <iostream>
#include <HotelSysteam.h>
using namespace std;

int main()
{
    HotelSysteam h ;
    int x ;
    do
    {
        cout <<endl ;
        cout<<"press 0 to exit "<<endl ;
        cout<<"press 1 to add Room "<<endl ;
        cout<<"press 2 to add Gest "<<endl ;
        cout<<"press 3 to add Employe"<<endl ;
        cout<<"press 4 to add Reservation"<<endl ;
        cout<<"press 5 to delete Room "<<endl ;
        cout<<"press 6 to delete Gest "<<endl ;
        cout<<"press 7 to delete Employe"<<endl ;
        cout<<"press 8 to delete  Reservation"<<endl;
        cout<<"press 9 to search Room "<<endl ;
        cout<<"press 10 to search Gest "<<endl ;
        cout<<"press 11 to search Employe"<<endl ;
        cout<<"press 12 to search Reservation"<<endl;
        cout<<"press 13 to edit Room "<<endl ;
        cout<<"press 14 to edit Gest "<<endl ;
        cout<<"press 15 to edit Employe"<<endl ;
        cout<<"press 16 to edit Reservation"<<endl;
        cout<<"press 17 to print allRoom "<<endl ;
        cout<<"press 18 to print allGest "<<endl ;
        cout<<"press 19 to print allEmploye"<<endl ;
        cout<<"press 20 to print allReservation"<<endl;
        cin>>x;
        system("cls");
        switch(x)
        {
        case 0:
            cout<<"The Program End**Good Bay"<<endl;
            break;
        case 1:
            h.addroom();
            break;
        case 2:
            h.addrguest();
            break;
        case 3:
            h.addEmploye();
            break;
        case 4:
            h.addReservation();
            break;
        case 5:
            h.deleteroom();
        case 6:
            h.deleteguest();
        case 7:
            h.deleteEmploye();
        case 8:
            h.deleteReservation();
        case 9:
            h.searchroom();
        case 10:
            h.searchgest();
        case 11:
            h.searchEmploye();
        case 12:
            h.searchReservation();
        case 13:
            h.editrooms();
        case 14:
            h.editguest();
        case 15:
            h.editEmploye();
        case 16:
            h.deleteReservation();
        case 17:
            h.printroom();
        case 18:
            h.printguest();
        case 19:
            h.printEmploye();
        case 20:
            h.printReservation();
        default:
            cout<<"Invalid Input!!Press Number From (0 - 10)"<<endl;
            break;
        }
    }
    while(x!=0);
}
