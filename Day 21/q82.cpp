//Write a program to Reverse a string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string you want: ";
    cin>>s;
    int st=0,e=s.length()-1;
    while (st<e){
        char temp=s[st];
        s[st]=s[e];
        s[e]=temp;
        st++;
        e--;
    }
    for (int i=0;s[i]!='\0';i++){
        cout<<s[i]<<"";
    }
}