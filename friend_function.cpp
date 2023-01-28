#include <iostream>
using namespace std;

class Y;

class X
{
    int num;

public:
    void setdata(int n0){
        num = n0;
    }

    friend void add(X,Y);
};

class Y{
    int num2;
    public:
    void setdata(int n1){
        num2= n1;
    }
    friend void add(X,Y);

};


void add(X n0,Y n1){
    cout<<"the Summing of X no And Y no : "<< n0.num + n1.num2<<endl;
}

int main(){
    X s1;
    s1.setdata(2);

    Y s2;
    s2.setdata(8);

    add(s1, s2);

    return 0;
}