//Write a program to Write function to find maximum
#include <iostream>
using namespace std;
int maxi(int a,int b){
    if (a>b) return a;
    else return b;
}
int main(){
    int m,n;
    cout<<"Enter first number: ";
    cin>>m;
    cout<<"Enter second number: ";
    cin>>n;
    cout<<maxi(m,n);
}