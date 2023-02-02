#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream out;
    out.open("sample.txt");
    out<<"Hello i am suhas \n";
    out<<"This is me \n";
    out<<"I am good and you!";
    out.close();

    ifstream data("sample.txt");
    string in;
    // for (int i =0; i < (data.eof()==0); i++)
    // {
    //         getline(data,in);
    //         cout<<in<<\n;

    // }

    while (data.eof()==0)
    {
        getline(data,in);
        // cout<<in<<'\n';
        cout<<in<<endl;
    }
    
    
    data.close();
}