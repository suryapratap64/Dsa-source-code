#include <stdio.h>
#include <string.h>
//kisi bhi character ko integer value me convert kare
s[i] - 'a' converts the character at index i of string s into an integer that represents the position of that character in the alphabet.
//kisi vlaue ko convert kare string me on loop
You need to convert it to the actual number by subtracting '0' from it: int key = digits[i] - '0';

.substr function=> for finding the sub part of the string ;
string s = "hello world";
string sub = s.substr(6, 5);  // Extracts "world"

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
