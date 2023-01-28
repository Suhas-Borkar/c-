#include <iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_roll(int r){
        roll_no=r;
    };
    void get_roll(){
        cout<<"The roll no is "<<roll_no;
    };
};

class test : virtual public student {
    protected:
    float math ,hindi;
    public:
    void set_test(float m1,float m2){
        math = m1;
        hindi = m2;
    };

    void get_test(){
        cout<<"The Marks is"<<endl
        <<"Math"<<math<<endl
        <<"hindi"<<hindi<<endl;
    }
};

