//Write a program to Find first repeating character
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    for (int i=0;s[i]!='\0';i++){
        bool flag=false;
        for (int j=0;s[j]!='\0';j++){
            if (i!=j && s[i]==s[j]){
                cout<<"First repeating character is "<<s[i];
                flag=true;
                break;
            }
        }
        if (flag){
            break;
        }
    }
}