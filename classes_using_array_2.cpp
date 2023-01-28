#include <iostream>
#include <string>
using namespace std;

class mall
{
private:
    int no[10];
    int bill[10];
    string bill_date[10];
    string name[10];
    int mall_counter=0;

public:
    // void rezero(void) { mall_counter = 0; };
    void setmall(void);
    void getmall(void);
};

void mall ::setmall(void)
{
    no[mall_counter] = 1 + mall_counter;
    cout << "Enter " << 1 + mall_counter << " Mall Bill : " << endl;
    cin >> bill[mall_counter];
    cout << "Enter " << 1 + mall_counter << " Mall Bill Date : " << endl;
    cin >> bill_date[mall_counter];
    cout << "Enter " << 1 + mall_counter << " Mall Name : " << endl;
    cin >> name[mall_counter];
    mall_counter++;
}

void mall ::getmall(void)
{
    for (int i = 0; i < mall_counter; i++)
    {
        cout << "The Mall Name is " << name[i] << " The Mall No is " << no[i] << " And bill Date is " << bill_date[i] << " bill is " << bill[i] << endl;
    }
}

int main(){
    mall suhas,nilesh;
    // suhas.rezero();
    suhas.setmall();
    suhas.setmall();
    suhas.getmall();
}