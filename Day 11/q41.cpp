//Write a program to Write function to find sum of two numbers
#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int m,n;
    cout<<"Enter first number: ";
    cin>>m;
    cout<<"Enter second number: ";
    cin>>n;
    cout<<sum(m,n);
}