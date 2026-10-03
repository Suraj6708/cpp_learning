// A set stores unique elements where they:

// Are sorted automatically in ascending order.
// Are unique, meaning equal or duplicate values are ignored.
// Can be added or removed, but the value of an existing element cannot be changed.
// Cannot be accessed by index numbers, because the order is based on sorting and not indexing.

// set = treeSet
// unordered_Set = hashset

#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> pin = {1,2,3,4,5}; // ascending order 
    set<int, greater<int>> pin2 = {1,2,3,4,5};  // descending order

    unordered_set<int> pin = {1,2,3,4,5}; // unordered sets are the hashmap

    // iterating
    for(int n: pin) cout << n << "\n" ;

    // add and remove   
    pin.insert(1);
    pin.erase(1);
    pin.clear();  // remove all elements

    // size 
    pin.size();

    // isEmpty();
    pin.empty();
    return 0;
}