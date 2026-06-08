//Write a program to Recursive Fibonacci
#include <iostream>
using namespace std;
int fibo(int a){
    if (a<=1){
        return a;
    }
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int n;
    cout<<"Enter the term upto which you want the fibonacci number: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<fibo(i)<<endl;
    }
}