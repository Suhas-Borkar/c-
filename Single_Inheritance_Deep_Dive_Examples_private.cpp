#include <iostream>
#include <string>

using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    void setdata1();
    int getdata1();
    int getdata2();
};

void base ::setdata()
{
    data1 = 11;
    data2 = 22;
};

void base ::setdata1()
{
    data1 = 10;
    data2 = 20;
};

int base ::getdata1()
{
    return data1;
};
int base ::getdata2()
{
    return data2;
};

class derived : private base
{
    int data3;

public:
    void process();
    void process1();
    void display();
};

void derived ::process()
{
    setdata();
    data3 = data2 * getdata1();
};

void derived ::process1()
{
    setdata1();
    data3 = data2 * getdata1();
};

void derived ::display()
{
    cout << "Value of data1 is " << getdata1() << endl;
    cout << "Value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
};

int main()
{

    derived set;
    // set.setdata();
    set.process();
    set.display();

    derived set1;
    // set1.setdata1();
    set1.process1();
    set1.display();
}
