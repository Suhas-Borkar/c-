// c++ : file I/O [reding and writing to a file]

// *) 3 useful classes
// include first <fstram>
// 1> fstreambase
// 2> ifstream --> derived from fstreambase
// 3> ofstream --> derived from fstreambase

// *) read option 
// ifstream in("file_name.txt"); // in chya jagevar apan kahi pan nav gheu shakto
// string st; // string defined karaychi
// in>>st;  // just like cin

// *)write option
// ofstream out("file_name.txt");
// string st="Suhas";
// out<<st;


#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream hout("sample61.txt"); // connecting to 'sample61.txt' this file 
    cout<<"Enter your name "; 
    string name;    // create string
    cin>>name;  // 
    hout<<"My name is "+ name;  //   writing a string into the file 
     
    hout.close(); // connection end

    ifstream hdata("sample61.txt"); //reconnecting to 'sample61.txt' this file 
    string data; //creating string for store data from sample61.txt this file
    // hdata>>data; // store data in string
    getline(hdata,data);
    cout<<"The content of this file is "<<data<<endl; // store data print 
    hdata.close();

}