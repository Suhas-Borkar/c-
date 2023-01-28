#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age;
    cout<<"What is your age : \n";
    cin>>age;
    if (age < 18)
    {
        cout<<"you can't come to may party. \n";
    }else if (age>=18 && age<=40)
    {
        cout<<"You can Come to may party \n";
    }else {
        cout<<"Your con't come to party your age is more than party condition \n";
    }
    
    

    return 0;
}
