#include<iostream>
#include<string>
using namespace std;
class Product{
    public:
    int productId;
    string productName;
    int quantity;
    double price;
    void addProduct(){
        cout<<"Enter Product ID: ";
        cin>>productId;
        cin.ignore();
        cout<<"Enter Product Name: ";
        getline(cin,productName);
        cout<<"Enter Quantity: ";
        cin>>quantity;
        cout<<"Enter Price: ";
        cin>>price;
        cout<<"Product added successfully."<<endl;
    }
    void updateStock(){
        int option;
        int qty;
        cout<<"1. Add Stock"<<endl;
        cout<<"2. Remove Stock"<<endl;
        cout<<"Choose option: ";
        cin>>option;
        cout<<"Enter quantity: ";
        cin>>qty;
        if(option==1){
            quantity+=qty;
            cout<<"Stock added successfully."<<endl;
        }
        else if(option==2){
            if(qty<=quantity){
                quantity-=qty;
                cout<<"Stock removed successfully."<<endl;
            }
            else{
                cout<<"Insufficient stock."<<endl;
            }
        }
        else{
            cout<<"Invalid option."<<endl;
        }
    }
    void displayProduct(){
        cout<<"----------------------------"<<endl;
        cout<<"Product ID   : "<<productId<<endl;
        cout<<"Product Name : "<<productName<<endl;
        cout<<"Quantity     : "<<quantity<<endl;
        cout<<"Price        : "<<price<<endl;
    }
};
int main(){
    Product products[5];
    int count=0;
    int choice;
    do{
        cout<<"<<< Inventory Management System >>>"<<endl;
        cout<<"1. Add Product"<<endl;
        cout<<"2. Update Stock"<<endl;
        cout<<"3. Display Products"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                if(count<5){
                    products[count].addProduct();
                    count++;
                }
                else{
                    cout<<"Inventory is full."<<endl;
                }
                break;
            case 2:
            {
                if(count==0){
                    cout<<"No products available."<<endl;
                    break;
                }
                int id;
                bool found=false;
                cout<<"Enter Product ID to update: ";
                cin>>id;
                for(int i=0;i<count;i++){
                    if(products[i].productId==id){
                        products[i].updateStock();
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Product not found."<<endl;
                }
                break;
            }
            case 3:
                if(count==0){
                    cout<<"No products in inventory."<<endl;
                }
                else{
                    for(int i=0;i<count;i++){
                        products[i].displayProduct();
                    }
                }
                break;
            case 4:
                cout<<"Exiting Inventory Management System..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
    while (choice!=4);
    return 0;
}