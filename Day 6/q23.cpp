//Write a program to Count set bits in a number
#include <iostream>
using namespace std;
int countsetbits(int n){
    int c=0;
    while (n>0){
        n=n&(n-1);
        c++;
    }
    return c;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Number of set bits is: "<<countsetbits(num)<<endl;
    return 0;
}
