//Write a program to Write function to find factorial
#include <iostream>
using namespace std;
long long fact(int a){
    long long ans=1;
    for (int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int m;
    cout<<"Enter a number: ";
    cin>>m;
    cout<<fact(m);
}
