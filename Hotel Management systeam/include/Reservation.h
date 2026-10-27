#ifndef RESERVATION_H
#define RESERVATION_H


class Reservation
{
private:
    int reservationId;
    int guestId;
    int roomId;
    int numberOfNights;
    double totalPrice;
public:
    void setreservationId(int reservationId)
    {
        this->reservationId=reservationId;
    }
    void setguestId(int guestId)
    {
        this->guestId=guestId;
    }
    void setroomId(int roomId)
    {
        this->roomId=roomId;
    }
    void setnumberOfNights(int numberOfNights)
    {
        this->numberOfNights=numberOfNights;
    }
    void settotalprice(int totalPrice)
    {
        this->totalPrice=totalPrice;
    }
    int getreservationId()

    {
        return reservationId;
    }
    int getguestId()
    {
        return guestId;
    }
    int getroomId()
    {
        return roomId;
    }
    int getnumberofNight()
    {
        return numberOfNights;
    }
    double gettotalprice()
    {
        return totalPrice;
    }
    void print()
    {
        cout<<"the reservation Id is :"<<reservationId<<endl;
        cout<<"the guest id is :"<<guestId<<endl;
        cout<<"the room id is :"<<roomId<<endl;
        cout<<"the numberOfNights is :"<<numberOfNights<<endl;
        cout<<"the total price is:"<<totalPrice<<endl;
    }
    void information()
    {
        cout<<" please enter the reservation Id:"<<endl;
        cin>>reservationId;
        cout<<"please enter the guest id:"<<endl;
        cin>>guestId;
        cout<<"please enter the room id :"<<endl;
        cin>>roomId;
        cout<<"please enter the numberOfNights :"<<endl;
        cin>>numberOfNights;
        cout<<"please enter the total price:"<<endl;
        cin>>totalPrice;
    }


};

#endif // RESERVATION_H
