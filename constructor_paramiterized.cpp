#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);// constructor declaration 

    void pricom(void)
    {
        cout << "the no of a and b is " << a << " + " << b << endl;
    }
};

complex ::complex(int x, int y) // paramiterized constructor
{
    a = x;
    b = y;
};

int main()
{
    // implicit call
    complex c(1, 2);

    // explicit call 
    complex b = complex(3, 4);
    complex a=  complex(5, 6);
    c.pricom();
    b.pricom();
    a.pricom();
}