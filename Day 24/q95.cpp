//Write a program to Find longest word
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    string w="",lon= "";
    for (int i=0;i<=str.length();i++) {
        if (i==str.length() || str[i] == ' ') {
            if (w.length() > lon.length()) {
                lon=w;
            }
            w="";
        } 
        else {
            w+=str[i];
        }
    }

    cout<<"Longest word is: "<<lon;
}