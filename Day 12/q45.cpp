//Write a program to Write function for palindrome
#include <iostream>
using namespace std;
bool palin(int b){
    int a=b;
    int res=0;
    while(a!=0){
        res=res*10+(a%10);
        a=a/10; 
    }
    if (res==b){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<endl;
    cout<<palin(a);
}