#include<iostream>
#include<string>
using namespace std;
int main(){
    int bookId[5];
    string bookName[5];
    bool isIssued[5];
    int count=0;
    int choice;
    do{
        cout<<"Library System"<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display Books"<<endl;
        cout<<"3. Issue Book"<<endl;
        cout<<"4. Return Book"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                if(count<5){
                    cout<<"Enter Book ID: ";
                    cin>>bookId[count];
                    cin.ignore();
                    cout<<"Enter Book Name: ";
                    getline(cin,bookName[count]);
                    isIssued[count]=false;
                    count++;
                    cout<<"Book added successfully."<<endl;
                }
                else{
                    cout<<"Library is full."<<endl;
                }
                break;
            case 2:
                if(count==0){
                    cout<<"No books available."<<endl;
                }
                else{
                    cout<<"\n--- Book List ---"<<endl;
                    for(int i=0;i<count;i++){
                        cout<<"Book ID   : "<<bookId[i]<<endl;
                        cout<<"Book Name : "<<bookName[i]<<endl;
                        cout<<"Status    : ";
                        if(isIssued[i]){
                            cout<<"Issued"<<endl;
                        }
                        else{
                            cout<<"Available"<<endl;
                        }
                        cout<<"-----------------------"<<endl;
                    }
                }
                break;
            case 3:
            {
                if(count==0){
                    cout<<"No books available."<<endl;
                    break;
                }
                int issueId;
                bool issued=false;
                cout<<"Enter Book ID to issue: ";
                cin>>issueId;
                for(int i=0;i<count;i++){
                    if(bookId[i]==issueId){
                        if(!isIssued[i]){
                            isIssued[i]=true;
                            cout<<"Book issued successfully."<<endl;
                        }
                        else{
                            cout<<"Book is already issued."<<endl;
                        }
                        issued=true;
                        break;
                    }
                }
                if(!issued){
                    cout<<"Book not found."<<endl;
                }
                break;
            }
            case 4:
            {
                if(count==0){
                    cout<<"No books available."<<endl;
                    break;
                }
                int returnId;
                bool returned=false;
                cout<<"Enter Book ID to return: ";
                cin>>returnId;
                for(int i=0;i<count;i++){
                    if(bookId[i]==returnId){
                        if(isIssued[i]){
                            isIssued[i]=false;
                            cout<<"Book returned successfully."<<endl;
                        }
                        else{
                            cout<<"Book was not issued."<<endl;
                        }
                        returned=true;
                        break;
                    }
                }
                if(!returned){
                    cout<<"Book not found."<<endl;
                }
                break;
            }
            case 5:
                cout<<"Exiting Library System..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=5);
    return 0;
}