#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age;
    cout<<"Enter Your Age \n"<<endl;
    cin>>age;
    switch (age)
    {
        case 18:
            cout<<"Your Age is  18"<<endl;
            break;
        case 19:
            cout<<"Your Age is  19"<<endl;
            break;
        default:
            cout<<"Your Special "<<endl;
            break;
    }
    cout<<"Thanks For Using Switch_Case"<<endl;
}
