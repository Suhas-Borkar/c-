#include <iostream>

using namespace std;

void swap(int a,int b)
{
    int t=a;
    a=b;
    b=a;
}

int main()
{
    int x=12;
    int y=11;
    cout<<"The Value Of x is :"<<x<<endl;
    swap(x,y); //yani copy karun apli vallue dileli ahe ryamule value swap nahi hot 
    cout<<"The Value Of swap x is :"<<x<<endl;
}