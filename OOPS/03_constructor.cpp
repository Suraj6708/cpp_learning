//A constructor is a special method that is automatically called when an object of a class is created.
// Constructor is used to instialize the values of variables 


// Constructor Rules
    // The constructor has the same name as the class.
    // It has no return type (not even void).
    // It is usually declared public.
    // It is automatically called when an object is created.

// In C++, you can have more than one constructor in the same class. This is called constructor overloading.
    // Each constructor must have a different number or type of parameters, so the compiler knows which one to use when you create an object.



#include <bits/stdc++.h>
using namespace std;

class Myclass{
    public : 
        int id;
        string name;

        Myclass(int id, string name){
            this->id = id;
            this->name = name;
        };

        Myclass(){
            cout << "constructor called ";
        }
};

int main() {
    Myclass myobj(123, "suraj");
    Myclass myobj2;
    return 0;
}


// constructor outside the class 

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}