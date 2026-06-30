//Write a program to Create ticket booking system
#include<iostream>
using namespace std;
class Ticket{
    public:
    int totalseats=50;
    int bookedseats=0;
    int ticketprice=200;
    void showavailability(){
        cout<<"Total Seats   : "<<totalseats<<endl;
        cout<<"Booked Seats  : "<<bookedseats<<endl;
        cout<<"Available     : "<<totalseats-bookedseats<<endl;
    }
    void bookticket(){
        int seats;
        cout<<"Enter number of seats to book: ";
        cin>>seats;
        if(seats>0&&seats<=(totalseats-bookedseats)){
            bookedseats+=seats;
            cout<<"Ticket booked successfully."<<endl;
            cout<<"Total Amount: Rs "<<seats*ticketprice<<endl;
        }
        else{
            cout<<"Seats not available."<<endl;
        }
    }
    void cancelticket(){
        int seats;
        cout<<"Enter number of seats to cancel: ";
        cin>>seats;
        if(seats>0&&seats<=bookedseats){
            bookedseats-=seats;
            cout<<"Ticket cancelled successfully."<<endl;
        }
        else{
            cout<<"Invalid cancellation request."<<endl;
        }
    }
};
int main(){
    Ticket ticket;
    int choice;
    do{
        cout<<"\n--- Ticket Booking System ---"<<endl;
        cout<<"1. View Available Seats"<<endl;
        cout<<"2. Book Ticket"<<endl;
        cout<<"3. Cancel Ticket"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                ticket.showavailability();
                break;
            case 2:
                ticket.bookticket();
                break;
            case 3:
                ticket.cancelticket();
                break;
            case 4:
                cout<<"Thank you for using Ticket Booking System."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}