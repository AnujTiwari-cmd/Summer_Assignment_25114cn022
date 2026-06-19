//Write a program to Find diagonal sum
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"What will be row size of matrix : ";
    cin>>m;
    cout<<"What will be column size of matrix : ";
    cin>>n;
    int sum=0;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"Enter elements of row "<<i+1<<" of matrix : ";
            cin>>mat[i][j];
            if (i==j){
                sum+=mat[i][j];
            }
        }
    }
    cout<<"Sum of diagonal elements will be "<<sum;
}