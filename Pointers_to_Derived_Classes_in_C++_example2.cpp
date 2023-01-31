#include <iostream>
using namespace std;

class base{
    protected:
    public : 
    int roll;



    void printroll(){
        cout<<"The Roll No is "<<roll<<endl;
    }
};

class base2 : public base {
    protected:
    public : 
    int test;
    void printtest(){
        cout<<"The Test is "<<test<<endl;
    }
};

class base3 : public base2 {
    protected:
    public : 
    int result = test + roll;
    void display(){
        printroll();
        printtest();
        cout<<"The result is "<<test+roll<<endl;
    }
};

int main(){
    base * base_class;
    base base_obj;
    base2 base2_obj;
    base3 base3_obj;
    base_class = &base2_obj;
    base_class = &base3_obj;

    // base_class->roll = 10;
    // base_class->printroll();

    int r ,test;
    cout<<"Enter the roll no "<<endl;
    cin>>r;
    cout<<"Enter the Test marks "<<endl;
    cin>>test;

    base2 * base2_class;
    base2_class = &base2_obj;
    base2_class->roll = r;
    base2_class->test = test;
    base2_class->printtest();

    base3 * base3_class;
    base3_class = &base3_obj;
    base3_class->roll = 111;
    base3_class->test = 111;
    // base3_class->result = 111;
    base3_class->display();
}