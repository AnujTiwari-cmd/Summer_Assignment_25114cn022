//Write a program to Find maximum frequency element
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main(){
    array <int,16> v={1,2,7,1,3,9,5,5,4,5,6,2,8,9,9,9};
    sort(v.begin(),v.end());
    int maxi=0,c=0,p=0;
    for (int i=1;i<v.size();i++){
        if (v[i]==v[i-1]){
            c++;
        }
        else{
            c=1;
        }
        if (c>maxi){
            maxi=c;
            p=v[i];
        }
    }
    cout<<p;
}