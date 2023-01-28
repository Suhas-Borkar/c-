#include <iostream>
using namespace std;

class bankdeposite
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    bankdeposite(){};

    bankdeposite(int p, int y, double r); // rate 0.4

    bankdeposite(int p, int y, int r); // rate 4

    void show();
};

bankdeposite :: bankdeposite(int p, int y, double r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue =  principal+((principal * interestrate * year )/100);

    // for (int i = 0; i < y; i++)
    // {
    //     returnvalue = returnvalue * (1+interestrate);
    // }

    
};

 bankdeposite ::bankdeposite(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = float(r) ;
    returnvalue = principal;
    returnvalue =  principal+((principal * interestrate * year )/100);
    // for (int i = 0; i < y; i++)
    // {
    //     returnvalue = returnvalue * (1 + interestrate);
    // }
};

void bankdeposite ::show()
{
    cout << "The deposite value is " << principal << endl;
    cout << "Return Value after " << year << " Year" << endl;
    cout << "And return Value is " << returnvalue << endl;
};

int main()
{
    // bankdeposite suhas(  1000 ,5 ,.1);
    // bankdeposite nil(  1000 ,5 ,1);
    // suhas.show();
    // nil.show();


    bankdeposite bd1,bd2,bd3;
    int p , y;
    float r;
    int R;

    cout<<"Enter The Value P Y r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposite(p,y,r);
    bd1.show();

    cout<<"Enter The Value P Y R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposite(p,y,R);
    bd2.show();
}