//Write a program to Check whether a number is prime.
#include <iostream>
using namespace std;
int main(){
    int n;
    bool isp=true;
    cout<<"Enter the positive number you want to check: ";
    cin>>n;
    for (int i=2;i<n;i++){
        if (n%i==0){
            isp=false;
            break;
        }
    }
    if (n==1){
        isp=false;
    }
    if (isp){
        cout<<"Number is a prime number";
    }
    else{
        cout<<"Number is not a prime number ";
    }
}