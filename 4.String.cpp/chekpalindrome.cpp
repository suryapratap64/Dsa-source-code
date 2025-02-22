//In the C++ programming language, isalnum is a function that checks whether a character is alphanumeric, meaning it is either a letter (A-Z or a-z) or a digit (0-9). It returns a nonzero value if the character is alphanumeric, and zero otherwise.
#include <iostream>
#include <cctype>

int main() {
    char ch1 = 'A';
    char ch2 = '9';
    char ch3 = '#';

    if (isalnum(ch1)) {
        std::cout << ch1 << " is alphanumeric.\n";
    } else {
        std::cout << ch1 << " is not alphanumeric.\n";
    }

    if (isalnum(ch2)) {
        std::cout << ch2 << " is alphanumeric.\n";
    } else {
        std::cout << ch2 << " is not alphanumeric.\n";
    }

    if (isalnum(ch3)) {
        std::cout << ch3 << " is alphanumeric.\n";
    } else {
        std::cout << ch3 << " is not alphanumeric.\n";
    }

    return 0;
}


#include <iostream>
using namespace std;
bool checkpalindrome(char ch[],int& n)
{
    int s = 0;
    int e = n-1;
    bool flag =true;
    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            cout << "NO" << endl;
            flag=false;
            return flag;
        }

        else
        {
            s++;
            e--;
        }
    }
    cout << "YES" << endl;
    return flag;
}
//
int main()
{
    int n;
    cin>>n;
    char ch[22];
    cin >> ch;
    checkpalindrome(ch,n);

    return 0;
}
