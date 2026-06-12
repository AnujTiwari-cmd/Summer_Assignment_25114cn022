//Write a program to Write function for Fibonacci
#include <iostream>
using namespace std;
int fibo(int n){
    int f=0,s=1;
    cout<<f<<endl;
    for (int i=0;i<n-1;i++){
        cout<<s<<endl;
        int temp=s;
        s=s+f;
        f=temp;
    }
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<endl;
    fibo(a);
}