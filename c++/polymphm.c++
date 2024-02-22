#include<iostream>
using namespace std;
class Animal{
public:
void Animalsound(){
    cout<<"The Animal make a sound : \n"<<endl;
}
};
class cat:public Animal{
    public:
    void Animalsound(){
        cout<<"the cat sound : mew mew \n"<<endl;
    }
};
class dog:public Animal{
    void Animalsound(){
        cout<<"the dog sound : bow bow \n"<<endl;
    }
};