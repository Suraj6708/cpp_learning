#include <bits/stdc++.h>
using namespace std;

int main(){
    
    queue<int> pin ; // adding not allowed at declaration 
    
    // push and pop 
    pin.push(6);
    pin.push(6);
    pin.pop();

    // accessing 
    cout << pin.front() << pin.back();

    // size 
    pin.size();

    // isEmpty();
    pin.empty();

    return 0;
}