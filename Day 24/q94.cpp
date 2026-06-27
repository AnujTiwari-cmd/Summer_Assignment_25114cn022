//Write a program to Compress a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    string com="";
    int c=1;
    for (int i=1;i<=s.length();i++) {
        if (i<s.length() && s[i]==s[i-1]){
            c++;
        } 
        else{
            com+=s[i-1];
            com+=to_string(c);
            c=1;
        }
    }
    cout<<com;
}