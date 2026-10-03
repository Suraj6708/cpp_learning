#include<bits/stdc++.h>
using namespace std;

int main(){

    // similar datatypes in stored in an array
    int arr[5] = {1,2,3,4,5};
    string* guests = new string[5]; 
    
    // 2D array
    int arr2[2][2] = {{1,2}, {1,2}};

    
    // size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    // iterating 
    for(int no: arr) cout << arr;

    // string str
    string str = "suraj";
    cout << str[0]; // s;
    cout << str.at(0); // s

    cout << str.size();  // it is an alias of length only
    cout << str.length();
    str.append(" gitte");

    delete[] guests;
    return 0;
}