// Access specifiers control how the members (attributes and methods) of a class can be accessed.

// In C++, there are three access specifiers:
    // public - members are accessible from outside the class
    // private - members cannot be accessed (or viewed) from outside the class
    // protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

#include <bits/stdc++.h>
using namespace std;

class AMF{

    int x, y; // default all the variables are private

    public:
        int x = 0;
    private:
        int y = 2;
    protected:
        int z = 3;
};

int main() {
    AMF obj ;
    obj.x;  // accessed 
    // obj.y;  // error ( inacccessible )
    // obj.z;  // error (inaccessible )
    return 0;
}