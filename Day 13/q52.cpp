//Write a program to Count even and odd elements
#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,9> arr={1,2,3,4,5,5,6,7,9};
    int even=0,odd=0;
    for (int i=0;i<9;i++){
        if (arr[i]%2==0){
            even++;
        }
        if (arr[i]%2 != 0){
            odd++;
        }
    }
    cout<<"No. of even elements are: "<<even<<endl;
    cout<<"No. of odd elements are: "<<odd;
}