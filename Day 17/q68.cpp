//Write a program to Find common elements
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v1={1,2,3,3,4,4,4,4,5,6};
    vector <int> v2={3,4,5,6,9,9,9,9,8};
    vector <int> v3={1,2,3,9,8,7,5};
    vector <int> ans;
    for (int i=0;i<v1.size();i++){
        bool f=false;
        for (int j=0;j<v2.size();j++){
            if (v1[i]==v2[j]){
                f=true;
                break;
            }
        }
        if (f){
            for (int k=0;k<v3.size();k++){
                if (v1[i]==v3[k]){
                    bool w=true;
                    for (int m=0;m<ans.size();m++){
                        if (v1[i]==ans[m]){
                            w=false;
                            break;
                        }
                    }
                    if (w){
                        ans.push_back(v1[i]);
                    }
                }
            }
        }
    }
    for (int val:ans){
        cout<<val<<" ";
    }
}