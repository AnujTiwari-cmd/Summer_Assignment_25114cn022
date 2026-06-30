//Write a program to Create employee management system
#include<iostream>
#include<string>
using namespace std;
int main(){
    const int MAX=50;
    int count=0;
    int empid[MAX];
    string name[MAX];
    float salary[MAX];
    while(true){
        cout<<"EMPLOYEE MANAGEMENT SYSTEM"<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display All Employees"<<endl;
        cout<<"3. Search Employee by ID"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                if(count<MAX){
                    cout<<"Enter Employee ID: ";
                    cin>>empid[count];
                    cout<<"Enter Employee Name: ";
                    cin.ignore();
                    getline(cin,name[count]);
                    cout<<"Enter Salary: ";
                    cin>>salary[count];
                    count++;
                    cout<<"Employee added successfully!"<<endl;
                }
                else{
                    cout<<"Record limit reached!"<<endl;
                }
                break;
            case 2:
                if(count==0){
                    cout<<"No employee records found!"<<endl;
                }
                else{
                    cout<<"\nID\tName\t\tSalary"<<endl;
                    for(int i=0;i<count;i++){
                        cout<<empid[i]<<"\t"<<name[i]<<"\t\t"<<salary[i]<<endl;
                    }
                }
                break;
            case 3:{
                int id;
                bool found=false;
                cout<<"Enter Employee ID to search: ";
                cin>>id;
                for(int i=0;i<count;i++){
                    if(empid[i]==id){
                        cout<<"\nEmployee Found"<<endl;
                        cout<<"ID: "<<empid[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Salary: "<<salary[i]<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Employee not found!"<<endl;
                }
                break;
            }
            case 4:
                cout<<"Exiting Employee Management System."<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }

    return 0;
}