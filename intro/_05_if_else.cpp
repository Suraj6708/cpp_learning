#include<bits/stdc++.h>
using namespace std;

int main(){
    int age ;
    cin >> age;
    if(age >= 50){
        cout << "old";
    }else if (age >= 19){
        cout << "adult";
    }else {
        cout << "not child";
    }
    return 0;
}