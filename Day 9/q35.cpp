//Write a program to Print repeated character pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how long you want your pyramid to be: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        char a=64+i;
        for (int j=1;j<=i;j++){
            cout<<a;
        }
        cout<<endl;
    }
}
