#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    switch(x){
        case 1: 
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout << "wed";
            break;
        default:
            cout << "sunday";
            break;

    }
    return 0;
}