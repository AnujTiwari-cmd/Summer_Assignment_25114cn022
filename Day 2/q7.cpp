//Write a program to Find product of digits.
#include <iostream>
using namespace std;
int main(){
    int n=0;
    long long result=1;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<0){
        n=-n;
    }
    while (n>0){
        int r=n%10;
        result=result*r;
        n=n/10;
    }
    cout<<"Product of the digits of the number is: "<<result<<endl;
    return 0;
}