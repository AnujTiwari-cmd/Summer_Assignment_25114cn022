//Write a program to Merge two sorted arrays
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n1,n2;
    cout<<"Enter size of first array: ";
    cin>>n1;
    vector<int> a;
    cout<<"Enter sorted elements of first array: ";
    for (int i=0;i<n1;i++){
        int z;
        cin>>z;
        a.push_back(z);
    }
    cout<<"Enter size of second array: ";
    cin>>n2;
    vector<int> b;
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++){
        int z;
        cin>>z;
        b.push_back(z);
    }
    vector<int> merged;
    int i=0,j=0;
    while (i<n1 && j<n2) {
        if (a[i]<=b[j]){
            merged.push_back(a[i++]);
        }
        else{
            merged.push_back(b[j++]);
        }
    }
    while (i<n1)
        merged.push_back(a[i++]);
    while (j<n2)
        merged.push_back(b[j++]);
    cout << "Merged Array: ";
    for (int val:merged){
        cout <<val<< " ";
    }
}