#include <iostream>
using namespace std;

class Number1
{
    int a;

public:
    Number1()
    {
        a = 0;
    };

    Number1(int num)
    {
        a = num;
    };



    // The No copy constructor is not found , Then complier supplies its create  own copy constructor; 
    Number1(Number1 &obj)       // copy constructor nasel tar camplier swathache navin condtructor banvato
    { //
        cout << "The Copy Constuctor called." << endl;         
        a = obj.a;
    };

    void asss();
};

void Number1 :: asss(){
    cout<<"The Number1 is "<<a<<endl;
}

int main(){
    Number1 b , p(12),z(29);
    b.asss();
    p.asss();

    Number1 a(10); 
    a.asss();

    Number1 c(p);
    c.asss();

    // z = p;
    // z.asss();

    Number1 z1(z);
    z1.asss();
};
