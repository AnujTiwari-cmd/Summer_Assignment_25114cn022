//Write a program to Check anagram strings
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,a;
    int c=0;
    cout<<"Enter first string: ";
    getline(cin,s);
    cout<<"Enter second string: ";
    getline(cin,a);
    if (s.length()!=a.length()){
        cout<<"Not a anagram!!!!";
        return 0;
    }
    for (int i=0;s[i]!='\0';i++){
        int c=0,c1=0;
        char q=s[i];
        for (int j=0;s[j]!='\0';j++){
            if (q==s[j]){
                c++;
            }
        }
        for (int k=0;a[k]!='\0';k++){
            if (q==a[k]){
                c1++;
            }
        }
        if (c!=c1){
            cout<<"Not a anagram!!!!";
            return 0;
        }
    }
    cout<<"Strings are anagram";
}