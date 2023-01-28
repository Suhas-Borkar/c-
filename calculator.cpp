#include <iostream>
using namespace std;

class num
{
protected:
    double num1, num2;

public:
    void setnum(double, double);
    void getnum();
};

void num ::setnum(double a, double b)
{
    num1 = a;
    num2 = b;
};

void num ::getnum()
{
    cout << "the first number is " << num1 << endl;
    cout << "the first number is " << num2 << endl;
};

class su : public num
{
    public:
    void sum()
    { 
        cout<<"the sum is "<<num1+num2<<endl;
    }
};

class mu : public su
{
    public:
    void mul()
    { 
        cout<<"the mul is "<<num1*num2<<endl;
    }
};

class di : public mu
{
    public:
    void div()
    { 
        cout<<"the division is "<<num1/num2<<endl;
    }
};

int main(){
    di s;
    s.setnum(10,12);
    s.getnum();
    s.sum();
    s.div();
    s.mul();


}