//Write a program to Character frequency
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char ch;
    int c=0;
    cout<<"Enter the string: ";
    getline(cin, s);
    cout<<"Enter the character whose frequency you want to find: ";
    cin>>ch;
    for (int i=0;s[i]!='\0';i++){
        if (s[i]==ch){
            c++;
        }
    }
    cout<<"Your character appears "<<c<<" times in your string";
}