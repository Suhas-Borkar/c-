#include <iostream>
using namespace std;

class suhas
{
    int a, b;

public:
    suhas()
    {
        a = 12;
        b = 2;
    }

    
    

    suhas(int x, int y=6)
    {
        a = x;
        b = y;
    };

    void prisu()
    {
        cout << "The no is " << a << " + " << b << endl;
    };
};

int main(){
    suhas a(1);
    a.prisu();

    suhas c;
    c.prisu();  

    suhas d(1,5);
    d.prisu();
};