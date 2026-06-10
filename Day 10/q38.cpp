//Write a program to Print reverse pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how long you want your pyramid to be: ";
    cin>>n;
    for (int i=n;i>=0;i--){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}