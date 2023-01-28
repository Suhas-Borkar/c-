// overview
//  1.Reusabolity is a very important feature of OOPs(Object oriental programing);
//  2.In C++ we can reuse a class and add additional feature to it;
//  3.Reusing Class Save time and money;
//  4.Reusing already tested and debugged class will save a lot of
//      efforts of developing and debugging the same thing again;

// What is Inheritance in c++
//  1. The concept of Reusabillity ic c++ is supported using Inheritance;
//  2. We can reuse The property of an existing class by inheritance from it;
//  3. The Existing class is called *Base Class*;
//  4. The new class which is inheritance is called *Derived Class*;
// syntax :-  Class {{Derived-class-name}}  :  {{visibility-mode}} {{base-class-name}}
// {
// class members/methods/etc.......
// }
// note := 1. Default visibility mode is private
//    2. Public Visibility mode : public member of the base class become public member of the derived class
//    2. private Visibility mode : public member of the base class become private member of the derived class
//    3. privated member naver inherited
//  5. Reusing Old Class Save Money And Time ;
//  6. There are defferent type of inheritance in c++;

// forms of inheritance

// 1. Single inheritance

// A drived class with only one base class
// A
// |
// |
// |
// B

//  2. Multiple Inheritance

// --> A derived class with more than one base class
// A          B
// |          |
// |          |
// |          |
// ------------
//       |
//       |
//       C

//  3. Hierarchical Inheritance

// Several derived classes from a single bass class
//           C
//       |
//       |
// ------------
// |          |
// |          |
// |          |
// A          B

//  4. Multilevel Inheritance

// --> Deriving a class from already derived class
// A
// |
// |
// |
// B
// |
// |
// C

//  5. Hybrid Inheritance
// Hybrid Inheritance is combination of nultiple inheritance and multilevel inheritance;
// A class is derived from two classes as in multiple Inheritance.
// However, one of the parrent classes is not a base class.
//       C
//       |
//       |
// ------------
// |          |
// |          |
// |          |
//     A          B
// |          |
// |          |
// |          |
// ------------
//       |
//       |
//       D

#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    int salary;

    employee(int inpId)
    {
        id = inpId;
        salary = 15;
    };
    void pri()
    {
        cout << id << endl;
        cout << salary << endl;
    }

    employee(){};
};

class programer : public employee
{
public:
    programer(int inpId)
    {
        id = inpId;
    };

    void pri()
    {
        cout << id << endl;
    }
};

int main()
{

    employee s(8);
    s.pri();

    programer n(12);
    n.pri();

    return 0;
}