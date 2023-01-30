#include <iostream>
#include <string.h>
using namespace std;

class suhas {
    string name;
    public:
    suhas & setsuhas(string name){
        this->name = name;
    };

    void get(){
        cout<<"Good Morning "<<name<<endl;
    }
};

int main(){
    suhas suhas;
    string name;
    cout<<"Enter Your Name "<<endl;
    cin>>name;
    suhas.setsuhas(name).get();
}