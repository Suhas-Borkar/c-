#include <iostream>
#include <string>
using namespace std;

class classes_example
{
private:
    string a;
    void CHECK(void);


public:
    void ENTER(void);
    void BINFOR(void);
    void PRINT(void);
};

void classes_example::ENTER(void)
{
    cout << "Enter No. : " << endl;
    cin >> a;
    CHECK();

};

void classes_example::CHECK(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != 'a' && a.at(i) != 'z')
        {
            cout << "Invalid Text" << endl;
            exit(0);
        }
    }
};

void classes_example::BINFOR(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == 'a')
        {
            a.at(i) = '1';
        }
        else if (a.at(i) == 'z')
        {
            a.at(i) = '0';
        }
        else{
            a.at(i)='5';

        };
    }
};

void classes_example ::PRINT(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        cout<<a.at(i);
    }
    
}
int main()
{
    classes_example cla;
    cla.ENTER();
    // cla.CHECK();   this is a private function that why is a not use in main fuction is a only use in defined function 
    cla.BINFOR();
    cla.PRINT();
}