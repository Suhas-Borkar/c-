#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c=a+b;
    return c;
};
int mul(int a,int b)
{
    int c=a*b;
    return c;
};

void sub()
{
    
    cout<<"Helllo Good Morning";
    
};

int main()
{
    int num1;
    int num2;
    cout<<"Enter 1st Number : ";cin>>num1;
    cout<<"Enter 1st Number : ";cin>>num2;
    cout<<"The Sum is "<<sum(num1,num2)<<endl;
    cout<<"The Multiplication is"<<mul(num1,num2)<<endl;
    sub();
}
