//Write a program to Find missing number in array
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,8> v={1,2,3,5,6,7,8,9};
    int n,a=0;
    cout<<"Enter how many numbers you wanted in your array: ";
    cin>>n;
    int sum=(n*(n+1))/2;
    for (int i=0;i<v.size();i++){
        a+=v[i];
    }
    cout<<"Missing number is "<<sum-a;
}