#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
        // cout<<"The Number is : "<<i<<endl;  output is 1,2,3
    //     if (i==3)
    //     {
    //         break;
    //     }
    //     cout<<"The Number is : "<<i<<endl;  //output is 1,2
    // }
    // cout<<"Break Done"<<endl;

    // for (int i =1; i <=10; i++)
    // {
    //     if (i==3 || i==1 || i==2)
    //     {
    //         continue;  output => 4,5,6,7,8,9,10
    //         i++;
    //     }
    //     cout<<"The No. is : "<<i<<endl;
    // } 
     for (int i =1; i <=10; i++)
    {
        if (i==3)
        {
            continue;  // output => 1,2,4,5,6,7,8,9,10
            i++;
        }
        cout<<"The No. is : "<<i<<endl;
    }    
}