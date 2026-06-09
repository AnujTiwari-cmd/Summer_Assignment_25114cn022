//Write a program to Print hollow square pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how long you want your hollow sqaure to be: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        if (i==1 || i==n){
            for (int j=1;j<=n;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for (int k=1;k<=n-2;k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
