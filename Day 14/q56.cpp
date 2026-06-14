//Write a program to Find duplicates in array
#include <iostream>
#include <unordered_set>
#include <array>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,5,6,7,9};
    unordered_set <int> s;
    for (int i=0;i<9;i++){
        if (s.find(arr[i])!=s.end()){
            cout<<arr[i]<<endl;
        }
        s.insert(arr[i]);
    }
}