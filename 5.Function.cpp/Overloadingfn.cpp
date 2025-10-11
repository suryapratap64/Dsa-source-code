#include <iostream>
using namespace std;

/*
    ===============================
    FUNCTION OVERLOADING EXAMPLE
    ===============================

    Definition:
    Function overloading allows multiple functions 
    with the same name but different parameters 
    (number, type, or order) to exist in the same scope.

    Key Points:
    - Same function name with different:
        1. Number of parameters
        2. Type of parameters
        3. Order of parameters
    - Return type alone cannot distinguish overloaded functions.
    - Implements compile-time polymorphism (decided at compile time).
    - Improves readability and usability of the code.
*/

class Calculator {
public:
    // Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Add two doubles
    double add(double a, double b) {
        return a + b;
    }

    // Add integer and double
    double add(int a, double b) {
        return a + b;
    }

    // Add double and integer
    double add(double a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Add 2 integers: " << calc.add(5, 10) << endl;
    cout << "Add 3 integers: " << calc.add(5, 10, 15) << endl;
    cout << "Add 2 doubles: " << calc.add(5.5, 4.5) << endl;
    cout << "Add int and double: " << calc.add(5, 4.5) << endl;
    cout << "Add double and int: " << calc.add(5.5, 4) << endl;

    return 0;
}

/*
    ====================================================
    DIFFERENCE BETWEEN FUNCTION OVERLOADING & OVERRIDING
    ====================================================

    Feature                  | Function Overloading                    | Function Overriding
    -------------------------|----------------------------------------|-----------------------------------------
    Definition               | Same function name, different params  | Same function name, same params in base and derived
    Polymorphism Type        | Compile-time (Static polymorphism)    | Run-time (Dynamic polymorphism) using 'virtual'
    Return Type              | Can be different                       | Must be same or covariant
    Scope                    | Same class or derived class             | Base and derived class
    Parameters               | Must differ (number, type, order)      | Must be same
    Keyword Needed           | No                                      | 'virtual' in base class (optional but recommended)
    Example                  | add(int, int) & add(double, double)   | class Base { virtual void show(); }; class Derived : public Base { void show(); };

    Summary:
    - Overloading → Same function name, different signatures, compile-time polymorphism.
    - Overriding → Redefining a base class function in derived class, run-time polymorphism.
    - Usage:
        - Overloading: For readability and convenience
        - Overriding: For dynamic behavior in inheritance
*/
