//Write a program to Find pair with given sum
#include <iostream>
#include <array>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    array <int,16> v={1,2,7,1,3,9,5,5,4,5,6,2,8,9,9,9};
    sort(v.begin(),v.end());
    set <pair<int,int>> s;
    int t;
    cout<<"Which sum target you want? ";
    cin>>t;
    for (int i=0;i<v.size();i++){
        int a=t-v[i];
        for (int j=i+1;j<v.size();j++){
            if (v[j]==a){
                s.insert({v[i],v[j]});
            }
        }
    }
    for (pair <int,int> val:s){
        cout<<val.first<<","<<val.second<<endl;
    }
}