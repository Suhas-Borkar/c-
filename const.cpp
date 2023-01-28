#include <iostream>
using namespace std;

int main()
{
            //ya madhe kadhi pan value change karata yeti int, float,char etc. saglyanchya.
    int a=4;
    cout<<"The Value of a : "<<a<<endl;
    a = 8;
    cout<<"The Value of a : "<<a<<endl;

            //ya madhe value does not change  
            //ya thikani b chi value fakt use kiva vachnaya sathi ahe tila change karta yet nahi 
    const int b=12;
    cout<<"The Value of b : "<<b<<endl;
    // b=15; //you will get error because of constant
    cout<<"The Value of b : "<<b<<endl;

    
}