#include <iostream>
#include <string>

using namespace std;

class main1
{
    protected:
    string name;
    float price;

public:
    main1(string n, float p)
    {
        name = n;
        price = p;
    }
    virtual void display() {}
};

class abhi : virtual public main1{
    protected:
    int pori;
    public:

    abhi(string n,float p, int l):main1(n,p){
        pori = l;
    }

    void display() {
        cout<<"The produc Name is "<<name<<endl;
        cout<<"The product price  is "<<price<<endl;
        cout<<"And total customer are come "<<pori<<" Ladis"<<endl;
    }
};

class usha : virtual public main1{
    protected:
    int por;
    public:

    usha(string n,float p, int g):main1(n,p){
        por = g;
    }

    void display() {
        cout<<"The produc Name is "<<name<<endl;
        cout<<"The produc price is "<<price<<endl;
        cout<<"And total customer are come "<<por<<" Gaints"<<endl; 
    }
};

int main(){
    string na;
    float pr;
    int pi;
    int po;
    na = "banana";
    pr = 60.00;
    pi = 11;
    po = 21;


    abhi por(na , pr, pi);

    // por.display();
    usha pori(na , pr, po);
    // pori.display();

    main1 * su[2];
    su[0] = & por;
    su[1] = & pori;
    
    su[0]->display();
    su[1]->display();



    return 0;
}


// Rules for virtual function
// 1. Virtual functions can only be member functions, not static or friend functions.
// 2. They are accessed by object pointer
// 3. A virtual function in base class might not be used.
// 4. If a virtual function is defined in a base class, there is no necessity of redifining it in the derived class 
