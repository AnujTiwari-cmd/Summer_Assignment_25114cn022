//Write a program to Print factors of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Here are the factors: "<<endl;
    for (int i=1;i<=(n/2);i++){
        if (n%i==0){
            cout<<i<<endl;
        }
    }
    cout<<n;
    return 0;
}