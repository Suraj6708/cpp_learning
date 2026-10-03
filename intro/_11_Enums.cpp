#include<bits/stdc++.h>
using namespace std;

// An enum is a special type that represents a group of constants (unchangeable values).
// if you assign value to one others will be incremented auto   
// Enums are used to give names to constants, which makes the code easier to read and maintain.
// first value will be 0 if not defined 

int main(){

    // syntax
    enum level{
        LOW,   // 0
        HIGH = 3,
        MEDIUM  // 4
    };
    level myVar = LOW;
    cout << myVar ;
}