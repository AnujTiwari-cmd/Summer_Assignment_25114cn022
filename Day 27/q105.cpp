//Write a program to Create student record management system
#include<iostream>
#include<string>
using namespace std;
int main(){
    const int MAX=50;
    int count=0;
    int roll[MAX];
    string name[MAX];
    int marks[MAX];
    while(true){
        cout<<"STUDENT RECORD MENU"<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display All Students"<<endl;
        cout<<"3. Search Student by Roll No"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                if(count<MAX){
                    cout<<"Enter roll number: ";
                    cin>>roll[count];
                    cout<<"Enter name: ";
                    cin.ignore();
                    getline(cin,name[count]);
                    cout<<"Enter marks: ";
                    cin>>marks[count];
                    count++;
                    cout<<"Student added successfully!"<<endl;
                }
                else{
                    cout<<"Record limit reached!"<<endl;
                }
                break;
            case 2:
                if(count==0){
                    cout<<"No records found!"<<endl;
                }
                else{
                    cout<<"\nRoll\tName\t\tMarks"<<endl;
                    for(int i=0;i<count;i++){
                        cout<<roll[i]<<"\t"<<name[i]<<"\t\t"<<marks[i]<<endl;
                    }
                }
                break;
            case 3:{
                int r;
                bool found=false;
                cout<<"Enter roll number to search: ";
                cin>>r;
                for(int i=0;i<count;i++){
                    if(roll[i]==r){
                        cout<<"\nRecord Found:"<<endl;
                        cout<<"Roll: "<<roll[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Marks: "<<marks[i]<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Student not found"<<endl;
                }
                break;
            }
            case 4:
                cout<<"Exiting Student Record System"<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    return 0;
}