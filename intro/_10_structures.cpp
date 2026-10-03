#include<bits/stdc++.h>
using namespace std;

//Structures (also called structs) are a way to group several related variables into one place.
// struct can contain different data types 
// we can create multiple structs like this 
// we can also assign struct to variable and use it as a blueprint
int main(){

    // syntax 
    struct {  // declaration
        int age ;  // member
        string name ;
    } mystruct, mystruct2;  // variable

    mystruct.age = 10;
    mystruct.name = "suraj";


    // assigning to varibale 
    struct car {
        string name;
        int number;
    };

    car honda;
    honda.name = "honda";
    honda.number = 897;

    
}