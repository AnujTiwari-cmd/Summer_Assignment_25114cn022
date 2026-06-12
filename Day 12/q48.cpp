//Write a program to Write function for perfect number
#include <iostream>
using namespace std;
bool perf(int n){
    int sum=0;
    for (int i=1;i<=(n/2);i++){
        if (n%i==0){
            sum=sum+i;
        }
    }
    if (sum==n){
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
    cout<<perf(a);
}