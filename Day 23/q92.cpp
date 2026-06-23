//Write a program to Find maximum occurring character
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int mc=0;
    char mch;
    for (int i=0;s[i]!='\0';i++){
        int c=0;
        for (int j=0;s[j]!='\0';j++){
            if (s[i]==s[j]){
                c++;
            }
        }
        if (c>mc){
            mc=c;
            mch=s[i];
        }
    }
    cout<<"Most occuring character is "<<mch;
}