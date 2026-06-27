//Write a program to Remove duplicate characters
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    for (int i=0;i<str.length();i++) {
        bool d=false;
        for (int j=0;j<i;j++) {
            if (str[i]==str[j]) {
                d=true;
                break;
            }
        }
        if (!d) {
            cout<<str[i];
        }
    }
}