#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "suraj";

    // reference of a variable
    string &studentName = name;
    studentName = "yash";
    cout << studentName << endl;  // change teh value to 'yash'

    ///memory reference
    cout << &name << endl;
    
    // A pointer is a variable that stores the memory address as its value.
    string food = "Pizza";  
    string* ptr = &food;  // stores the address of food

    cout << ptr << endl;  // print the memory address like &food
    cout << *ptr<< endl;  // prints the value of food [ DEREFERNCING ]

    *ptr = "banana";  // changing ptr value changes the original ones 
    cout << *ptr << endl;

    return 0;
}