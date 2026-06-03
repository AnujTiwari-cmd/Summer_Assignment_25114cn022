//Write a program to Print prime numbers in a range.
#include <iostream>
using namespace std;
bool ispr(int n){
    bool isp=true;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            isp=false;
            break;
        }
    }
    if (n==1){
        isp=false;
    }
    return isp;
}
int main(){
    int a;
    cout<<"Enter the range in which you want prime number: ";
    cin>>a;
    cout<<"Following numbers are prime in your provided range:"<<endl;
    for (int j=2;j<=a;j++){
        if (ispr(j)==true){
            cout<<j<<endl;
        }
    }
}