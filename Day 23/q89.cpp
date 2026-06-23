//Write a program to Find first non-repeating character
#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    for (int i=0;s[i]!='\0';i++){
        bool flag=false;
        for (int j=0;s[j]!='\0';j++){
            if (i!=j && s[i]==s[j]){
                flag=true;
                break;
            }
        }
        if (!flag){
            cout<<"First non-repeating character will be "<<s[i];
            break;
        }
    }
}
