//Write a program to Write function for Armstrong
#include <iostream>
using namespace std;
bool isarm(int num){
    int ognum,r;
    int result=0;
    if (num<100 || num>999){
        cout<<"Program is only for 3 digit numbers";
        return 0;
    }
    ognum=num;
    while (ognum!=0) {
        r=ognum%10;
        result=result+(r*r*r);
        ognum=ognum/10;
    }
    if (result==num){
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
    cout<<isarm(a);
}

