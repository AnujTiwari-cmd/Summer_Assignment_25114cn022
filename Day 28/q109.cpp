//Write a program to Create library management system
#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    int bookid;
    string title;
    string author;
    bool isissued=false;
    void addbook(){
        cout<<"Enter Book ID: ";
        cin>>bookid;
        cin.ignore();
        cout<<"Enter Book Title: ";
        getline(cin,title);
        cout<<"Enter Author Name: ";
        getline(cin,author);
        isissued=false;
        cout<<"Book added successfully"<<endl;
    }
    void issuebook(){
        if(!isissued){
            isissued=true;
            cout<<"Book issued successfully"<<endl;
        }
        else{
            cout<<"Book is already issued"<<endl;
        }
    }
    void returnbook(){
        if(isissued){
            isissued=false;
            cout<<"Book returned successfully"<<endl;
        }
        else{
            cout<<"Book was not issued"<<endl;
        }
    }
    void displaybook(){
        cout<<"\n--- Book Details ---"<<endl;
        cout<<"Book ID     : "<<bookid<<endl;
        cout<<"Title       : "<<title<<endl;
        cout<<"Author      : "<<author<<endl;
        cout<<"Book Status : ";
        if(isissued){
            cout<<"Issued"<<endl;
        }
        else{
            cout<<"Available"<<endl;
        }
    }
};
int main(){
    Book book;
    int choice;
    do{
        cout<<"\n--- Library Management System ---"<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Issue Book"<<endl;
        cout<<"3. Return Book"<<endl;
        cout<<"4. Display Book"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                book.addbook();
                break;
            case 2:
                book.issuebook();
                break;
            case 3:
                book.returnbook();
                break;
            case 4:
                book.displaybook();
                break;
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