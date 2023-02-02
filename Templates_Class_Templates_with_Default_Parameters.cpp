#include <iostream>
using namespace std;

template <class T1 = int,class T2 = float ,class T3 = string>

class Harry{
    public:
    T1 data1;
    T2 data2;
    T3 data3;

    Harry(T1 x, T2 y, T3 z)
    {
        data1 = x ;
        data2 = y ;
        data3 = z ;
    }

    void display(){
        cout<<"The value of data1 is "<<data1<<endl<<"The value of data2 is "<<data2<<endl<<"The value of data3 "<<data3<<endl;
    }
};

int main(){
    Harry <>ha(1.21,21.21,"suhas"); //Here this set default value ;
    ha.display();


    Harry <float,int,char> h(12.12,1212,'q'); //Here this set template  
    h.display();
}