//Write a program to Subtract matrices
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m1,n1,m2,n2;
    cout<<"What will be row size of matrix 1: ";
    cin>>m1;
    cout<<"What will be column size of matrix 1: ";
    cin>>n1;
    cout<<"What will be row size of matrix 2: ";
    cin>>m2;
    cout<<"What will be column size of matrix 2: ";
    cin>>n2;
    if (m1!=m2 || n1!=n2){
        cout<<"Only matrices with same number of rows and columns can be subtracted";
        return 0;
    }
    vector<vector<int>> mat1(m1, vector<int>(n1));
    vector<vector<int>> mat2(m2, vector<int>(n2));
    for (int i=0;i<m1;i++){
        for (int j=0;j<n1;j++){
            cout<<"Enter elements of row "<<i+1<<" of matrix 1: ";
            cin>>mat1[i][j];
        }
    }
    for (int i=0;i<m2;i++){
        for (int j=0;j<n2;j++){
            cout<<"Enter elements of row"<<i+1<<" of matrix 2: ";
            cin>>mat2[i][j];
        }
    }
    for (int i=0;i<m1;i++){
        for (int j=0;j<n1;j++){
            cout<<mat2[i][j]-mat1[i][j]<<" ";
        }
        cout<<endl;
    }
}