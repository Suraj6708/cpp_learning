// A virtual function is a member function in the base class that can be overridden in derived classes.

// Without virtual: the base function runs, even if the object is from a child class.
// With virtual: the child's version runs, like you expect.

// Without virtual keyword the method of reference type (pointer in c++) is called but with virtual referenced method is called (dynamic runtime)
// Dynamic method dispatch : c++ ( virtual ), java has inbuilt 

#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------
// Without Virtual 
class Animal {
  public:
    void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() {
      cout << "Dog barks\n";
    }
};

int main() {
  Animal* a;  // Declare a pointer to the base class (Animal)
  Dog d;  // Create an object of the derived class (Dog)
  a = &d;  // Point the base class pointer to the Dog object
  a->sound(); // Call the sound() function using the pointer. Since sound() is not virtual, this calls Animal's version
  return 0;
}

// -----------------------------------------

class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
  public:
    void sound() override {
      cout << "Dog barks\n";
    }
};

int main() {
  Animal* a;
  Dog d;
  a = &d;
  a->sound(); 
  return 0;
}
