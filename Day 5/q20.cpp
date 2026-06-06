//Write a program to Find largest prime factor
#include <iostream>
using namespace std;
bool isprime(int a){
    for (int i=2;i*i<=a;i++){
        if (a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=(n/2);i>0;i--){
        if (n%i==0 && isprime(i)){
            cout<<i<<endl;
            return 0;
        }
    }
}