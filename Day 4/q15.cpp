//Write a program to Check Armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int ognum,num,r;
    int result=0;
    cout<<"Enter a number: ";
    cin>>num;
    if (num<100 || num>999){
        cout<<"Program is only for 3 digit numbers";
        return 0;
    }
    ognum=num;
    while (ognum!=0) {
        r=ognum%10;
        result=result+(r*r*r);
        ognum=ognum/10;
    }
    if (result==num){
        cout<<"Number is a armstrong number";
    }
    else{
        cout<<"Number is not a armstrong";
    }
}