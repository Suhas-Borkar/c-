#include <iostream>
using namespace std;
class c2;

class c1{
    int val1;
    friend void exchange(c1 &, c2 &);

    public: 
    void setval1(int val){
        val1= val;
    }
    void print(void){
        cout<<"the Value of c1 : "<<val1<<endl;
    }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public: 
    void setval2(int val0){
        val2= val0;
    }
    void print(void){
        cout<<"the Value of c2 : "<<val2<<endl;
    }
};

void exchange(c1 &a , c2 &b){
    int ex = a.val1;
    a.val1=b.val2;
    b.val2=ex;
}


int main(){
    c1 v;
    v.setval1(100);
    v.print();
    c2 u;
    u.setval2(1000);
    u.print();
    exchange(v , u);
    v.print();
    u.print();
}