//Write a program to Selection sort
#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter how many elements you want: ";
    cin>>n;
    for (int i=0;i<n;i++){
        int z;
        cout<<"Enter element: ";
        cin>>z;
        v.push_back(z);
    }
    cout<<"Here is your array "<<endl;
    for (int val:v){
        cout<<val<<" ";
    }
    for (int i=0;i<n-1;i++){
        int mi=i;
        for (int j=i+1;j<n;j++){
            if (v[j]<v[i]){
                mi=j;
            }
        }
        if (mi!=i){
            swap(v[i],v[mi]);
        }
    }
    cout<<endl<<"Here is your array after being sorted "<<endl;
    for (int val:v){
        cout<<val<<" ";
    }
}