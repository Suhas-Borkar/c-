#include <iostream>
using namespace std;

template <class T = int>

class Suhas
{
public:
    T data;

    Suhas(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Suhas<T>::display()
{
    cout << "value of data is " << this->data << endl;
}

void func(int a)
{

    cout << " I am frist func(). "<<endl;
}

template <class S>
void func(S a){
    cout << " I am Template func(). "<<endl;
}

template <class W>
void func1(W a){
    cout<<"I am Template Func1()"<<endl;
}

int main()
{
    // Suhas<int> veer(7887465826);
    // veer.display();

    // Suhas<float> su(12);
    // su.display();

    // Suhas<string> ha("suhas borkar");
    // ha.display();

    func(1);
    func1(1);
}