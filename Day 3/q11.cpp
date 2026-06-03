//Write a program to Find GCD of two numbers.
#include <iostream>
using namespace std;
int findgcd(int a,int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main() {
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    int gcd=findgcd(n1,n2);
    cout<<"The GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    return 0;
}
