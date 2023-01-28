#include <iostream>
using namespace std;

class employee
{
    
    int id;
    int salary;
public:
    void setdata(void){
        salary = 123;
        cout<<"Enter ID : "<<endl;
        cin>>id;
    }

    void getdata(void){
        cout<<"Employee id is "<<id<<endl;
    }
};

int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }
    
}