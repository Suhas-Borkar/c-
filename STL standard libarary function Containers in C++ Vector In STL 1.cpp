#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &ref) // vector reference banavla
{
    for (int i = 0; i < ref.size(); i++)
    {
        // cout << "The vector value is " << ref[i] << endl;
    //  cout<<"Display this vector "<<ref.at()<<endl;
        cout<<"The vector value using at "<<ref.at(i)<<endl;
    }
    cout << endl;


}
int main()
{
    // vector<int> suhas; // zero lenght vector 
    // int element;
    // int size;
    // cout << "Enter vector size : ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "The enter the vector element value: ";
    //     cin >> element;
    //     suhas.push_back(element);
    // }
    // int pop;
    // cout << "Enter pop back value : ";
    // cin >> pop;
    // for (int i = 0; i < pop; i++)
    // {
        // suhas.pop_back(); // last value cut karnaya sathi 
    // }

    // //insert
    // display(suhas);
    // vector<int> :: iterator itr = suhas.begin();
    // suhas.insert(itr , 577 )22;// saglyat pahilyandi value print honar 
    // suhas.insert(itr + 1, 212 );// second no la value print honar 
    // suhas.insert(itr +2, 577 );// thried no la value print honar 
    // suhas.insert(itr +2,10, 577 ); // iterator thried no la ani 10 veles print honar ahe
    // display(suhas);

    vector <int> nilesh(10); // lenght defined vector  lenght started with 0 
    // nilesh.push_back(120);
    // display(nilesh);
    vector <char> vector1(4);
    // display(nilesh1);
    vector <char> vector2(vector1); //vector2 is depend on vector1 
    // display(vector2);
    vector <int> vector3(6 , 3);
    display(vector3);
    cout<<vector3.size();


}