// Inheritance allows one class to reuse attributes and methods from another class. It helps you write cleaner, more efficient code by avoiding duplication.Inheritance allows one class to reuse attributes and methods from another class. It helps you write cleaner, more efficient code by avoiding duplication.

// C++ also supports multilevel and multiple inheritance 

#include <bits/stdc++.h>
using namespace std;

class parent{
    public: 
        int v1;
        string v2;

        parent(int v1, string v2){
            cout << "parent constructor" << endl;
            this->v1 = v1;
            this->v2 = v2;
        }

        ~parent(){
            cout << "parent destructor" << endl;
        }

        void method(){
            cout << "parent method" << endl;
        }
    
        protected:
            int prt = 10;
};

class parent2 {
  public:
    void parent2_fun() {
      cout << "Parent2 function called" ;
    }
};

class child : public parent, public parent2 {
    public :
        int a , b;

        // while calling the child constructor you must specify paramenters of parent first 
        child(int a, int b) :  parent(123, "suraj"){
            cout << "child construcor " << endl;
            this->a = a;
            this->b = b;
        }

        ~child(){
            cout << "child destructor" << endl;
        }


        void method(){
            cout << "child method" << endl;
        }

        int getprotected(){
            cout << "protected value of parent : " << prt << endl;
            return prt;
        }
};

// Derived class (grandchild)
// Also called * MULTILEVEL INHERITANCE *
class MyGrandChild: public child {
    public: 
        MyGrandChild() : child(1,2){
            cout << "grandhcild construcor" << endl;
        }
};

int main() {
    child c(1,2);  // parent , child 
    c.method();     // child method 

    // MyGrandChild gc;  // parent, child , grandchild
    return 0;
}

// child destructor and then parent destructor called 