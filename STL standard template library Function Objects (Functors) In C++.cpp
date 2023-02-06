#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main(){
    //function objects : function wrapped in a class so that it available like an object
    int arr[]= {1,9,8,7,5,6,4,3,2,11,10};
    int size = *(&arr + 1) - arr; // array size finding 
    cout<<size<<endl;
    // sort(arr,arr+11); // accending order sorting
    sort(arr,arr+11,greater<int>()); // decending order shorting
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    
    return 0;
}