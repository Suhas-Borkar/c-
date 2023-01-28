#include <iostream>

using namespace std;

class admin
{
private:
    int a;
    char name;
public:
    void aadmin(int a1,char name1);
    void padmin()
    {
        cout<<"the admin no is "<<a<<endl;
        cout<<"the admin name is "<<name<<endl;
    };
};

void admin :: aadmin(int a1, char name1)
{
    a=a1;
    name=name1;
};

int main()
{
    admin suhas;
    int a1=983791;
    char name1='s';
    suhas.aadmin( a1,name1);
    suhas.padmin();
}
