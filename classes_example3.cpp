#include <iostream>
#include <string>
using namespace std;

class std_dtl
{
    int roll_no;
    string mobile;
    string s;
public:
    void read(void);
    void display(void);
};

void std_dtl :: read(void){
    cout<<"Enter roll no : "<<endl;
    cin>>roll_no;

    cout<<"Enter Mobile No : "<<endl;
    cin>>mobile;

    cout<<"Enter Student Name : "<<endl;
    cin>>s;
    display();
};

void std_dtl :: display(void){
    cout<<"Roll No is "<<roll_no<<", Std Name is "<<s<<" ,Mobile No is "<<mobile<<endl;
};

int main()
{
    std_dtl su;
    su.read();
    std_dtl rushi;
    rushi.read();
    // su.display();
    // rushi.display();
    

}

