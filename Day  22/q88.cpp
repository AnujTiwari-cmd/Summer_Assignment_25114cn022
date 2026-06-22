//Write a program to Remove spaces from string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    string ans;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]!=' '){
            ans.push_back(s[i]);
        }
    }
    cout<<"String without spaces is: "<<ans;
}