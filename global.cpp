#include <iostream>
using namespace std;
int glo=45;

int main()
{
    
    int glo,bal;
    cout<<"Enter glo Value : "<<endl;
    cin>>glo;
    cout<<"Enter bal Value"<<endl;
    cin>>bal;

    int sum = glo + bal;
    cout<<"sum : "<<sum<<endl;

    cout<<"local glo value : "<<glo<<endl;
    cout<<"global glo value : "<<::glo<<endl;  // global value ghenyasathi :: use karayche 

    float d=34.4f;
    long double e=34.4;

    cout<<"The float value of d is : "<<d<<". The long double value of e is : "<<e<<endl;
}