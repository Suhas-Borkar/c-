#include <iostream>

using namespace std;

class suhas
{
    private:
        int a,b,c;
        
    public:
        int d,e;
        void setData(int a1, int b1,int c1); //declaration
        void getData()
        {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        };
        void print1(){
            cout<<"the private number a is "<<a<<endl;
            cout<<"the private number b is "<<b<<endl;
            cout<<"the private number c is "<<c<<endl;
        };
};

void suhas :: setData(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    suhas abcd;
    abcd.d=34;
    abcd.e=34;
    abcd.setData(1,3,4);
    abcd.getData();
    abcd.print1();
    return 0;

}