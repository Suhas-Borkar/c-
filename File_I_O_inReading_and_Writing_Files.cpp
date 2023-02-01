#include <iostream>
#include <fstream>
using namespace std;

// The usefull classes for working with file in c++ are:
// 1. fstreambase
// 2. ifstream  --> derived from fstreambase
// 3. ostream   --> derived from fstreambase

// In order work with files in c++, you will have to open it. primarily, there are 2 ways to open a file.
// 1. Using the constructor 
// 2. Using the member function open() of  the class  

int main()
{
    string st = "Hello Akshay sir,";
    string st1 = " J1 zal ka";

    // opening files using construction 
    ofstream out("simple60.txt");
    out<<st;
    out<<st1;
    return 0;
}