//Write a program to Remove duplicates from array
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main(){
    array <int,16> v={1,2,7,1,3,9,5,5,4,5,6,2,8,9,9,9};
    sort(v.begin(),v.end());
    int k=1;
    for (int i=1;i<v.size();i++){
        if (v[i]!=v[i-1]){
            v[k]=v[i];
            k++;
        }
    }
    for (int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
}
