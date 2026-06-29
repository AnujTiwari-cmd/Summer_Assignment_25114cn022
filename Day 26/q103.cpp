//Write a program to Create ATM simulation
#include <iostream>
using namespace std;
int main() {
    int pin=1309;
    double amt=10000.0;
    cout<<"Welcome to the ATM"<<endl;
    cout<<"First enter your four digit pin: "<<endl;
    for(int i=0;i<3;i++) {
        int p;
        cin>>p;
        if(p==pin) {
            cout<<"Make a choice on the basis of the operation required"<<endl<<endl;
            cout<<"Enter 1 to Check Balance"<<endl;
            cout<<"Enter 2 to Deposit Money"<<endl;
            cout<<"Enter 3 to Withdraw Money"<<endl;
            cout<<"Enter 4 to Exit"<<endl;
            cout<<"***************************************************************"<<endl;
            cout<<"Enter your choice: "<<endl;
            int n;
            cin>>n;
            cout<<"***************************************************************"<<endl;
            switch(n) {
                case 1:
                    cout<<"The current bank balance is "<<amt<<endl;
                    break;
                case 2:{
                    cout<<"Enter the amount to be deposited: ";
                    double m;
                    cin>>m;
                    amt+=m;
                    cout<<"The amount of "<<m<<" rupees has been credited The new bank balance is "<<amt<<endl;
                    break;
                }
                case 3:{
                    cout<<"Enter the amount to be withdrawn: ";
                    double m;
                    cin>>m;
                    if(amt>=m) {
                        amt-=m;
                        cout<<"The amount of "<<m<<" rupees has been successfully debited The new bank balance is "<<amt<<endl;
                    }
                    else{
                        cout<<"The balance is insufficient"<<endl;
                    }
                    break;
                }
                case 4:
                    cout<<"EXIT THE ATM! THANK YOU FOR THE CHOICE"<<endl;
                    break;
                default:
                    cout<<"The choice made is invalid. Kindly try again."<<endl;
            }
            break;
        }
        else{
            if(i<2) {
                cout<<"The pin is incorrect. You have "<<2-i<<" more ";
                if(2-i==1)
                    cout<<"try";
                else
                    cout<<"tries";
                cout<<" left. Try again!!!"<<endl;
            }
            else{
                cout<<"Your account has been blocked due to three incorrect PIN attempts."<<endl;
            }
        }
    }
    return 0;
}