// A destructor is a special member function that is automatically called when an object is destroyed.

#include <bits/stdc++.h>
using namespace std;

// if there is a parent destructor and child then 
// child destructor and then parent is called 

class Student {
public:
    Student() {
        cout << "Constructor\n";
    }

    ~Student() {
        cout << "Destructor\n";
    }
};

int main() {
    Student s;

    cout << "Inside main\n";
}


// constructor 
// inside main
// destructor 