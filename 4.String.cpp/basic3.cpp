#include <stdio.h>
#include <string.h>
//kisi bhi character ko integer value me convert kare
s[i]-'a' converts the character at index i of string s into an integer that represents the position of that character in the alphabet.
//kisi vlaue ko convert kare string me on loop
You need to convert it to the actual number by subtracting '0' from it: int key=digits[i] - '0';

.substr function=> for finding the sub part of the string ;
string s = "hello world";
string sub = s.substr(6, 5);  // Extracts "world"


//string adding methods
 t[j]=s[i]; //by equal methods add the string;

 // string initialization by this method;
string t(n, ' ');//n=size of string;
/string t(n + m, ' ');
// What it does:

// Creates a std::string named t with a size of n + m.
// The string is initialized with n + m spaces (' ').
// For example:
// If n = 3 and m = 2, then t will be " " (5 spaces).
// Key feature: The constructor of the std::string class is used to specify the size and the character for initialization.

 istringstream stream(sentence);//leetcode=>1455 
//The line istringstream stream(sentence); in C++ is used to create an input string stream from a string, allowing you to treat the string sentence as an input stream, similar to how cin is used for console input. Here's what it means and does:
        
int main() {
    char mainString[100]; // Change the size as needed
    char subString[50];   // Change the size as needed

    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);
    mainString[strcspn(mainString, "\n")] = '\0'; // Remove newline if present

    printf("Enter the substring to search for: ");
    fgets(subString, sizeof(subString), stdin);
    subString[strcspn(subString, "\n")] = '\0'; // Remove newline if present

    char *result = strstr(mainString, subString);

    if (result != NULL) {
        printf("Substring found at index: %ld\n", result - mainString);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
