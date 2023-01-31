#include <bits/stdc++.h>
using namespace std;

class base1{
    public:
    int var_base = 11111;
    virtual void display(){
        cout<<"The Value Var_base of "<<var_base<<endl;
    }
};

class derived : public base1{
    public:
    int var_derived = 22222;
    void display(){
        cout<<"The Value Var_base of "<<var_base<<endl;
        cout<<"The Value Var_derived of "<<var_derived<<endl;
    }
};

int main(){
    base1 * base_class;
    base1 base_obj;
    derived derived_obj;
    base_class = &derived_obj;

    // base_class->var_base = 100;
    base_class->display(); 

    // derived * derived_class;
    // derived_class->var_base=1000;
    // derived_class->var_derived=100000;
    // derived_class->display_derived();
    

    
}
