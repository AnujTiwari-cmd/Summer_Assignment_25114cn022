//Write a program to Count words in a sentence
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int c=0;
    cout<<"Enter the string: ";
    getline(cin, s);
    bool flag=false;
    for (char ch:s) {
        if (ch!=' '&& !flag) {
            c++;
            flag=true;
        }
        else if (ch==' ') {
            flag=false;
        }
    }
    cout<<"Number of words are " <<c;
    return 0;
}