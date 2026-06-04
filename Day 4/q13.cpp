//Write a program to Generate Fibonacci series.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many terms you want in your fibonacci series: ";
    cin>>n;
    int f=0,s=1;
    cout<<f<<endl;
    for (int i=0;i<n;i++){
        cout<<s<<endl;
        int temp=s;
        s=s+f;
        f=temp;
    }
}