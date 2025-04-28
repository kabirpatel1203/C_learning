#include <stdio.h>
#include <string.h>  // Include string.h for string manipulation functions

int main() {
    char str1[50] = "Hello", str2[] = "World";


    // uppercase and lowercase conversion
    printf("Uppercase: %s\n", strupr(str1)); // Convert to uppercase
    printf("Lowercase: %s\n", strlwr(str1)); // Convert to lowercase
    printf("Reversed: %s\n", strrev(str1)); // Reverse the string

    printf("Length: %zu\n", strlen(str1)); // Get string length
    strcpy(str1, str2); // Copy str2 to str1
    strcat(str1, "!!!"); // Concatenate "!!!" to str1
    printf("Concatenated: %s\n", str1);

    int cmp = strcmp("abc", "xyz"); // Compare strings
    printf("Comparison: %d\n", cmp);

    char *found = strchr("Hello", 'e'); // Find first occurrence of 'e'
    printf("Found: %s\n", found);

    char *substr = strstr("Hello, World!", "World"); // Find substring
    printf("Substring: %s\n", substr);

    return 0;
}