//Write a program to Print character pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how long you want your pyramid to be: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (char k='A';k<'A'+i;k++){
            cout<<k;
        }
        for (char m='A'+i-2;m>='A';m--){
            cout<<m;
        }
        cout<<endl;
    }
}