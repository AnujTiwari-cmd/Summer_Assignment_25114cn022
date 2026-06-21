//Write a program to Count vowels and consonants
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string you want: ";
    cin>>s;
    int c=0,v=0;
    for (int i=0;s[i]!='\0';i++){
        char ch=toupper(s[i]);
        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            v++;
        }
        else{
            c++;
        }
    }
    cout<<"Number of vowels are: "<<v<<endl;
    cout<<"Number of consonants are: "<<c;
}