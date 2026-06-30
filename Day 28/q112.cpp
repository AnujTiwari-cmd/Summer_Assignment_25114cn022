//Write a program to Create contact management system
#include<iostream>
#include<string>
using namespace std;
class Contact{
    public:
    string name;
    string phone;
    string email;
    void addcontact(){
        cin.ignore();
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Phone Number: ";
        getline(cin,phone);
        cout<<"Enter Email ID: ";
        getline(cin,email);
        cout<<"Contact added successfully."<<endl;
    }
    void displaycontact(){
        cout<<"------------------------"<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"Phone : "<<phone<<endl;
        cout<<"Email : "<<email<<endl;
    }
};
int main(){
    Contact contacts[5];
    int count=0;
    int choice;
    do{
        cout<<"\n--- Contact Management System ---"<<endl;
        cout<<"1. Add Contact"<<endl;
        cout<<"2. Search Contact"<<endl;
        cout<<"3. Display All Contacts"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                if(count<5){
                    contacts[count].addcontact();
                    count++;
                }
                else{
                    cout<<"Contact list full."<<endl;
                }
                break;
            case 2:{
                string searchName;
                bool found=false;
                cin.ignore();
                cout<<"Enter name to search: ";
                getline(cin,searchName);
                for(int i=0;i<count;i++){
                    if(contacts[i].name==searchName){
                        contacts[i].displaycontact();
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Contact not found."<<endl;
                }
                break;
            }
            case 3:
                if(count==0){
                    cout<<"No contacts available."<<endl;
                }
                else{
                    for(int i=0;i<count;i++){
                        contacts[i].displaycontact();
                    }
                }
                break;
            case 4:
                cout<<"Exiting Contact Management System..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}