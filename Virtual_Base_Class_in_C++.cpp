#include <iostream> 
using namespace std; 
class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C {
    public:
    void say(){
        A::say();
        cout<<"Good Morning "<<endl;
    } 
};

int main(){
    D d;
    d.say();
    return 0;
}