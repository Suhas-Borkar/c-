#include <iostream>
using namespace std;

int main()
{
    int num[]={12,23,45,65,12,23,45,65};
    for (int i = 0; i < 8; i++)
    {
        cout<<"The Num"<<i<<" is "<<num[i]<<endl;
    }
    
    int mmarks[4];
    mmarks[0]=110;
    mmarks[1]=120;
    mmarks[2]=130;
    mmarks[3]=140;
    cout<<"Tha mark is : "<<endl;
    cout<<"1) sub :"<<mmarks[0]<<endl;
    cout<<"2) sub :"<<mmarks[1]<<endl;
    cout<<"3) sub :"<<mmarks[2]<<endl;
    cout<<"4) sub :"<<mmarks[3]<<endl;
    cout<<num[0]<<endl;
    cout<<num[1]<<endl;
    cout<<num[2]<<endl;
    cout<<num[3]<<endl;
    cout<<num[4]<<endl;
    cout<<num[5]<<endl;
    cout<<num[6]<<endl;
    cout<<num[7]<<endl;
}