//Write a program to Find row-wise sum
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
    for (int i=0;i<n;i++){
        int sum=0;
        for (int j=0;j<m;j++){
            sum+=mat[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is: "<<sum<<endl;
    }
}