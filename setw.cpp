#include <iostream>
#include <iomanip>


// setw yamadhe bill order nusar bill distat





using namespace std;

int main()
{
    int a=2, b=103, c=10408;

    cout<<"The Value Of a without setw is : "<<a<<endl;
    cout<<"The Value Of b without setw is : "<<b<<endl;
    cout<<"The Value Of c without setw is : "<<c<<endl;

    cout<<"The Value Of a with setw is : "<<setw(5)<<a<<endl;
    cout<<"The Value Of b with setw is : "<<setw(5)<<b<<endl;
    cout<<"The Value Of c with setw is : "<<setw(5)<<c<<endl;
    // ==> The Value Of a with setw is :     2
    // The Value Of b with setw is :   103
    // The Value Of c with setw is : 10408

}