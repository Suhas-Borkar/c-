#include <iostream>
using namespace std;

class complex
{
    int real, imaginery;

public:
    // complex(int a, int b) : real(a), imaginery(b)
    // {
    //     cout << "The value real is " << real << endl;
    //     cout << "The value imaginery is " << imaginery << endl;
    // }

    void setdata(int a, int b)
    {
        real = a;
        imaginery = b;
    }

    void getdata(){
        cout << "The value real is " << real << endl;
        cout << "The value imaginery is " << imaginery << endl;
    }
};

int main()
{
    // complex ci(12 , 10); //using initialization list 
    // complex *ptr = &ci;

    // complex pi;
    // pi.setdata(22,20);
    // pi.getdata();

    // complex pt;
    // complex *ptr = &pt; // using pointer object 
    // (*ptr).setdata(33,30);
    // (*ptr).getdata();

    // complex *ptr = new complex; // using arrow operator , this is mostly use in c++ programing
    // ptr->setdata(42,40); 
    // ptr->getdata();

    complex *ptr = new complex[3]; // using array of object 
    ptr->setdata(52,50);
    ptr->getdata();

    (ptr+1)->setdata(62,60);
    (ptr+1)->getdata();

    (ptr+2)->setdata(72,70);
    (ptr+2)->getdata();
};