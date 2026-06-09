//Write a program to Print reverse star pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how long you want your pyramid to be: ";
    cin>>n;
    for (int i=n;i>0;i--){
        for (int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}