//Write a program to Find sum and average of array
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,5,6,7,9};
    int sum=0,avg;
    for (int i=0;i<9;i++){
        sum +=arr[i];
    }
    avg=sum/9;
    cout<<"Sum of array is: "<<sum<<endl;
    cout<<"Average is: "<<avg;
}