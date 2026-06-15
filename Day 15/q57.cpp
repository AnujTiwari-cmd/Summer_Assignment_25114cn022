//Write a program to Reverse array
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=arr.size()-1;
    while (s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for (int val:arr){
        cout<<val<<" ";
    }
}