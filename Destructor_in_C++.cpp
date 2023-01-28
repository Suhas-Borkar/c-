#include <iostream>
using namespace std;

    int count=0;

class num{
    public:
    num(){
        count++;
        cout<<"When the constructor call the object"<<count<<endl;
    }

    ~num(){
        cout<<"When the distructor call the object "<< count <<endl;
        count--;
    }
};

int main(){
    cout<<"We are inside our fnction"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"The Entering This Block"<<endl;
        cout<<"Creating six More Object"<<endl;
        num n2,n3,n4,s1,s2,u1;
        cout<<"Exiting This Block"<<endl;
    }
    cout<<"back to main "<<endl;
}