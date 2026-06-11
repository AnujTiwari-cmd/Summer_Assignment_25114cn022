//Write a program to Write function to check prime
#include <iostream>
using namespace std;
bool prime(int n){
    bool a=true;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            a=false;
        }
    }
    return a;
}
int main(){
    int m;
    cout<<"Enter a number: ";
    cin>>m;
    cout<<prime(m);
}
