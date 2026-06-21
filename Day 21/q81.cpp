//Write a program to Find string length without strlen()
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string you want: ";
    cin>>s;
    int c=0;
    for (int i=0;s[i]!='\0';i++){
        c++;
    }
    cout<<"Length of string is "<<c;
}