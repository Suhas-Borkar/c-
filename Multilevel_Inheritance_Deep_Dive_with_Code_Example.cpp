#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
};

void student ::get_roll_number(void)
{
    cout << "The Roll Number is " << roll_number << endl;
};

class exam : public student
{
protected:
    float math, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
};

void exam ::get_marks()
{
    cout << "The  Marks obtaing in maths are " << math << endl;
    cout << "The  Marks obtaing in physics are " << physics << endl;
};

class result : public exam
{

    // float percentage = ();

public:
    float getpercentage();
};

float result ::getpercentage()
{
    cout << "Your Roll Number is " << roll_number << endl;
    cout << "Your Math subject marks is " << math <<endl;cout<< "    And Physics marks is " << physics << endl;
    cout << "Your Result is "<< (math + physics) / 2 << "%" << endl;
};

int main()
{
    result suhas;
    suhas.set_roll_number(21);
    suhas.set_marks(99.99,99.99);
    suhas.getpercentage();
};