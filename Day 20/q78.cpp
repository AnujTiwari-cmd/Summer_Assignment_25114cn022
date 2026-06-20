//Write a program to Check symmetric matrix
#include <vector>
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"What will be row size of matrix : ";
    cin>>m;
    cout<<"What will be column size of matrix : ";
    cin>>n;
    if (m!=n){
        cout<<"Only square matrices can be symmetric";
        return 0;
    }
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"Enter elements of row "<<i+1<<" of matrix : ";
            cin>>mat[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (mat[i][j]!=mat[j][i]){
                cout<<"Matrix is not symmetric";
                return 0;
            }
        }
    }
    cout<<"Matrix is symmetric";
}
