//Write a program to Find sum of digits of a number
#include <iostream>
using namespace std;
int main(){
    int n=0;
    long long result=0;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<0){
        n=-n;
    }
    while (n>0){
        result=result+(n%10);
        n=n/10;
    }
    cout<<"Sum of digit of the numbers are: "<<result<<endl;
    return 0;
}