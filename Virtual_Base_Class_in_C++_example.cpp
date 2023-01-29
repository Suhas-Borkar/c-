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
        cout<<"The roll no is "<<roll_no<<endl;
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
        <<"Math  :"<<math<<endl
        <<"hindi :"<<hindi<<endl;
    }
};

class sport : virtual public student{
    protected:
    float score;

    public:
    void set_score(float sco){
        score = sco;
    };

    void get_score(){
        cout<<"The PT marks is "<<score<<endl;
    };

};

class result :  public test , public sport{
    private:
    float total; 
    public:
    void display(){
        total = math + hindi + score;
        get_roll();
        get_test();
        get_score();
        cout<< "Your total score is: "<<total<<endl;
    };
};


int main(){
    result suhas;
    suhas.set_roll(1000);
    suhas.set_test(99.99,99.88);
    suhas.set_score(100);
    suhas.display();
    return 0;
}