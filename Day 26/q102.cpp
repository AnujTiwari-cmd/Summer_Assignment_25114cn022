//Write a program to Create voting eligibility system
#include <iostream>
using namespace std;
int main(){
    int v;
    cout<<"WELCOME TO VOTING ELIGIBILITY SYSTEM "<<endl;
    cout<<"Please enter your age: ";
    cin>>v;
    if (v>=18){
        cout<<"You are eligible to vote";
    }
    else{
        cout<<"You are not eligible to vote";
    }
}