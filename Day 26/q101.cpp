//Write a program to Create number guessing game
#include <iostream>
using namespace std;
int main() {
    cout<<"LETS PLAY THE GUESSING GAME!!!!!!!!!!"<<endl;
    cout<<"In this game you have to guess the number"<<endl<<"Good luck!!!!!!!!!!"<<endl;
    int n=198;
    bool won=false;
    for(int i=0;i<5;i++) {
        cout<<"Enter your guess: ";
        int m;
        cin>>m;
        if(n==m) {
            cout<<"CONGRATULATIONS!!!!!! YOUR GUESS IS ABSOLUTELY RIGHT :)"<<endl;
            won=true;
            break;
        }
        cout<<"THE GUESS IS SLIGHTLY OFF :("<<endl;
        cout<<"Would you like a hint?"<<endl;
        cout<<"Enter 1 for yes and 0 for no: ";
        int h;
        cin>>h;
        if(h==1) {
            if(n>m)
                cout<<"Go for a higher number than before"<<endl;
            else
                cout<<"Go for a lower number than before"<<endl;
        }
        else{
            cout<<"Ok! Try again!!"<<endl;
        }
    }
    if(!won){
        cout<<"Game Over! The correct number was "<<n<<endl;
    }
    cout<<"Thank you for playing the game!"<<endl;
    return 0;
}