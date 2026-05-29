//Write a program to Check whether a number is palindrome.
#include <iostream>
using namespace std;
int main(){
    int n,r=0;
    cout<<"Enter a number: ";
    cin>>n;
    int a=n;
    if (n<0){
        n=-n;
    }
    while (n>0){
        r=r*10+(n%10);
        n=n/10;
    }
    if (r==a){
        cout<< "Number is a palindrome";
    }
    else{
        cout<<"Number is not a palindrome";
    }
    return 0;
}