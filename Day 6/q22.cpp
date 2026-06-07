//Write a program to Convert binary to decimal
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int bin;
    cout<<"Enter the binary number: ";
    cin>>bin;
    int ans=0,i=0;
    while (bin!=0){
        int r=bin%10;
        ans=ans+(r*pow(2,i));
        i++;
        bin=bin/10;
    }
    cout<<ans;
}