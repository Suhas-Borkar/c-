#include <iostream>
using namespace std;

typedef struct company{
    int company_no;
    char company_name;
    float company_revenue;
}com;


int main()
{
    com nagebaba;
    nagebaba.company_no=1;
    nagebaba.company_name='n';
    nagebaba.company_revenue=12.901;
    cout<<"The Favrate charactor is "<<nagebaba.company_name<<" And Company No is "<<nagebaba.company_no<<" And Company Revenue is "<<nagebaba.company_revenue<<endl;
    
}
