#include<iostream>
#include<string>
using namespace std;
int main(){
    int empId[5];
    string empname[5];
    string empdept[5];
    double empsal[5];
    int count=0;
    int choice;
    do{
        cout<<"Mini Employee Management System"<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display Employees"<<endl;
        cout<<"3. Search Employee by ID"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                if(count<5){
                    cout<<"Enter Employee ID: ";
                    cin>>empId[count];
                    cin.ignore();
                    cout<<"Enter Employee Name: ";
                    getline(cin,empname[count]);
                    cout<<"Enter Department: ";
                    getline(cin,empdept[count]);
                    cout<<"Enter Salary: ";
                    cin>>empsal[count];
                    count++;
                    cout<<"Employee added successfully."<<endl;
                }
                else{
                    cout<<"Employee limit reached."<<endl;
                }
                break;
            case 2:
                if(count==0){
                    cout<<"No employee records available."<<endl;
                }
                else{
                    cout<<"\n--- Employee Records ---"<<endl;
                    for(int i=0;i<count;i++){
                        cout<<"ID     : "<<empId[i]<<endl;
                        cout<<"Name   : "<<empname[i]<<endl;
                        cout<<"Dept   : "<<empdept[i]<<endl;
                        cout<<"Salary : "<<empsal[i]<<endl;
                        cout<<"------------------------"<<endl;
                    }
                }
                break;
            case 3:
            {
                if(count==0){
                    cout<<"No employee records available."<<endl;
                    break;
                }
                int searchId;
                bool found=false;
                cout<<"Enter Employee ID to search: ";
                cin>>searchId;
                for(int i=0;i<count;i++){
                    if(empId[i]==searchId){
                        cout<<"\nEmployee Found:"<<endl;
                        cout<<"ID     : "<<empId[i]<<endl;
                        cout<<"Name   : "<<empname[i]<<endl;
                        cout<<"Dept   : "<<empdept[i]<<endl;
                        cout<<"Salary : "<<empsal[i]<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Employee not found."<<endl;
                }
                break;
            }
            case 4:
                cout<<"Exiting Mini Employee Management System..."<<endl;
                break;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}