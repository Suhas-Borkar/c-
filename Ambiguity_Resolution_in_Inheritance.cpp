#include <iostream>
using namespace std;

class base1
{
public:
    void greed()
    {
        cout << "Hello , How are you" << endl;
    };
};

class base2
{
public:
    void greed()
    {
        cout << "Namaste , Kase ahat tumhi." << endl;
    };
};

class base3
{
public:
    void greed()
    {
        cout << "My Name Niraj. " << endl;
    };
};

class derived : public base1, public base2, public base3{
    public:
    void  greed(){
        base2 :: greed();
    };
};


class b{
    public:
    void say(){
        cout<<"Hello World"<<endl;
    };
};

class d : public b{
    public:
    // void say(){
    //     cout<<"Hello my beuifull people"<<endl;
    // };
};

int main()
{
    // Ambibuty 1
    //     base1 a;
    //     a.greed();
    //     base2 b;
    //     b.greed();
    //     base3 c;
    //     c.greed();
    //     derived s;
    //     s.greed();


    // Ambibuty 2
    b b;
    b.say();
    d d;
    d.say();
     
    return 0;
}