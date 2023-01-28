#include <iostream>
using namespace std;

int main()
{
    int array[]={12,21,32,43,54};
    int* p = array;

    cout<<"Array of Value is *(p+0) :"<<*(p+0)<<endl;
    cout<<"Array of Value is *(p+1) :"<<*(p+1)<<endl;
    cout<<"Array of Value is *(p+2) :"<<*(p+2)<<endl;
    cout<<"Array of Value is *(p+3) :"<<*(p+3)<<endl;
    cout<<"Array of Value is *(p+4) :"<<*(p+4)<<endl;

    int* a=array;
    cout<<*(a++)<<endl; //output is 12
    cout<<*(++a)<<endl; //output is 32


}