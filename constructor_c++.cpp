#include <iostream>
using namespace std;

class complex
{
    int a, b;
    // creating a constructor
public:
    // constructor is a special member function with same name as a class.
    // constructor is a automatically invoked.
    // it is a initializ the objects of its class.

    complex(void); // constuctor declaration

    void pricom(void)
    {
        cout << "The Value of a and b is " << a << " + " << b << "i" << endl;
    };
};

complex ::complex(void)
{
    a = 10;
    b = 10;
    // cout<<"Hello World"<<endl;
};

int main()
{
    complex c1, c2, c3;
    c1.pricom();
    c2.pricom();
    c3.pricom();
};

// Property of Constructor
// 1. it should be declaire in a public class
// 2. they are automatically invoked whenever the object is created.
// 3. they cannot return values and do not have return types.
// 4. it can have default arguments.
// 5. we cannot refer to their address.