#include <iostream>
using namespace std;

template <class T>
class suhas{
    public:
    T data;
    suhas(T a){
        data = a;
    }

    void display();
};
template <class T>
void suhas <T> :: display(){
    cout<<"The value of data "<<data<<endl;
}


template <class TT>
void nil(TT w){
    TT data = w;
    cout<<"The value of data sum "<<data+data<<endl;
}

int main(){
    // suhas <float>as(12);
    // as.display();

    nil(12);
}