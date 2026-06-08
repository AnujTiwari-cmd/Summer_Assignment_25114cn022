//Write a program to Print half pyramid pattern
#include <iostream>
using namespace std;
int main(){
    char a;
    int n;
    cout<<"Enter the character you want the half pyramid to be printed with: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter how tall the pyramid should be: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<a;
        }
        cout<<endl;
    }
}