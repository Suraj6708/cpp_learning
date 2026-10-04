// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.

// To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
// If you want others to read or modify the value of a private member, you can provide public get and set methods.


// Normally, private members of a class can only be accessed using public methods like getters and setters. But in some cases, you can use a special function called a friend function to access them directly.

// A friend function is not a member of the class, but it is allowed to access the class's private data:


#include <bits/stdc++.h>
using namespace std;

class Encapsulation{
    private:
        int balance = 2;
    public:
        int getter() {
            return this->balance;
        }
        void setter(int bal){
            this->balance = bal;
        }

        friend void getBalance(Encapsulation emc);  // friend method declared 
};

void getBalance(Encapsulation emc){
    cout << emc.balance << endl;
}

int main() {
    Encapsulation obj ;

    cout << obj.getter() << endl;
    obj.setter(100);

    cout << obj.getter();
    return 0;
}