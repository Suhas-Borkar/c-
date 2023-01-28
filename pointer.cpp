#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int* b=&a;
    // & --> (address of) operator
    cout<<"the address of a is "<<&a<<endl;  //output madhe address print hoil
    cout<<"the address of a is "<<b<<endl;   //output madhe address print hoil

    // * --> (value at) defined address 
    cout<<"the value at address of a is "<<*b<<endl;
    cout<<"the value at address of a is "<<a<<endl;

    int** c=&b;
    // * --> pointer to pointer conection
    cout<<"the address b is "<<c<<endl;
    cout<<"the address b is "<<&b<<endl;

    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value at(value at(c)) c is "<<**c<<endl;


}