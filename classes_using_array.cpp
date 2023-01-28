#include <iostream>
using namespace std;

class shop
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void);
    void setprice(void);
    void printprice(void);
};
void shop::initcounter(void)
{
    counter = 0;
}

void shop ::setprice(void)
{
    cout << "Enter Your Item ID " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter Your Item Price " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::printprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Item ID is " << itemID[i] << " and price is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.printprice();
}
