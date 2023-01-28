#include <iostream>
using namespace std;

int main()
{
    int a=45;
    float b=45.56;

    cout<<"value of a in float"<<(float)a <<endl;
    cout<<"value of a in float"<<float(a) <<endl;

    cout<<"value of b in int"<<(int)b<<endl;
    cout<<"value of b in int"<<int(b)<<endl;

    int c=int(b);
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;

}