//Write a program to Find x^n without pow()
#include <iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the base number: "<<endl;
    cin>>x;
    cout<<"Enter the power: "<<endl;
    cin>>n;
    int ans=1;
    while (n>0){
        ans=ans*x;
        n--;
    }
    cout<<"Your answer is: "<<ans;
}