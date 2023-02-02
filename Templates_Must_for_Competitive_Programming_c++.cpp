#include <iostream>
#include <fstream>

using namespace std;

template <typename T>
T Max(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x = 5, y = 10;
    cout << "Max of " << x << " and " << y << " is " << Max(x, y) << endl;
    
    double a = 2.5, b = 3.5;
    cout << "Max of " << a << " and " << b << " is " << Max(a, b) << endl;
    
    return 0;
}
