#include <iostream>

using namespace std;

class  student
{
private:
    int a;
    char b;
    float c;
public:
    int d;
    int f;
    void set_std(int a1 , char b1 , float c1);

    void print_std()
    {
        cout<<"The Value Of a is "<<a<<endl;
        cout<<"The Value Of b is "<<b<<endl;
        cout<<"The Value Of c is "<<c<<endl;
    };
};

void student :: set_std(int a1 , char b1, float c1)
{
    a=a1;
    b=b1;
    c=c1;
};

int main()
{
    student suhas;
    int a2;
    char b2;
    float c2;
    cout<<"Enter fisrt is no and second is char and thired is float : ";
    cin>>a2>>b2>>c2;
    suhas.set_std(a2,b2,c2);
    suhas.print_std();
    

} 