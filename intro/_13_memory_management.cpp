// Memory management is the process of controlling how much memory your program uses - and how it is used. This includes creating, using, and releasing memory when it's no longer needed.

// INT - 4
// LONG - 4 
// Double - 8
// char - 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int* ptr = new int;  // create a memorory of int 
    *ptr = 35;   // assign value to that address
    cout << *ptr;

    delete ptr ;  // space created using new should be deleted by us only   
}


// What Happens If You Forget delete?
    // If you forget to delete memory, your program will still run, but it may use more and more memory over time.
    // This is called a memory leak, and it can slow down or crash your program over time.