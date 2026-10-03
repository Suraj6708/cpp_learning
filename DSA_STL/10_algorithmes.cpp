#include <bits/stdc++.h>
using namespace std;

// Algorithms are used to solve problems by sorting, searching, and manipulating data structures.

int main(){
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    vector<int> numbers = {1,2,3,4};

    // Sort 

    sort(cars.begin(), cars.end());  // ascending
    sort(cars.rbegin(), cars.rend());  // descending
    sort(cars.begin() + 3, cars.end()); // starting from the fourth element
    
    // searching 

    find(cars.begin(), cars.end(), "volv0");  
    find(cars.begin() + 3, cars.end(), "volvo");
    
    // upper bound ( used on sorted elements )

    sort(numbers.begin(), numbers.end());
    auto it = upper_bound(numbers.begin(), numbers.end(), 5);  // value that is greater than 5 in the sorted vector

    // min element
    auto it = min_element(numbers.begin(), numbers.end());
    auto it = max_element(numbers.begin(), numbers.end());

    //copy
    vector<int> copiedNumbers(6);
    copy(numbers.begin(), numbers.end(), copiedNumbers.begin());

    //fill 
    fill(numbers.begin(), numbers.end(), 35); // fill all the elemets with 35 

    return 0;
}