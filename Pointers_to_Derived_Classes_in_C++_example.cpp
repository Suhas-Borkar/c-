#include <iostream>
using namespace std;

class suhas{
    public:
    int num1;

    void display(){
        cout<<"Value num1 is "<<num1<<endl;
    }
};

class nilesh : public suhas{
    public:
    int num2;

    void display(){
        cout<<"Value num1 is "<<num1<<endl;
        cout<<"Value num2 is "<<num2<<endl;
    }
};

int main(){

    suhas * suhas_class;  
    // suhas suhas_obj;
    // nilesh nilesh_obj; // this is a base class then derived class int does't call here
    // suhas_class = &nilesh_obj; 
    
    suhas_class->num1 = 10;
    // suhas_class->num2 = 20;
    suhas_class->display();





    return 0;
}