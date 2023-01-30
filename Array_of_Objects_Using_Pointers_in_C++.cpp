#include <iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
    void setdata(int a , float b){
        id = a;
        price = b;
    };

    void getdata(){
        cout<<"The product id is "<<id<<endl;
        cout<<"The product price is "<<price<<endl;
    }
};

int main(){
    int size = 2;
    cout<<"The size is "<<size<<endl;
    shopitem *ptr = new shopitem [size];  // class pointer size declare here
    shopitem *ptrtmp = ptr; // class pointer data copy here  
    int p ;
    float q;
    
    for (int i = 0; i < size; i++) // data enter here 
    {
        cout<<"The Enter Item Id and Enter Item Price"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p, q);
        ptr++;
    }

    
    for (int i = 0; i < size; i++) // data print here
    {
        ptrtmp->getdata();
        ptrtmp++;
    }   
}