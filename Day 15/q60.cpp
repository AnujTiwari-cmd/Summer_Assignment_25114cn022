//Write a program to Move zeroes to end
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,13> arr={0,0,1,2,3,4,5,0,6,0,7,8,9};
    int s=0;
    int e=arr.size()-1;
    int nz=0;
    for (int i=0;i<arr.size();i++) {
        if (arr[i]!=0){
            swap(arr[i],arr[nz]);
            nz++;
        }
    }
    for (int val:arr){
        cout<<val<<" ";
    }
}