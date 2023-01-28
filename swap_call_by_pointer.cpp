#include <iostream>

using namespace std;

void swapPointer(int *a,int *b)   // call by pointer address
{
    int t=*a;
     *a=*b;
     *b=t;
}

void swapPointer2ndmethod(int  &x,int &y, int &a,int &b) // ya thikani swap kel ahe pan referance variable use karun
{
    int t=x;
    x=a;
    a=t;
    t=y;
    y=b;
    b=t;
}

// x=a
// y=b
// b=y
// a=x


int main()
{
    int x=9;
    int y=2;
    int a=1;
    int b=7;

    // swapPointer(&x,&y);   // call by referense using pointer address
    // cout<<"The Value of y is : "<<y<<endl;
    // cout<<"The Value of x is : "<<x<<endl;


    swapPointer2ndmethod(x,y,a,b); // ya thikani swap kel ahe pan referance variable use karun
    cout<<"The Value of x is : "<<x<<endl;
    cout<<"The Value of a is : "<<a<<endl;
    cout<<"The Value of y is : "<<y<<endl;
    cout<<"The Value of b is : "<<b<<endl;


}