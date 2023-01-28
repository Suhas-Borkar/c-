#include <iostream>
#include <string>

using namespace std;

class suhas
{
    int s;

public:
    int u;
    void sdata();
    int gdatas();
    int gdatau();
};

void suhas ::sdata()
{
    s = 13;
    u = 12;
};

int suhas ::gdatas()
{
    return s;
};

int suhas ::gdatau()
{
    return u;
};

class nil : public suhas
{
    int n;

public:
    void sum();
    void mul();
    void gdatan();
};

void nil ::sum()
{
    n = u + gdatas();
};

void nil ::mul()
{
    n = u * gdatas();
};

void nil ::gdatan()
{
    cout << "The value of S is " << gdatas() << endl;
    cout << "The value of U is " << u << endl;
    cout << "The value of N is " << n << endl;
}

int main()
{
    nil suh;
    suh.sdata();
    suh.sum();
    suh.gdatan();

    nil su;
    su.sdata();
    su.mul();
    su.gdatan();
};