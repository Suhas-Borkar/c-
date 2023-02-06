#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    map<string , int> marksmap;
    marksmap["nilesh"] = 99;
    marksmap["suhas"] = 95;
    marksmap["suvarna"] = 90;
    marksmap.insert({{"jadu" , 50}, {"krish" , 75}});
    map<string,int> :: iterator itr;
    for (itr = marksmap.begin(); itr!= marksmap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    
    return 0;
};