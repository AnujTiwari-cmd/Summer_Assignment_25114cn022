//Write a program to Frequency of an element
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,5,6,7,9};
    int c=0;
    int tar;
    cout<<"Enter the number you want to search: ";
    cin>>tar;
    for (int i=0;i<9;i++){
        if (arr[i]==tar){
            c++;
        }
    }
    cout<<c;
}