#include <bits/stdc++.h>
using namespace std;

// doubly ended queue
int main(){
    
    deque<int> pin  = {1,2,3,4,5}; 

    // iterating
    for(int n: pin) cout << n << "\n" ;
    
    // push and pop 
    pin.push_front(6);
    pin.push_back(6);

    pin.pop_front();
    pin.pop_back();

    // accessing 
    cout << pin.front() << pin.back();
    cout << pin[0] << pin[1] << pin.at(3);

    // size 
    pin.size();

    // isEmpty();
    pin.empty();

    return 0;
}