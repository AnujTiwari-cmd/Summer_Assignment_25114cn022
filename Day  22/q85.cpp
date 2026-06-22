//Write a program to Check palindrome string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    bool flag=true;
    cout<<"Enter the string you want: ";
    cin>>s;
    int st=0,e=s.length()-1;
    while (st<e){
        if (s[st]!=s[e]){
            flag=false;
            break;
        }
        st++;
        e--;
    }
    if (flag){
        cout<<"String is a palindrome";
    }
    else{
        cout<<"String is not a palindrome";
    }
}