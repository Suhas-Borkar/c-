#include <iostream>
using namespace std;


// * without using template function
// float funAvrage1(int a,int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// };

// int funAvrage2(int a,int b)
// {
//     int avg = (a+b)/2.0;
//     return avg;
// };
// int main(){

// withut using template function
    // cout<<funAvrage1(12,21)<<endl; // output is 16.5
    // printf("The value of %.2f",funAvrage1(21,42)); // output is 31.50
    // cout<<funAvrage2(12,13)<<endl; // output is 12
// }


// * using template function
// template <class T1,class T2>
// float funAvrage3(T1 a,T2 b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// int main(){
//     cout<<funAvrage3(12,21)<<'\n';
//     printf("The average is %.2f \n",funAvrage3(10,31));
// }

template <class t1>
void swap1(t1 &a , t1 &b, t1 &c){
    t1 s=a;
    a=b;
    b=c;
    c=s;
}

int main(){
    int s = 12;
    int w = 21;
    int p = 32;
    cout<<"The value s "<<s<<endl<<"The value w "<<w<<endl<<"The value p "<<p<<endl;
    swap1(s,w,p);
    cout<<"The value s "<<s<<endl<<"The value w "<<w<<endl<<"The value p "<<p<<endl;

}