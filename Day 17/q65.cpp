//Write a program to Merge arrays
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v1={1,2,3,3,4,4,4,4,5,6};
    vector <int> v2={3,4,5,6,9,9,9,9,8};
    vector <int> ans;
    for (int i=0;i<v1.size();i++){
        ans.push_back(v1[i]);
    }
    for (int i=0;i<v2.size();i++){
        ans.push_back(v2[i]);
    }
    for (int val:ans){
        cout<<val<<" ";
    }
}