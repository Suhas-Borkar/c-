#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
protected:
    int a, b;

public:
    void getdatasimple()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    };

    void performOperation()
    {
        cout << "The value of a + b is " << a + b << endl;
        cout << "The value of a - b is " << a - b << endl;
        cout << "The value of a * b is " << a * b << endl;
        cout << "The value of a / b is " << a / b << endl;
    };
};


class scientificCalculation
{
protected:
    int a, b;

public:
    void getdatascientific()
    {
        cout << "Enter the scientific value of a " << endl;
        cin >> a;
        cout << "Enter the scientific value of b " << endl;
        cin >> b;
    };

    void performsOperation()
    {
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of cos(b) is " << cos(b) << endl;
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of sin(b) is " << sin(b) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of exp(b) is " << exp(b) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;
        cout << "The value of tan(b) is " << tan(b) << endl;
    };
};

class hybridCalculator : public scientificCalculation , public simplecalculator{

};

int main(){
    // simplecalculator su;
    // su.getdata();
    // su.performOperation();

    // scientificCalculation ni;
    // ni.getdata();
    // ni.performsOperation();

    hybridCalculator su;
    su.getdatasimple();
    su.getdatascientific();
    su.performOperation();
    su.performsOperation();
}
