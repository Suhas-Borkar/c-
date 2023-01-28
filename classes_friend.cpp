#include <iostream>
using namespace std;

class complex; // forward declaration

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    };
    int sumRealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    // induvidually declaring another class function
    //  friend int calculator :: sumRealcomplex(complex ,complex );
    //  friend int calculator :: sumcompcomplex(complex ,complex );

    // declaring entier another class
    friend class calculator;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    };

    void printdata()
    {
        cout << "the no is " << a << " + " << b << "i" << endl;
    };
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex cal, ses, sum;
    cal.setdata(1, 2);
    ses.setdata(4, 8);
    sum.setdata(16, 82);

    calculator clak;

    int res = clak.sumRealcomplex(cal, ses);
    cout << "The sum of real part of cal and ses is " << res << endl;

    int res1 = clak.sumcompcomplex(cal, ses);
    cout << "The sum of real part of cal and ses is " << res1 << endl;

    int res2 = clak.sumcompcomplex(sum, ses);
    cout << "The sum of real part of cal and ses is " << res2 << endl;
}