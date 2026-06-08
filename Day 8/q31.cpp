//Write a program to Print character triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"How long pyramid you want? ";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=65;j<=i+65;j++){
            char c=j;
            cout<<c;
        }
        cout<<endl;
    }
}