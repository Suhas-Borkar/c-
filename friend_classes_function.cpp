#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void printdata()
    {
        cout << "The Number is " << a << " + " << b << "i" << endl;
    };
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c4, c5, sum;
    c4.setdata(1, 4);
    c5.setdata(5, 8);

    sum = sumcomplex(c4, c5);
    sum.printdata();

    sumcomplex(c4, c5).printdata();
}