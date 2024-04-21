#include<iostream>
#include<cstring>
#include<string>
using namespace std;

struct booking
{
    string source;
    string journey;
    int fair_price;
    string busnumber;
    int cap,booked,age;
    string t,n,date;
    char response;
    int seatsavailable;
};

class Buses{
    private:
        string from;
        string destination;
        int seats;
        int bookedseats;
        int capacity;
    public:
        void addbuses(struct booking bus[],int *count){
            if (*count <100)
            {
                cout<<"Enter the source place : "<<endl;
                cin>>bus[*count].source;
                cout<<"Enter the destination : "<<endl;
                cin>>bus[*count].journey;
                cout<<"Enter the fair price : "<<endl;
                cin>>bus[*count].fair_price;
                cout<<"Enter bus number : "<<endl;
                cin>>bus[*count].busnumber;
                cout<<"Enter capacity : "<<endl;
                cin>>bus[*count].cap;
                cout<<"Enter the Booked seats : "<<endl;
                cin>>bus[*count].booked;
                bus[*count].seatsavailable=bus[*count].cap-bus[*count].booked;
                cout<<"Enter the Journey Date : "<<endl;
                cin>>bus[*count].date;
                cout<<"Enter the depature time : "<<endl;
                cin>>bus[*count].t;
                (*count)++;
                cout<<"Bus added succesfully"<<endl;
            }
        }
        void bookbuses(struct booking bus[],int count){
            string s,de;
            bookedseats = 0;
            if (count == 0)
            {
                cout<<"No buses are avialable rightnow..."<<endl;
            }
            else{

            cout<<"From"<<endl;
            cin>>from;
            cout<<"To"<<endl;
            cin>>destination;
            s=from;
            de = destination;
            }
            
            for (int i = 0; i < count; i++)
            {
                if (strcmp(s.c_str(),bus[i].source.c_str()) == 0 && strcmp(de.c_str(),bus[i].journey.c_str()) == 0)
                {
                    cout<<"Enter number of passenger : "<<endl;
                    cin>>seats;
                    if (seats > bus[i].cap-bus[i].booked)
                    {
                        cout<<"That much Seats not available..."<<endl;
                        cout<<"Seats available : "<<bus[i].seatsavailable<<endl;
                    }
                    else{
                        cout<<"Enter your Name : "<<endl;
                        cin>>bus[i].n;
                        cout<<"Enter Your Age : "<<endl;
                        cin>>bus[i].age;
                        cout<<"Total cost is ₹ "<<bus[i].fair_price*seats<<endl;
                        cout<<"Seats want to book : "<<seats<<endl;
                        cout<<"Want to book the bus ? (YES/NO)"<<endl;
                        cin>>bus[i].response;
                        if (bus[i].response=='y' || bus[i].response=='Y')
                        {
                            cout<<"----------------------"<<endl;
                            cout<<"Booking is successfully done..."<<endl;
                            cout<<"Passenger Name : "<<bus[i].n<<endl;
                            cout<<"Passenger Age : "<<bus[i].age<<endl;
                            cout<<"Bus Number : "<<bus[i].busnumber<<endl;
                            cout<<"Journey date : "<<bus[i].date<<endl;
                            cout<<"Seats Booked  : "<<seats<<endl;
                            cout<<"Total Fair Cost ₹ : "<<bus[i].fair_price*seats<<endl;
                            cout<<"------------------------"<<endl;
                        }
                        
                        bus[i].booked +=seats;
                        bus[i].seatsavailable -=seats;
                    }
                }
                else{
                    cout<<"No bus is there..."<<endl;
                }
            }
        }
        void displaybuses(struct booking bus[],int count){
            if (count == 0)
            {
                cout<<"No buses are available..."<<endl;
            }
            
            for (int i = 0; i < count; i++)
            {
                cout<<"----------------------"<<endl;
                cout<<"From : "<<bus[i].source<<endl;
                cout<<"To : "<<bus[i].journey<<endl;
                cout<<"Bus Number : "<<bus[i].busnumber<<endl;
                cout<<"Bus Capacity : "<<bus[i].cap<<endl;
                cout<<"Journey Date : "<<bus[i].date<<endl;
                cout<<"Seats Available : "<<bus[i].seatsavailable<<endl;
                cout<<"Fair Cost : "<<bus[i].fair_price<<endl;
                cout<<"Depature Time : "<<bus[i].t<<endl;
                cout<<"----------------------"<<endl;
            }
        }
        void cancelbus(struct booking bus[],int count){
            string name,number;
            cout<<"Enter your Name : ";
            cin>>name;
            cout<<"Enter your Bus number : ";
            cin>>number;
            for (int i = 0; i < count; i++)
            {
                if (strcmp(name.c_str(),bus[i].n.c_str()) == 0 && strcmp(number.c_str(),bus[i].busnumber.c_str()) == 0)
                {   
                    cout<<"------------------"<<endl;
                    cout<<"Name : "<<name<<endl;
                    cout<<"Bus Number : "<<number<<endl;
                    cout<<"Seats Booked : "<<seats<<endl;
                    cout<<"Want to cancel the Ticket (YES/NO)"<<endl;
                    cin>>bus[i].response;
                    if (bus[i].response == 'y' || bus[i].response == 'Y')
                    {
                        cout<<"Your Ticket has been canceled..."<<endl;
                        bus[i].seatsavailable = bus[i].seatsavailable + seats;
                    }
                }
                else{
                    cout<<"No records found on this details..."<<endl;
                }
            }
        }
};

int main(){
    Buses Bus;

    struct booking bus[100];
    int buscount = 0;
    int choice;
    do
    {
        cout<<"======================"<<endl;
        cout<<"1)Add Buses"<<endl;
        cout<<"2)Book Bus"<<endl;
        cout<<"3)Display Buses"<<endl;
        cout<<"4)Cancel the Ticket"<<endl;
        cout<<"5)Exit"<<endl;
        cout<<"======================"<<endl;
        cout<<"Enter choice : "<<endl;
        cin>>choice;
    switch (choice)
    {
    case 1:Bus.addbuses(bus,&buscount);
        break;
    case 2:Bus.bookbuses(bus,buscount);
        break;
    case 3:Bus.displaybuses(bus,buscount);
        break;
    case 4:Bus.cancelbus(bus,buscount);
        break;
    case 5:cout<<"Exiting..."<<endl;
        break;
    default:cout<<"Enter the valid Choice..."<<endl;
        break;
    }
    } while (choice != 5);
    
}