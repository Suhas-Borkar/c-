#include <iostream>
using namespace std;

/*
    syntax for intialization list in constructor:
    constructor (argument-list) : initilization-section{
        assignment+other code ; 
    }
*/  

class test{
    int a; // here the a is initialized first 
    int b; // here the b is initialized second
    public:
    // test(int x, int y): a(x),b(y)
    // {
    //      cout<<"Counstructor executed"<<endl;
    //     cout<<"The value of a is "<<a<<endl;
    //     cout<<" value of b is "<<b<<endl;   
    // }
    // test(int x, int y): a(x),b(y+x)
    // test(int x, int y): a(x+y),b(y)
    // test(int x, int y): a(x),b(y+a)
    // test(int x, int y): a(x),b(a * y)
    // test(int x, int y): a(x +y),b(y)
    // test(int x, int y): a(x+x),b(y)
    // test(int x, int y): a(x+b),b(y) // this will be create problem becuase of a will be initialized first 
    // test(int x, int y): a(x)
    test(int x, int y)
    {
        // b = y;
        a=x;
        b=y;
        cout<<"Counstructor executed"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<" value of b is "<<b<<endl;
    }
};

int main(){
    test(10 ,12);
}