#include<bits/stdc++.h>
#include <functional> 
using namespace std;

// A lambda function is a small, anonymous function you can write directly in your code. It's useful when you need a quick function without naming it or declaring it separately.

// [capture] (parameters) { code };

// function taking lamba function as a argument, its imp when you have to tell what what to do ;
void helper(function<void()> fun){
    fun();
    fun();
}

int main(){
    auto add = [](int a, int b){
        return a + b;
    };

    auto message = [](){
        return "hello suraj \n";
    };

    cout << add(3, 4);

    // lambda as arg to another function
    helper(message);
    return 0;
}

