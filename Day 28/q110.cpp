//Write a program to Create bank account system
#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    public:
    int accountnumber;
    string accountholder;
    double balance;
    void createaccount(){
        cout<<"Enter Account Number: ";
        cin>>accountnumber;
        cin.ignore();
        cout<<"Enter Account Holder Name: ";
        getline(cin,accountholder);
        cout<<"Enter Initial Balance: ";
        cin>>balance;
        cout<<"Account created successfully."<<endl;
    }
    void deposit(){
        double amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        if(amount>0){
            balance+=amount;
            cout<<"Deposit successful."<<endl;
        }
        else{
            cout<<"Invalid deposit amount."<<endl;
        }
    }
    void withdraw(){
        double amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<"Withdrawal successful."<<endl;
        }
        else{
            cout<<"Insufficient balance or invalid amount."<<endl;
        }
    }
    void checkBalance(){
        cout<<"Current Balance: "<<balance<<endl;
    }
};
int main(){
    bankaccount acc;
    int choice;
    do{
        cout<<"\n--- Bank Account System ---"<<endl;
        cout<<"1. Create Account"<<endl;
        cout<<"2. Deposit"<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Check Balance"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                acc.createaccount();
                break;
            case 2:
                acc.deposit();
                break;
            case 3:
                acc.withdraw();
                break;
            case 4:
                acc.checkBalance();
                break;
            case 5:
                cout<<"Thank you for using the Bank System."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=5);
    return 0;
}