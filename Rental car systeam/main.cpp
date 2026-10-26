#include <iostream>
#include <Rental systeam.h>
using namespace std;

int main()
{
    RentalSystem r ;
    int x ;
    do
    {
        cout <<endl ;
        cout<<"press 0 to exit "<<endl ;
        cout<<"press 1 to add car "<<endl ;
        cout<<"press 2 to add customer "<<endl ;
        cout<<"press 3 to delete car "<<endl ;
        cout<<"press 4 to delete customer "<<endl ;
        cout<<"press 5 to search car "<<endl ;
        cout<<"press 6 to search customer "<<endl ;
        cout<<"press 7 to edit car "<<endl ;
        cout<<"press 8 to edit customer "<<endl ;
        cout<<"press 9 to print all cars "<<endl ;
        cout<<"press 10 to print all customers "<<endl ;
        cin>>x ;
        system("cls");
        switch(x)
        {
        case 0:
            cout<<"The Program End**Good Bay"<<endl;
            break;
        case 1:
            r.addCar();
            break;
        case 2:
            r.addCustomer();
            break;
        case 3:
            r.deleteCar();
            break;
        case 4:
            r.deleteCustomers();
            break;
        case 5:
            r.SearchCar();
            break;
        case 6:
            r.SearchCustomer() ;
            break ;
        case 7:
            r.editCar();
            break;
        case 8:
            r.editCustomers();
            break;
        case 9:
            r.printCars() ;
            break ;
        case 10:
            r.printCustomers();
            break;
        default:
            cout<<"Invalid Input!!Press Number From (0 - 10)"<<endl;
            break;
        }
    }
    while(x!=0);
}
