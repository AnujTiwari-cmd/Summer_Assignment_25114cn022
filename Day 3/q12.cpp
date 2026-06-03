//Write a program to Find LCM of two numbers. 
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
    int lcm=(n1*n2)/gcd;
    cout<<"The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
    return 0;
}
