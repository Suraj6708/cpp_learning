#include <stack>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> pin ; // can't add elements at starting
    
    // push and pop 
    pin.push(6);
    pin.push(6);
    pin.pop();

    // accessing 
    cout << pin.top();
    pin.top() = 1;

    // size 
    pin.size();

    // isEmpty();
    pin.empty();

    return 0;
}