// Elements in a map are:

// Accessible by keys (not index), and each key is unique.
// Automatically sorted in ascending order by their keys.

// map = treeMap
// unorder_map = hashmap

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> pin = {{'a', 2}, {'b', 1}};

    // iterating 
    for(auto p: pin){
        cout << p.first << p.second;  // key , value
    }
    
    // accesing and adding is similar
    pin['a'] = 3;
    pin.at('b') = 4;

    pin.insert({'a', 6});

    pin.erase('a');
    pin.clear();

    // contains or not
    pin.count('a');  // 1 = true, 0 - false;

    // size 
    pin.size();

    // isEmpty();
    pin.empty();

    return 0;
}