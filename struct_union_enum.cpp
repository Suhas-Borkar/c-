#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int e_id;
    char f_char;
    float salary;
};


typedef struct employee2  //typedef cha vapar karun apan ya thikani struct employee chay jagevar apan tyala ekk shotcut deu shakto jaseki ep, sp , etc.
{
    /* data */
    int e_id;
    char f_char;
    float salary;
}ep;

union student  // ya madhun apan konti tari ekch value use karu sakato ani jar apan ya madhe ekhadi value print keli asel ani durari vvaluee print kart asu tar dusari value panilya valuechi jaga ghete  
{
    // pan ya madhe maxe output nahi yet  
    int std_id;
    char name;
    float fees;
};


int main()
{
    union student abcd;
    abcd.fees=1200.00;
    abcd.std_id=1200;
    abcd.name='s';

    cout<<"The Value Print Using Union :"<<abcd.std_id<<endl;


    ep a2z;
    struct employee suhas;
    struct employee nilesh;
    a2z.e_id= 1;
    a2z.f_char= 'z';
    a2z.salary= 12091273098192989048978;

    cout<<"The A2Z Id (using ep) :"<<a2z.e_id<<endl;
    cout<<"The A2Z Favrate Char (using ep) :"<<a2z.f_char<<endl;
    cout<<"The A2Z Salary (using ep) :"<<a2z.salary<<endl;

    suhas.e_id = 1;
    suhas.f_char = 'v';
    suhas.salary = 150000000;  

     cout<<"The Employee Id is :"<<suhas.e_id<<endl;
    cout<<"the employee favrate char is :"<<suhas.f_char<<endl;
    cout<<"The employee salary is :"<<suhas.salary<<endl;

    nilesh.e_id = 2;
    nilesh.f_char = 's';
    nilesh.salary = '99999999999';

    cout<<"The Employee Nilesh Id is :"<<nilesh.e_id<<endl;
    cout<<"The Employee Nilesh Faverate charactor is :"<<nilesh.f_char<<endl;
    cout<<"The Employee Nilesh Salary is :"<<nilesh.salary<<endl;


    
    enum jeone{chiken,bhelpuri,bokad,etc};  // enum madhe dilelya details la apan intiger nusar use karu shakto
    jeone m1 =chiken;
    cout<<"Hello "<<m1<<endl;
    cout<<bhelpuri;
    cout<<bokad;
    cout<<etc;
     
}

