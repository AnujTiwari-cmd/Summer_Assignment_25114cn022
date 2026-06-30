//Write a program to Create salary management system
#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    int empId;
    string name;
    double basicSalary;
    double hra;
    double da;
    double grossSalary;
    void inputDetails(){
        cout<<"Enter Employee ID: ";
        cin>>empId;
        cin.ignore();
        cout<<"Enter Employee Name: ";
        getline(cin,name);
        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
    }
    void calculateSalary(){
        hra=0.20*basicSalary;
        da=0.10*basicSalary;
        grossSalary=basicSalary+hra+da;
    }
    void displayDetails(){
        cout<<"Salary Details"<<endl;
        cout<<"Employee ID   : "<<empId<<endl;
        cout<<"Name          : "<<name<<endl;
        cout<<"Basic Salary  : "<<basicSalary<<endl;
        cout<<"HRA           : "<<hra<<endl;
        cout<<"DA            : "<<da<<endl;
        cout<<"Gross Salary  : "<<grossSalary<<endl;
    }
};
int main(){
    Employee emp;
    int choice;
    do{
        cout<<"Salary Management System"<<endl;
        cout<<"1. Enter Employee Details"<<endl;
        cout<<"2. Calculate Salary"<<endl;
        cout<<"3. Display Salary"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                emp.inputDetails();
                break;
            case 2:
                emp.calculateSalary();
                cout<<"Salary calculated successfully."<<endl;
                break;
            case 3:
                emp.displayDetails();
                break;
            case 4:
                cout<<"Exiting program..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}