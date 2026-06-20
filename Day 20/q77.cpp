//Write a program to Multiply matrices
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
    if (m2!=n1){
        cout<<"These matrices can't be multiplied";
        return 0;
    }
    vector<vector<int>> mat1(m1, vector<int>(n1));
    vector<vector<int>> mat2(m2, vector<int>(n2));
    vector<vector<int>> ans(m1, vector<int>(n2));
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
        for (int j=0;j<n2;j++){
            ans[i][j]=0;
            for (int k=0;k<n1;k++){
                ans[i][j]=ans[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    for (int i=0;i<m1;i++){
        for (int j=0;j<n2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}