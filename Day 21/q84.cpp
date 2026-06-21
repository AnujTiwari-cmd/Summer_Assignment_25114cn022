//Write a program to Convert lowercase to uppercase
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string you want: ";
    cin>>s;
    for (int i=0;s[i]!='\0';i++){
        s[i]=toupper(s[i]);
    }
    cout<<"Here is your string after being converted to uppercase- ";
    for (int i=0;s[i]!='\0';i++){
        cout<<s[i]<<"";
    }
}