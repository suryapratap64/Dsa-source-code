#include <bits/stdc++.h>
using namespace std;
int main()
{
  //int +long=long =>for converting int to long add zero at the end of int
    int a = a;
    cout << a << endl;
    char ch = 97;

    cout << ch << endl;
    char ch1 = 42;
    cout << ch1 << endl;
    // unsigned int take only positive number;
    unsigned int a1 = 133;
    cout << a1 << endl;
 //string to integer
      // type of explicit type casting
 string s="526456";
  int myint1 = stoi(s);
  cout<<myint1<<endl;

    return 0;
//integer to string vlaue
string to_string (int val);
int n=9769;
string s = to_string(n);
cout<<s;
}

// 1. static_cast<new_type>(expression) : This is used for general type casting. It is the most commonly used type casting operator in C++. It is used to convert one type to another type. It does not require any special function or operator to perform the conversion. It is similar to the C-style type casting but is more restrictive and has some additional features.
int main()
{
    double d = 3.14;
    int i = static_cast<int>(d);
    cout << i << endl;
    return 0;
}


// 2. dynamic_cast<new_type>(expression) : This is used for casting pointers in polymorphic class hierarchies. It is used to perform safe downcasting. It is used to ensure that the result of the type conversion is a valid complete object of the requested class. It is used only with pointers and references to objects. It is used at runtime. It is slower than static_cast.
class Base
{
  public:
    virtual void print()
    {
        cout << "Base" << endl;
    }
    
  }

// How static_cast<long long> Fixes This

// long long x = (static_cast<long long>(n) * (n + 1)) / 2;
// static_cast<long long>(n) converts n to long long before multiplication.
// This ensures the entire calculation n * (n + 1) happens in 64-bit integer arithmetic, preventing overflow.
// The result is correctly stored in x without loss of precision.