#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(10);
    int size=0;
    int choice;
    do{
        cout<<"Menu Driven Array Operations"<<endl;
        cout<<"1. Insert Elements"<<endl;
        cout<<"2. Display Array"<<endl;
        cout<<"3. Find Maximum"<<endl;
        cout<<"4. Find Minimum"<<endl;
        cout<<"5. Search Element"<<endl;
        cout<<"6. Sort Array"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"How many elements? ";
                cin>>size;
                if(size>10){
                    cout<<"Maximum size is 10."<<endl;
                    size=0;
                    break;
                }
                for(int i=0;i<size;i++){
                    cout<<"Enter element "<<i+1<<": ";
                    cin>>arr[i];
                }
                break;
            case 2:
                if(size==0){
                    cout<<"Array is empty."<<endl;
                }
                else{
                    cout<<"Array Elements: ";
                    for(int i=0;i<size;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                }
                break;
            case 3:
                if(size==0){
                    cout<<"Array is empty."<<endl;
                }
                else{
                    int max=arr[0];
                    for(int i=1;i<size;i++){
                        if(arr[i]>max){
                            max=arr[i];
                        }
                    }
                    cout<<"Maximum Element: "<<max<<endl;
                }
                break;
            case 4:
                if(size==0){
                    cout<<"Array is empty."<<endl;
                }
                else{
                    int min=arr[0];
                    for(int i=1;i<size;i++){
                        if(arr[i]<min){
                            min=arr[i];
                        }
                    }
                    cout<<"Minimum Element: "<<min<<endl;
                }
                break;
            case 5:
            {
                if(size==0){
                    cout<<"Array is empty."<<endl;
                }
                else{
                    int key;
                    bool found=false;
                    cout<<"Enter element to search: ";
                    cin>>key;
                    for(int i=0;i<size;i++){
                        if(arr[i]==key){
                            cout<<"Element found at index "<<i<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(!found){
                        cout<<"Element not found."<<endl;
                    }
                }
                break;
            }
            case 6:
                if(size==0){
                    cout<<"Array is empty."<<endl;
                }
                else{
                    for(int i=0;i<size-1;i++){
                        for(int j=i+1;j<size;j++){
                            if(arr[i]>arr[j]){
                                int temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                            }
                        }
                    }
                    cout<<"Array sorted successfully."<<endl;
                }
                break;
            case 7:
                cout<<"Exiting Array Operations System..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=7);
    return 0;
}