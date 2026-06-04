//Write a program to Find nth Fibonacci term
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nth term you want in your fibonacci series: "<<endl;
    cin>>n;
    int f=0,s=1;
    if (n==0) {
        cout<<f;
        return 0;
    }
    for (int i=2;i<n;i++){
        int temp=s;
        s=s+f;
        f=temp;
    }
    cout<<s;
}
