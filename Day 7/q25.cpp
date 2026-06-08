//Write a program to Recursive factorial
#include <iostream>
using namespace std;
int fact(int a){
    if (a==0){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int n;
    cout<<"Enter the number whose factorial you want: ";
    cin>>n;
    cout<<fact(n);
}