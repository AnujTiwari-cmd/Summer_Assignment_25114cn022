#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="";
    int choice;
    do{
        cout<<"Menu Driven String Operations"<<endl;
        cout<<"1. Enter String"<<endl;
        cout<<"2. Find Length"<<endl;
        cout<<"3. Convert to Uppercase"<<endl;
        cout<<"4. Convert to Lowercase"<<endl;
        cout<<"5. Reverse String"<<endl;
        cout<<"6. Check Palindrome"<<endl;
        cout<<"7. Count Vowels"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cin.ignore();
                cout<<"Enter the string: ";
                getline(cin,str);
                break;
            case 2:
                cout<<"Length of string: "<<str.length()<<endl;
                break;
            case 3:
            {
                string upper=str;
                for(int i=0;i<upper.length();i++){
                    upper[i]=toupper(upper[i]);
                }
                cout<<"Uppercase: "<<upper<<endl;
                break;
            }
            case 4:
            {
                string lower=str;
                for(int i=0;i<lower.length();i++){
                    lower[i]=tolower(lower[i]);
                }
                cout<<"Lowercase: "<<lower<<endl;
                break;
            }
            case 5:
            {
                string rev="";
                for(int i=str.length()-1;i>=0;i--){
                    rev+=str[i];
                }
                cout<<"Reversed String: "<<rev<<endl;
                break;
            }
            case 6:
            {
                string original=str;
                string reversed="";
                for(int i=str.length()-1;i>=0;i--){
                    reversed+=tolower(str[i]);
                }
                for(int i=0;i<original.length();i++){
                    original[i]=tolower(original[i]);
                }
                if(original==reversed){
                    cout<<"String is Palindrome"<<endl;
                }
                else{
                    cout<<"String is Not Palindrome"<<endl;
                }
                break;
            }
            case 7:
            {
                int count=0;
                for(int i=0;i<str.length();i++){
                    char ch=tolower(str[i]);
                    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                        count++;
                    }
                }
                cout<<"Number of vowels: "<<count<<endl;
                break;
            }
            case 8:
                cout<<"Exiting String Operations System..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=8);
    return 0;
}