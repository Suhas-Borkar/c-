#include <iostream>

using namespace std;

class myClass{
    protected:
    int no;
    char name;
    public:

    myClass(int a, char b){
        no = a;
        name = b;
    }

    void display(){
        cout<<no<<name;
    }
};

int main(){
    myClass s(12,'s');
    s.display();
}