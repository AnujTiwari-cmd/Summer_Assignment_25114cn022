//Write a program to Second largest element
#include <iostream>
#include <array>
#include <climits>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,5,6,7,9};
    int bn=INT_MIN;
    int sn=INT_MIN;
    for (int i=0;i<9;i++){
        if (arr[i]>bn){
            sn=bn;
            bn=arr[i];
        }
        else if (arr[i]>sn&&arr[i]!=bn){
            sn=arr[i];
        }
    }
    cout<<"Second largest number is "<<sn;
}