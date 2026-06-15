//Write a program to Rotate array right
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=arr.size()-1;
    int t=arr[e];
    for (int i=e;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=t;
    for (int val:arr){
        cout<<val<<" ";
    }
}