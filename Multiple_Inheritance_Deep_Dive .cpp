// syntax for inheriting in multiple innheritance
// class Derivedc : visibility-mode base1, visibility-mode base2
// {
// class body of class "derivedc"
// }

#include <iostream>
using namespace std;

class base1
{
    protected:
    int num1;

public:
    void setnum(int x){
        num1 = x;
    };
    
};

class base2 
{
    protected:
    int num2;
    public:
    void setnum2(int y){
        num2 = y;
    };
};

class base3
{
    protected:
    int num3;
    public:
    void setnum3(int y){
        num3 = y;
    };
};

class sum :public base1, public base2, public base3{
    public: 
        void show(){
            cout<<"The Value of Base1 is "<<num1<<endl;
            cout<<"The Value of Base2 is "<<num2<<endl;
            cout<<"The Value of Base3 is "<<num3<<endl;
            cout<<"the sum is "<<num1+num2+num3<<endl;
        }
};


int main(){
    sum s;
    s.setnum(22);
    s.setnum2(28);
    s.setnum3(50);
    s.show();
    return 0;


}