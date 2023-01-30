#include <iostream>
using namespace std;

class pointer{
    int a;
    public:
    pointer & setdata(int a)
    {
        this->a =a;
    }
    void getdata()
    {
        cout<<"value a "<<a<<endl; 
    }
};

int main(){
    pointer su;
    su.setdata(100000).getdata();  
    return 0;
}