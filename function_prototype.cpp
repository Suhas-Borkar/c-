#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c=a+b;
    return c;
};
int mul(int a,int b)
// formal parameters is definded in function 
//formal parameters a and b is teking value of actual parameters num1 and num2 ;

{
    int c=a*b;
    return c;
}

int main()
{
    int num1;
    int num2;
    // actual parameters is defines in main function; 
    //num1 and num2 is actual parameters 
    cout<<"Enter 1st Number : ";cin>>num1;
    cout<<"Enter 1st Number : ";cin>>num2;
    cout<<"The Sum is "<<sum(num1,num2)<<endl;
    cout<<"The Multiplication is"<<mul(num1,num2)<<endl;
}