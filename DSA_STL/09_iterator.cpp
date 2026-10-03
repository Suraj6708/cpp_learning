
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // // Create a vector iterator called it
    // vector<string>::iterator it;  // instead we can use auto directly in for loop 

    // Loop through the vector with the iterator
    for (auto it = cars.begin(); it != cars.end(); ++it) {
    cout << *it << "\n";
    }

    return 0;
}

// What is begin() and end()?
// begin() and end() are functions that belong to data structures, such as vectors and lists. They do not belong to the iterator itself. Instead, they are used with iterators to access and iterate through the elements of these data structures.

// begin() returns an iterator that points to the first element of the data structure.
// end() returns an iterator that points to one position after the last element.