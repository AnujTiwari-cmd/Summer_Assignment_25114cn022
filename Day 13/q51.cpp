//Write a program to Find largest and smallest element
#include <iostream>
#include <array>
#include <climits>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,5,6,7,9};
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for (int i=0;i<9;i++){
        if (arr[i]>maxi){
            maxi=arr[i];
        }
        if (arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"Maximum element is: "<<maxi<<endl;
    cout<<"Minimum element is: "<<mini;
}