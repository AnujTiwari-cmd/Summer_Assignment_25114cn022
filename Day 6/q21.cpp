//Write a program to Convert decimal to binary
#include <iostream>
using namespace std;
int main(){
    int num;
    int b=0;
    int r,place=1;
    cout<<"Enter a decimal number: ";
    cin>>num;
    int temp=num;
    while (temp>0){
        r=temp%2;          
        b=b+r*place;   
        place=place*10;
        temp=temp/2;               
    }
    cout<<"Binary value is: "<<b;
    return 0;
}