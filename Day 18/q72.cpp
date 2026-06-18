//Write a program to Sort array in descending order
#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector <int> v;
    int n;
    cout<<"Enter how many elements  you want: ";
    cin>>n;
    for (int i=0;i<n;i++){
        int z;
        cout<<"Enter ",i+1," element: ";
        cin>>z;
        v.push_back(z);
    }
    cout<<"Here is your array "<<endl;
    for (int val:v){
        cout<<val<<" ";
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (v[j]<v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    cout<<endl<<"Here is your array after being sorted in descending order "<<endl;
    for (int val:v){
        cout<<val<<" ";
    }
}