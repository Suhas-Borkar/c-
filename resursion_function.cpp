#include <iostream>
using namespace std;

int factorial(int a)
{
    if (a<=1)
    {
        return 1;
    }
    return a * factorial(a-1);
    
};

int fibonachi(int a)
{
    if (a<2)
    {
        return 1;
    }
    return  fibonachi(a-1) + fibonachi(a-2) ; 
}

int main()
{
    int a;
    cout<<"Enter Number For Factorial : ";
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"the fibonachi of "<<a<<" is "<<fibonachi(a)<<endl;

}


