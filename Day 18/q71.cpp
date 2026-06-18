//Write a program to Binary search
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
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
    sort(v.begin(),v.end());
    int st=0,e=n-1,t;
    cout<<"Which element do you want to find? ";
    cin>>t;
    while (st<=e){
        int m=st+(e-st)/2;
        if (v[m]==t){
            cout<<"It is at index "<<m;
            break;
        }
        else if(t>v[m]){
            st=m+1;
        }
        else{
            e=m-1;
        }
    }
}
