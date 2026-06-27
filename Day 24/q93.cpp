//Write a program to Check string rotation
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter string one: ";
    getline(cin,s1);
    cout<<"Enter string two: ";
    getline(cin,s2);
    if (s1.length()!=s2.length()){
        cout<<"Strings are not rotation of each other ";
        return 0;
    }
    string s3=s1+s1;
    if (s3.find(s2)!=string::npos){
        cout<<"Strings are rotation of each other";
    }
    else{
        cout<<"Strings are not rotation of each other ";
    }
}