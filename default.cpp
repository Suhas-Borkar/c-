#include <iostream>

using namespace std;

float countmoney(int money, float factor=0.1)
{   
    return (money *factor)+money;
}

int main()
{
    int maney=10000;
    cout<<maney<<"The Maney in Account and you will recived"<<countmoney(maney,1.1)<<endl;
}