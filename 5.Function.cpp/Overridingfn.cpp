#include <iostream>
using namespace std;

/*
    ===============================
    FUNCTION OVERRIDING EXAMPLE
    ===============================

    Definition:
    Function overriding allows a derived class to redefine
    a base class function with the same name and parameters.
    Enables runtime (dynamic) polymorphism.

    Key Points:
    - Same function name and same parameters as in base class.
    - Return type must be same (or covariant).
    - Base class function should be marked 'virtual' for proper overriding.
    - Implemented in inheritance (base → derived).
    - Runtime polymorphism: function to call is decided at runtime.
*/

class Base {
public:
    virtual void display() {   // virtual keyword enables overriding
        cout << "Display from Base class" << endl;
    }

    void show() {              // Non-virtual, cannot be overridden dynamically
        cout << "Show from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {   // Overrides Base::display()
        cout << "Display from Derived class" << endl;
    }

    void show() {               // Hides Base::show() (not true overriding)
        cout << "Show from Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    cout << "Calling display() via Base pointer: ";
    basePtr->display();   // Runtime polymorphism → calls Derived::display()

    cout << "Calling show() via Base pointer: ";
    basePtr->show();      // Calls Base::show() → not overridden dynamically

    return 0;
}

/*
    ====================================================
    DIFFERENCE BETWEEN FUNCTION OVERRIDING & OVERLOADING
    ====================================================

    Feature                  | Function Overloading                     | Function Overriding
    -------------------------|-----------------------------------------|-----------------------------------------
    Definition               | Same function name, different parameters| Same function name, same parameters in base & derived
    Polymorphism Type        | Compile-time (Static)                   | Run-time (Dynamic) using 'virtual'
    Return Type              | Can be different                        | Must be same or covariant
    Scope                    | Same class or derived class              | Base and derived class
    Parameters               | Must differ (number, type, order)       | Must be same
    Keyword Needed           | No                                       | 'virtual' in base class
    Example                  | add(int,int) & add(double,double)       | class Base { virtual void show(); }; class Derived : public Base { void show(); };

    Summary:
    - Overloading → compile-time polymorphism
    - Overriding → runtime polymorphism
    - Overloading used for readability & convenience
    - Overriding used for dynamic behavior in inheritance
*/
