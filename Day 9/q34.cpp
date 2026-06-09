//Write a program to Print reverse number triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how long you want your pyramid to be: ";
    cin>>n;
    for (int i=n;i>0;i--){
        int a=1;
        for (int j=i;j>0;j--){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}