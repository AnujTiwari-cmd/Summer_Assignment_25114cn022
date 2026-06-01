//Write a program to Find factorial of a number. 
#include <iostream>
using namespace std;
int main() {
    int n;
    unsigned long long factorial = 1;
    cout << "Enter a positive number: ";
    cin >> n;
    if (n<0) {
        cout << "Factorial of a negative number doesn't exist.";
    } else {
        for(int i=1;i<=n;++i){
            factorial *=i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }
    return 0;
}
