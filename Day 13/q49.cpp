//Write a program to Input and display array
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,5> arr;
    for (int i=0;i<5;i++){
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}