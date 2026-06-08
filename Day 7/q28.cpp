//Write a program to Recursive reverse number
#include <iostream>
using namespace std;
int rev(int a,int b=0){
    if (a==0){
        return b;
    }
    return rev(a/10,b*10+a%10);
}
int main(){
    int n;
    cout<<"Enter the number whose reverse you want: ";
    cin>>n;
    cout<<rev(n);
}