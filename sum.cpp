#include <iostream>

using namespace std;

int global=6;
int global11=9;

void sum1(int global ,int global11)  //jar function la main madhun value pass nasati keli tar ti value global vadhun ghetli aste  
{
    cout<< global <<" sjahskjk\n"; 
    cout<< global11 <<" sjahskjk\n"; 
}

int main()
{
    int a=23;
    int b=30;
    
    cout<<"This Is Tutorial No 4 & Value of a is "<<a<<". Value of b is "<<b<<",sum of a and b : "<<a+b<< "\n";

    int sum = a+b;
    cout<<"Sum is : "<<sum<<"\n";

    float pi = 3.14;
    cout<<"The value of pi : "<<pi<<"\n";

    int global=2;
    int global11=4;

    sum1(global,global11); //ya thikani value pass keli keli ahe  

    
    cout<<"global : "<<global;
    cout<<" global : "<<global11;
}