#include <iostream>
// #include <fstream>
using namespace std;

template <class T>
class vector{
    public:
    T * arr;
    int size;
    vector(int m){
        size = m;
        arr = new T[size];
    }

    T sumvec(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+= this->arr[i] * v.arr[i];
        }
        return d;
        
    }
};

int main(){
    // vector v1(3); // vector v1
    // v1.arr[0]=2;
    // v1.arr[1]=2;
    // v1.arr[2]=2;
    
    // vector v2(3); // vector v2
    // v2.arr[0]=2;
    // v2.arr[1]=2;
    // v2.arr[2]=2;
    // int a= v1.sumvec(v2);
    // cout<<a<<endl;

    // vector <double>v1(3); // vector v1
    // v1.arr[0]=2.0;
    // v1.arr[1]=2.0;
    // v1.arr[2]=2.0;
    
    // vector <double>v2(3); // vector v2
    // v2.arr[0]=2.0;
    // v2.arr[1]=2.0;
    // v2.arr[2]=2.121;

    // double a= v1.sumvec(v2);
    // cout<<a<<endl;

    // vector <int>v1(3); // vector v1
    // v1.arr[0]=2.0;
    // v1.arr[1]=2.0;
    // v1.arr[2]=2.0;
    
    // vector <int>v2(3); // vector v2
    // v2.arr[0]=2.0;
    // v2.arr[1]=2.0;
    // v2.arr[2]=2.121;

    // int a= v1.sumvec(v2);
    // cout<<a<<endl;
}