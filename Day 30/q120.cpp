#include<iostream>
#include<string>
using namespace std;
string habits[10];
bool status[10];
int count=0;
void addhabit(){
    if(count>=10){
        cout<<"Habit list is full!"<<endl;
        return;
    }
    cin.ignore();
    cout<<"Enter habit name: ";
    getline(cin,habits[count]);
    status[count]=false;
    count++;
    cout<<"Habit added successfully!"<<endl;
}
void viewhabits(){
    if(count==0){
        cout<<"No habits to display."<<endl;
        return;
    }
    cout<<"\nHabit List:"<<endl;
    for(int i=0;i<count;i++){
        cout<<i+1<<". "<<habits[i]<<" - ";
        if(status[i]){
            cout<<"Completed"<<endl;
        }
        else{
            cout<<"Pending"<<endl;
        }
    }
}
void markcompleted(){
    if(count==0){
        cout<<"No habits available."<<endl;
        return;
    }
    viewhabits();
    int choice;
    cout<<"Enter habit number to mark completed: ";
    cin>>choice;
    if(choice>=1&&choice<=count){
        status[choice-1]=true;
        cout<<"Habit marked as completed!"<<endl;
    }
    else{
        cout<<"Invalid choice!"<<endl;
    }
}

void showprogress(){
    if(count==0){
        cout<<"No habits available."<<endl;
        return;
    }
    int completed=0;
    for(int i=0;i<count;i++){
        if(status[i]){
            completed++;
        }
    }
    double percent=(completed*100.0)/count;
    cout<<"Completion Progress: "<<percent<<"%"<<endl;
}
int main(){
    int choice;
    do{
        cout<<"<<< HABIT TRACKER MENU >>>"<<endl;
        cout<<"1. Add Habit"<<endl;
        cout<<"2. Mark Habit as Completed"<<endl;
        cout<<"3. View All Habits"<<endl;
        cout<<"4. View Progress"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                addhabit();
                break;
            case 2:
                markcompleted();
                break;
            case 3:
                viewhabits();
                break;
            case 4:
                showprogress();
                break;
            case 5:
                cout<<"Thank you for using Habit Tracker "<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=5);
    return 0;
}