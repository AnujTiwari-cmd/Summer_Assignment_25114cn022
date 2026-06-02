//Write a program to Reverse a number
#include <iostream>
using namespace std;
int main(){
    int n,r=0;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<0){
        n=-n;
    }
    while (n>0){
        r=r*10+(n%10);
        n=n/10;
    }
    cout<<"Reverse of the number is: "<<r<<endl;
    return 0;
}