
// it is LINKEDLIST and vector is ARRAYLIST

#include <list>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    list<int> pin = {1,2,3,4,5};

    // iterating
    for(int n: pin) cout << n << "\n" ;

    // accessing 
    cout << pin.front() << pin.back();

    // add and remove are allowed from both sides 
    pin.push_back(6);
    pin.push_front(6);

    pin.pop_back();
    pin.pop_front();


    // size 
    pin.size();

    // isEmpty();
    pin.empty();

    return 0;
}