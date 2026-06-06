//Write a program to Check strong number
#include <iostream>
using namespace std;
int fact(int a){
    int i=a;
    int sum=1;
    while (i>0){
        sum=sum*i;
        i--;
    }
    return sum;
}
int main(){
    int p,ans=0;
    cout<<"Enter a number: ";
    cin>>p;
    int n=p;
    while (n!=0){
        int r=n%10;
        ans=ans+fact(r);
        n=n/10;
    }
    if (ans==p){
        cout<<"Number is a strong number";
    }
    else{
        cout<<"Number is not a strong number";
    }
}