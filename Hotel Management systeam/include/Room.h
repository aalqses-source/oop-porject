#ifndef ROOM_H
#define ROOM_H


class Room
{
private:
    int id;
    int roomNumber;
    string roomtype;
    int pricepernight;
public:
    void setid(int id)
    {
        this->id=id;
    }
    void setroomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setroomtypr(int roomtype)
    {
        this->roomtype=roomtype;
    }
    void setpricepernight(int pricepernight)
    {
        this->pricepernight=pricepernight;
    }
    int getid()
    {
        return id;
    }
    int getroomNumber()
    {
        return roomNumber;
    }
    string getroomtype()
    {
        return roomtype;
    }
    int getpricepernight()
    {
        return pricepernight;
    }
    void print()
    {
        cout<<"the room id"<<id<<endl;
        cout<<"the room Number"<<roomNumber<<endl;
        cout<<"the room type"<<roomtype<<endl;
        cout<<"the room pricepernight"<<pricepernight<<endl;
    }
    void information()
    {
        cout<<"please enter room id"<<endl;
        cin>>id;
        cout<<"please enter room Number"<<endl;
        cin>>roomNumber;
        cout<<"please enter room type"<<endl;
        cin>>roomtype;
        cout<<"please enter room pricepernight"<<endl;
        cin>>pricepernight;

    }
};

#endif // ROOM_H
