//Write a program to Rotate array left
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=arr.size()-1;
    int t=arr[0];
    for (int i=0;i<e;i++){
        arr[i]=arr[i+1];
    }
    arr[e]=t;
    for (int val:arr){
        cout<<val<<" ";
    }
}