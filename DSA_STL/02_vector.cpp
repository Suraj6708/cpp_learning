// vector is a resizable array ( like arraylist in java)

#include <vector> 
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> pin = {1,2,3,4,5};

    // iterating
    for(int n: pin) cout << n << "\n" ;

    // accessing 
    // .at is prefered instead of [] , because it gives error
    cout << pin[0] << pin.front() << pin.back() << pin.at(2);
    

    // changing 
    pin[0] = 9;
    pin.at(0) = 9; // prefered 

    // add and remove at end
    pin.push_back(6);
    pin.pop_back();

    // size 
    pin.size();

    // isEmpty();
    pin.empty();

    
    return 0;
}