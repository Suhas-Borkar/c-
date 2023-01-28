#include <iostream>
using namespace std;

class nilesh;

class suhas
{
    int su;
    friend class nilesh;
    friend void exchage(suhas &, nilesh &);

public:
    void setsu(int h)
    {
        su = h;
    }

    void prisu()
    {
        cout << "the no of suhas is : " << su << endl;
    }
};

class nilesh
{
    int nil;
    friend class suhas;
    friend void exchage(suhas &, nilesh &);

public:
    void setnil(int e)
    {
        nil = e;
    }
    void prinil(void)
    {
        cout << "The no of nilesh is : " << nil << endl;
    }
};

void exchage(suhas &a, nilesh &b)
{
    int ex = a.su;
    a.su = b.nil;
    b.nil = ex;
}

int main()
{
    suhas as;
    as.setsu(24);
    as.prisu();

    nilesh sh;
    sh.setnil(26);
    sh.prinil();
    exchage(as, sh);
    as.prisu();
    sh.prinil();
}