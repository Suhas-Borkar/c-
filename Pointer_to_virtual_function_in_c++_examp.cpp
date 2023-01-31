#include <iostream>
#include <string.h>

using namespace std;

class main
{
    protected:
    string name;
    float price;

public:
    main(string n, float p)
    {
        name = n;
        price = p;
    }
    virtual void display() {}
};

class abhi : public main{
    int pori;
    public:

    abhi(string n,float p, int l):main(n,p){
        pori = l;
    }

    void display() {
        cout<<"The produc Name is "<<name<<endl;
        cout<<"The product price  is "<<price<<endl;
        cout<<"And total customer are come "<<pori<<" Ladis"<<endl;
    }
};

class usha : public main{
    int por;
    public:

    usha(string n,float p, int g):main(n,p){
        por = g;
    }

    void display() {
        cout<<"The produc Name is "<<name<<endl;
        cout<<"The produc price is "<<price<<endl;
        cout<<"And total customer are come "<<por<<" Gaints"<<endl; 
    }
};

int main(){
    string na = "banana";
    float pr = 60.00l;
    int pi = 11 ;
    int po = 21 ;

    abhi por(na , pr, pi);
    por.display();
    usha pori(na , pr, po);
    pori.display();

    // main * per[2];
    // per[0] = &por;
    // per[1] = &pori;



    return 0;
}