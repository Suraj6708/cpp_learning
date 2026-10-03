#include<bits/stdc++.h>
using namespace std;

// here 
// n - parameter
// 5 - argument 
// we can also pass default value of paramenter


// pass by value ( changes doesnt reflect on original values)
int fact(int n = 2){
    if(n <= 2) return n;
    return n * fact(n-1);
}

// pass by reference
int sum(int &n){
    return n + 2;
}

// array as parameter
int summations(int arr[5]){
    return arr[0];
}


int main(){
    cout << fact(5);
    return 0;
}

