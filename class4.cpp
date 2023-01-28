#include <iostream>

using namespace std;

class class4
{
private:

    int id;
    int mobile;
    char name[10];

    int d;
    float e;
    double f;

public:
    void get(int a,int b,char c,int d1,float e1,double f1){
        id=a;
        mobile=b;   
        name[10]=c;

        d=d1;
        e=e1;
        f=f1;
    };

    


    void set(){
        cout<<"The ID Is "<<id<<" The Mobile No is "<<mobile<<"the name is "<<name<<" ,d is "<<d<<"the e is "<<e<<"the f is"<<f<<endl;
    };
    

};

int main()
{
    class4 suhas;   
    int a;
    int b;
    char c;
    int d;
    float e;
    double f;
    cin>>a>>b>>c>>d>>e>>f;   
    suhas.get(a,b,c,d,e,f);
    suhas.set();
}