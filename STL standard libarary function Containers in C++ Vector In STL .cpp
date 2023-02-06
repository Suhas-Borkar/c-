#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v){  //reference defined intiger vector cha. 
    for (T i = 0; i < v.size(); i++) //referrence name . capacity 
    {
        cout<<v[i]<<endl;  

    }
    cout<<endl;
    
};


int main(){
    vector<int> vec1; // defined vector    vector<vector type > vector_name;    vector<int,float,char,....> suhas;
    // elements add
    int element , size;
    cout<<"Enter vector size : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element value : ";
        cin>>element;
        vec1.push_back(element); // push kela vector madhe 
    }
    display(vec1);  // vector referanace data output
    return 0;
}