#include <iostream>
using namespace std;

static int count;

class employee
{
private:
    int id;
    // static int count;

public:
    void setdate(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    };
    void getdata(void)
    {
        cout << "The id id " << id << ". The Employee No is " << count << endl;
    }
};

// int employee ::count = 1000; 

int main()
{

    int a;
    
    cout<<"Enter No Data"<<endl;
    cin>>a;

    employee suhas[a];
    // suhas[0].setdate();
    // suhas[0].getdata();

    // suhas[1].setdate();
    // suhas[1].getdata();

    // suhas[2].setdate();
    // suhas[2].getdata();

    for (int i = 0; i < a; i++)
    {
        suhas[i].setdate();
        suhas[i].getdata();
    }
}
