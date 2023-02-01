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
    // string st = "Hello sir,";
    // string st0 = "what are you doing.";
    string st1;
    // string st1 = " J1 zal ka";

    // opening files using construction and writting it
    // ofstream out("simple60.txt"); // write operator
    // out<<st;
    // out<<st0;

    // opening files using construction and reading it

    ifstream in("simple60.txt");
    // in>>st1;
    getline(in,st1);
    cout<<st1;
    return 0;
}