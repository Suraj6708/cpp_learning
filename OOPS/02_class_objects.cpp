// Everything in C++ is associated with classes and objects, along with its attributes and methods
// methods can be created inside or outside a class 

// outer method : This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:

#include <bits/stdc++.h>
using namespace std;

int main() {
    Myclass myobj;  // object creation 
    Myclass myobj2;

    myobj.id = 123;
    myobj.name = "suraj";

    myobj.mymethod();       // method is called     
    myobj2.mymethod2();     // outer method called 

    return 0;
}


class Myclass {  // class 
    public:      // access modifier
        int id;  // attribute 
        string name;

        void mymethod(){   // inside class method 
            cout << "inside class method declaration";
        }

        void mymethod2(); // outside class method 
};

void Myclass::mymethod2(){
    cout << "outer method declaration";
}