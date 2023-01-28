#include <iostream>
using namespace std;

class a
{
    int x, y, z;

public:
    a(int a = 1, int b = 2, int c = 3)
    {
        x = a;
        y = b;
        z = c;
    };

    void print();
};

void a ::print(void)
{
    cout << "The No of X and Y is " << x << " , " << y << " and " << z << endl;
}

int main()
{
    a s;
    s.print();

    a b(5, 15);
    b.print();

    a c(20, 30, 40);
    c.print();
};