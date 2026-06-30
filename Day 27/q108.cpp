//Write a program to Create marksheet generation system
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    int marks[5];
    int total;
    double per;
    char grade;
    void inputdetails(){
        cout<<"Enter Roll Number: ";
        cin>>rollno;
        cin.ignore();
        cout<<"Enter Student Name: ";
        getline(cin,name);
        for(int i=0;i<5;i++){
            cout<<"Enter marks for Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void calculateResult(){
        total=0;
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
        per=total/5.0;
        if(per>=90){
            grade='A';
        }
        else if(per>=75){
            grade='B';
        }
        else if(per>=60){
            grade='C';
        }
        else if(per>=40){
            grade='D';
        }
        else{
            grade='F';
        }
    }
    void displayMarksheet(){
        cout<<"MARKSHEET"<<endl;
        cout<<"Roll Number : "<<rollno<<endl;
        cout<<"Name        : "<<name<<endl;
        for(int i=0;i<5;i++){
            cout<<"Subject "<<i+1<<" : "<<marks[i]<<endl;
        }
        cout<<"Total Marks : "<<total<<endl;
        cout<<"Percentage  : "<<per<<"%"<<endl;
        cout<<"Grade       : "<<grade<<endl;
        if(grade!='F'){
            cout<<"Result      : PASS"<<endl;
        }
        else{
            cout<<"Result      : FAIL"<<endl;
        }
    }
};
int main(){
    Student st;
    st.inputdetails();
    st.calculateResult();
    st.displayMarksheet();
    return 0;
}