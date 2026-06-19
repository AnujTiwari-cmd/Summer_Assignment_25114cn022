//Write a program to Transpose matrix
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"What will be row size of matrix : ";
    cin>>m;
    cout<<"What will be column size of matrix : ";
    cin>>n;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"Enter elements of row "<<i+1<<" of matrix : ";
            cin>>mat[i][j];
        }
    }
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            ans[j][i]=mat[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}
