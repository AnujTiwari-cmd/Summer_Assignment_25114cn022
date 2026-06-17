//Write a program to Union arrays
#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector <int> v1;
    vector <int> v2;
    vector <int> ans;
    int sv1,sv2;
    cout<<"Enter size of first array: ";
    cin>>sv1;
    cout<<"Enter size of second array: ";
    cin>>sv2;
    for (int i=0;i<sv1;i++){
        int z;
        cout<<"Enter the "<< i+1 <<" element of first array: ";
        cin>>z;
        v1.push_back(z);
    }
    for (int i=0;i<sv2;i++){
        int z;
        cout<<"Enter the "<< i+1 <<" element of second array: ";
        cin>>z;
        v2.push_back(z);
    }
    for (int i=0;i<sv1;i++){
        bool c=true;
        for (int j=0;j<ans.size();j++){
            if (v1[i]==ans[j]){
                c=false;
                break;
            }
        }
        if (c){
            ans.push_back(v1[i]);
        }
    }
    for (int i=0;i<sv2;i++){
        bool c=true;
        for (int j=0;j<ans.size();j++){
            if (v2[i]==ans[j]){
                c=false;
                break;
            }
        }
        if (c){
            ans.push_back(v2[i]);
        }
    }
    for (int val:ans){
        cout<<val<<" ";
    }
}