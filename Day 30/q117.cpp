#include<iostream>
#include<string>
using namespace std;
int main(){
    int rollNo[5];
    string name[5];
    string course[5];
    int count=0;
    int choice;
    do{
        cout<<"Student Record System"<<endl;
        cout<<"1. Add Student Record"<<endl;
        cout<<"2. Display All Records"<<endl;
        cout<<"3. Search Student by Roll No"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                if(count<5){
                    cout<<"Enter Roll Number: ";
                    cin>>rollNo[count];
                    cin.ignore();

                    cout<<"Enter Student Name: ";
                    getline(cin,name[count]);

                    cout<<"Enter Course Name: ";
                    getline(cin,course[count]);
                    count++;
                    cout<<"Student record added successfully."<<endl;
                }
                else{
                    cout<<"Student record limit reached."<<endl;
                }
                break;
            case 2:
                if(count==0){
                    cout<<"No records to display."<<endl;
                }
                else{
                    cout<<"\n--- Student Records ---"<<endl;
                    for(int i=0;i<count;i++){
                        cout<<"Roll No : "<<rollNo[i]<<endl;
                        cout<<"Name    : "<<name[i]<<endl;
                        cout<<"Course  : "<<course[i]<<endl;
                        cout<<"----------------------"<<endl;
                    }
                }
                break;
            case 3:
            {
                if(count==0){
                    cout<<"No records available."<<endl;
                    break;
                }
                int searchRoll;
                bool found=false;
                cout<<"Enter Roll Number to search: ";
                cin>>searchRoll;
                for(int i=0;i<count;i++){
                    if(rollNo[i]==searchRoll){
                        cout<<"\nRecord Found:"<<endl;
                        cout<<"Roll No : "<<rollNo[i]<<endl;
                        cout<<"Name    : "<<name[i]<<endl;
                        cout<<"Course  : "<<course[i]<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Student not found."<<endl;
                }
                break;
            }
            case 4:
                cout<<"Exiting Student Record System..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}