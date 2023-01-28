#include <iostream>
#include <iomanip>
using namespace std;

union student  // ya madhun apan konti tari ekch value use karu sakato ani jar apan ya madhe ekhadi value print keli asel ani durari vvaluee print kart asu tar dusari value panilya valuechi jaga ghete  
{
    /* data */
    char name;
    int std_id;
    float fees;
};

int main(){
    union student abcd;
    
    abcd.std_id=1;
    abcd.name='s';
    abcd.fees=1200.00;

    cout<<abcd.std_id;
}