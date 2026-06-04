//Write a program to Print Armstrong numbers in a range
#include <iostream>
using namespace std;
int main(){
    int s,end;
    cout<<"Enter the starting of the range: ";
    cout<<"Enter ending of the range: "<<endl;
    cin>>s>>end;
    cout<<"Here is your answer"<<endl;
    for (int k=s;k<end;k++){
        int i=k;
        int result=0,r;
        while (i!=0) {
            r=i%10;
            result=result+(r*r*r);
            i=i/10;
        }
        if (result==k){
            cout<<result<<endl;
        }
    }
}