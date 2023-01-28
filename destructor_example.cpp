#include <iostream>
using namespace std;

int count=0;

class Num
{
private:
    int num;
public:
    Num(int no)
    {
        num = no;
        count++;
        cout<<"When The constructor call object "<<count<<endl;   
    };
    

    ~Num(){
        cout<<"When The distructor call object"<<count<<endl;
        count--;
    };
};

int main(){
    Num suhas(10);
    {
        cout<<"Enter The bracket"<<endl;
        Num su(11),a(12),b(13),c(14),d(15);
    }
    
    Num e(16);

}