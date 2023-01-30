#include <iostream>

using namespace std;

int main()
{
    int a = 12;
    int b =11;
    int *ptra = &a;
    int *ptrb = &b;
    // cout << "The a Address value is "<<&(a)<<endl;
    // cout << "The b Address value is "<<&(b)<<endl;
    // cout << "The Value Of A is " << *(ptra) << endl; // using pointer address
    // cout << "The Value Of b is " << *(ptrb) << endl; // using pointer address
    // cout << "The Value Of A is " << a << endl; // using pointer address
    // cout << "The Value Of b is " << b << endl; // using pointer address


    int *n = new int(10);
    // int **o= &n;
    // cout<<"the value at address n is "<<**o<<endl;


    float *e = new float(12.12);
    // cout<<"The value at address e is "<<*e<<endl;

    int *arr = new int[4];
    arr[0]=12;
    arr[1]=120;
    arr[2]=1200;
    arr[3]=12000;

// delete[] arr; 

    cout<<"the value at address arr[0] is "<<arr[0]<<endl;
    cout<<"the value at address arr[1] is "<<arr[1]<<endl;
    cout<<"the value at address arr[2] is "<<arr[2]<<endl;
    cout<<"the value at address arr[3] is "<<arr[3]<<endl;



    return 0;
}
