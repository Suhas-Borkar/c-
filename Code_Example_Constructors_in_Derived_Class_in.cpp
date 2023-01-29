#include <iostream>
using namespace std;
// Order of Execution
/*
Case1:
class b : public a{
    Order of execution of constructor -> first a() then b();
}


Case2:
class a : public b , public c{
    Order of excution of constructor -> first b() then c() and then a();
}

Case3:
class a : public b , virtual public c{
    Order of excution of constructor -> first c() then b() and then a();
    ===> the first excution is c because of c is virtual that the first priority has given.
}
*/
class Base1
{
protected:
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "The Base1 called by constructor " << endl;
    };

    void printBase1()
    {
        cout << "The Value of data1 is " << data1 << endl;
    }
};

class Base2
{
protected:
    int data2;

public:
    Base2(int a)
    {
        data2 = a;
        cout << "The Base2 called by constructor " << endl;
    };

    void printBase2()
    {
        cout << "The Value of data2 is " << data2 << endl;
    }
};


class Base3
{
protected:
    int data3;

public:
    Base3(int a)
    {
        data3 = a;
        cout << "The Base3 called by constructor " << endl;
    };

    void printBase3()
    {
        cout << "The Value of data2 is " << data3 << endl;
    }
};

class Derived : public Base3, public Base2, public Base1
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d ,int e) :Base3(e), Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor call"<<endl;
    };

    void printDerived(){
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
}; 


int main()
{
    Derived suhas(1,3,4,5,6);
    suhas.printBase1();
    suhas.printBase2();
    suhas.printBase3();
    suhas.printDerived();
};