// 1. Swapping Two Characters

#include <stdio.h>

int main() {
    char a = 'X', b = 'Y';

    printf("Before swapping: a = %c, b = %c\n", a, b);

    // Swapping logic
    char temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %c, b = %c\n", a, b);

    return 0;
}


// 2. Swapping Two Strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";

    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);

    // Swapping logic
    char temp[50]; // Temporary array to hold one string
    strcpy(temp, str1); // Copy str1 to temp
    strcpy(str1, str2); // Copy str2 to str1
    strcpy(str2, temp); // Copy temp to str2

    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}