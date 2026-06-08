//Write a program to Recursive sum of digits
#include <iostream>
using namespace std;
int sod(int a){
    if (a==0){
        return a;
    }
    return (a%10)+sod(a/10);
}
int main(){
    int n;
    cout<<"Enter the number whose sum of digits you want: ";
    cin>>n;
    cout<<sod(n);
}