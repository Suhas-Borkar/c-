#include <iostream>
#include <list>

using namespace std;
// template <class T>
void display(list <int> &lst) {
    list <int> :: iterator it;
    for (it = lst.begin(); it!=lst.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;
}

int main(){
    list <int> list1; // list defined with zero lenght
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(10);
    
// removing element from back side of list
    // display(list1);
    // list1.pop_back();
    // display(list1);
// removing element from front side of list
    // list1.pop_front();
    // display(list1);

// cliering list 
    // list1.clear();
    // display(list1);

// removing element from the list
    // display(list1);
    // list1.remove(6);
    // list1.remove(12);
    // list1.remove(6);
    // display(list1);

    // shorting the list
    // display(list1);
    // list1.sort();
    // display(list1);

    list <int> list2(7); // default defined lenght
    list <int> :: iterator iter;
    iter = list2.begin();
    *iter = 9;
    iter++;
    *iter = 6;
    iter++;
    *iter = 8;
    iter++;
    *iter = 7;
    display(list1);
    // list1.sort();
    display(list2);
    // list2.sort();
    // list1.merge(list2);
    // cout<<"the list1 after merging ";display(list1);
    // list2.merge(list1);
    // cout<<"the list2 after merging ";display(list2);

// reversing the list 
    list1.reverse();
    cout<<"list1 reverse ";display(list1);
    list2.reverse();
    cout<<"list2 reverse ";display(list2);
    list1.merge(list2);
    list1.sort();
    list1.reverse();
    cout<<"List revercing and then merge ";
    display(list1);

    return 0;
}