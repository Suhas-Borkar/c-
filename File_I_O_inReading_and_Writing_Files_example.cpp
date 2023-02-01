#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string name="A2Z IT HUB INDIA";
    string name1;
    ofstream insert_file("simple60a.txt");
    insert_file<<name;
    
    ifstream view_details("simple60a.txt");

    getline(view_details ,name1);
    cout<<name1;
}