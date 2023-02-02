#include <iostream>
using namespace std;
/*
Class Templetes with multiple paramiters (one , two or more than two );
template <class T1 , class T2,........> (coma seprated);
class nameOfClass{
    // body

}
*/

template <class T1 ,class T2,class T3>

class myClass{
    public:
    T1 data1;
    T2 data2;
    T3 data3;
    myClass(T1 a, T2 b, T3 c){
        data1 = a;
        data2 = b;
        data3 = c;

    }

    void display(){
        // cout<<data1<<data2;
        cout<<this->data1<<endl<<this->data2<<endl<<data3<<endl;
    }
};

int main(){
    myClass<int ,string,float> sa(1,"sas",1.1);
    sa.display();


    myClass<int,float,char> su(1,1.2,'a');
    su.display();
    
    return 0;
}