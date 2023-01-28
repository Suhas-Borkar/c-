#include <iostream>
using namespace std;
 
inline int product(int a,int b)
{
  return a+b;  
};

int staticproduct(int a,int b)
{
   static int c=0;
   c=c+1;
   return a*b+c;
};

int main()
{
    int a,b;
    cout<<"Enter A and B value :";
    cin>>a>>b;
    cout<<"The Static is "<<staticproduct(a,b)<<endl;
    cout<<"The Static is "<<staticproduct(a,b)<<endl;
    cout<<"The Static is "<<staticproduct(a,b)<<endl;
    cout<<"The Static is "<<staticproduct(a,b)<<endl;
    cout<<"The Static is "<<staticproduct(a,b)<<endl;
    cout<<"The Static is "<<staticproduct(a,b)<<endl;
    cout<<"The Sum is "<<product(a,b)<<endl;
    return 0;
}