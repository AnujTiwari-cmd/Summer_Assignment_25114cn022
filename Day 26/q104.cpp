//Write a program to Create quiz application
#include <iostream>
using namespace std;
int main() {
    int score=0;
    char ans;
    cout<<" GENERAL KNOWLEDGE QUIZ "<<endl;
    cout<<"1. What is the population of India?"<<endl;
    cout<<"a) 1.2 billion"<<endl;
    cout<<"b) 1.4 billion"<<endl;
    cout<<"c) 350 million"<<endl;
    cout<<"d) 1.1 billion"<<endl;
    cout<<"Your answer: ";
    cin>>ans;
    if(ans=='b'||ans=='B'){
        score++;
    }
    cout<<"2. Which is largest country by land area in the world?"<<endl;
    cout<<"a) USA"<<endl;
    cout<<"b) China"<<endl;
    cout<<"c) Russia"<<endl;
    cout<<"d) Brazil"<<endl;
    cout<<"Your answer: ";
    cin>>ans;
    if(ans=='c'||ans=='C'){
        score++;
    }
    cout<<"3. What is smallest planet in the solar system?"<<endl;
    cout<<"a) Pluto"<<endl;
    cout<<"b) Venus"<<endl;
    cout<<"c) Mars"<<endl;
    cout<<"d) Mercury"<<endl;
    cout<<"Your answer: ";
    cin>>ans;
    if(ans=='d'||ans=='D'){
        score++;
    }
    cout<<"4. Who was creator of c++?"<<endl;
    cout<<"a) Linus Torvalds"<<endl;
    cout<<"b) Tim Berners Lee"<<endl;
    cout<<"c) Bjarne Stroustrup"<<endl;
    cout<<"d) Bill Gates"<<endl;
    cout<<"Your answer: ";
    cin>>ans;
    if(ans=='c'||ans=='C'){
        score++;
    }
    cout<<"\n5. Which among of the following countries did not colonized india?"<<endl;
    cout<<"a) Britain"<<endl;
    cout<<"b) France"<<endl;
    cout<<"c) Russia"<<endl;
    cout<<"d) Denmark"<<endl;
    cout<<"Your answer: ";
    cin>>ans;
    if(ans=='c'||ans=='C'){
        score++;
    }
    cout<<"\n\t\t\t<<< QUIZ RESULT >>>"<<endl;
    cout<<"Total Questions: 5"<<endl;
    cout<<"Correct Answers: "<<score<<endl;
    cout<<"Score: "<<score<<"/5"<<endl;

    if(score==5){
        cout<<"Excellent!"<<endl;
    }
    else if(score>=3){
        cout<<"Good job!"<<endl;
    }
    else{
        cout<<"Better luck next time!"<<endl;
    }

    return 0;
}