#include <iostream>
using namespace std;

class baseClass{
public:
int var_base;
void display(){
    cout<<"Desplaying base class variable var_base "<<var_base<<endl;
}
};

class derived_class  : public baseClass{
public:
int var_derived;
void display(){
    cout<<"Desplaying base class variable var_base "<<var_base<<endl;
    cout<<"Desplaying base class variable var_derived "<<var_derived<<endl;
}
};


int main(){
    baseClass * base_class_pointer;
    baseClass obj_base;
    derived_class obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class

    base_class_pointer->var_base = 12;  
    // base_class_pointer->var_derived= 122; // Will throw an error
    base_class_pointer->display();

    for (int i = 1; i < 11; i++)
    {
        base_class_pointer->var_base = ((i + 10) * (2 + i));
        base_class_pointer->display();
    };

    derived_class * base_derived_class;
    // derived_class obj_derived;
    base_derived_class = &obj_derived;

    base_derived_class->var_base = (1200);
    base_derived_class->var_derived = (2400) ;
    base_derived_class->display();


    for (int i = 1; i < 11; i++)
    {
        base_derived_class->var_base = (1200+i);
        base_derived_class->var_derived = (2400+i);
        base_derived_class->display();

    }
    
};