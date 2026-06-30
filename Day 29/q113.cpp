//Write a program to Create menu-driven calculator
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"\t\t\tWelcome to the calculator"<<endl;
    cout<<"Make a choice on the basis of the operation required\n\n";
    cout<<"Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\nEnter 5 for Modulus\nEnter 6 for to the Power\nEnter 7 for Factorial\nEnter 8 for EXIT\n";
    cout<<"Enter your choice\n";
    int n;
    cin>>n;
    switch(n){
        case 1:
        {
            cout<<"Enter the number of elements who's sum is to be calculated"<<endl;
            int m;
            cin>>m;
            double a[m];
            cout<<"Enter the elements"<<endl;
            double s=0.0;
            for(int i=0;i<m;i++){
                cin>>a[i];
            }
            for(int i=0;i<m;i++){
                s+=a[i];
            }
            cout<<"The output is "<<s<<endl;
        }
        break;
        case 2:
        {
            cout<<"Enter the two elements"<<endl;
            double m,o;
            cin>>m>>o;
            double s=m-o;
            cout<<"The output is "<<s<<endl;
        }
        break;
        case 3:
        {
            cout<<"Enter the number of elements which are to be multiplied"<<endl;
            int m;
            cin>>m;
            double a[m];
            cout<<"Enter the elements"<<endl;
            double s=1.0;
            for(int i=0;i<m;i++){
                cin>>a[i];
            }
            for(int i=0;i<m;i++){
                s*=a[i];
            }
            cout<<"The output is "<<s<<endl;
        }
        break;
        case 4:
        {
            cout<<"Enter the number and the divisor"<<endl;
            double m,o;
            cin>>m>>o;
            double s=m/o;
            cout<<"The output is "<<s<<endl;
        }
        break;
        case 5:
        {
            cout<<"Enter the number and the divisor"<<endl;
            double m,o;
            cin>>m>>o;
            int s=(int)m%(int)o;
            cout<<"The output is "<<s<<endl;
        }
        break;
        case 6:
        {
            cout<<"Enter the number and the power"<<endl;
            double m,o;
            cin>>m>>o;
            double s=pow(m,o);
            cout<<"The output is "<<s<<endl;
        }
        break;
        case 7:
        {
            cout<<"Enter the number"<<endl;
            int m;
            cin>>m;
            double s=1.0;
            for(int i=1;i<=m;i++){
                s*=i;
            }
            cout<<"The output is "<<s<<endl;
        }
        break;
        case 8:
            cout<<"\t\t\t<<<EXIT THE PROGRAM. THANKYOU FOR THE CHOICE>>>"<<endl;
            break;

        default:
            cout<<"The choice made is invalid. Kindly try again"<<endl;
    }
    return 0;
}