#include <stdio.h>



// Function prototypes
// Function prototypes are declarations of functions that specify the function's name, return type, and parameters.
// They are typically placed before the main function to inform the compiler about the functions that will be defined later in the code.
// This allows the compiler to check for correct usage of the functions in the main function or other functions that call them.
// Function prototypes are optional in C, but they are a good practice to include them for better code organization and readability.
// Function prototypes are also known as function declarations or function signatures.
// They provide a way to declare functions before their actual definitions, allowing the compiler to understand how to call them correctly.




void greet(); // Prototype for the greet function
int add(int a, int b); // Prototype for the add function

int main() {
    greet(); // Call the greet function

    int result = add(5, 10); // Call the add function
    printf("The sum is: %d\n", result);

    return 0;
}

// Function definitions (after main)
void greet() {
    printf("Hello! Welcome to the program.\n");
}

int add(int a, int b) {
    return a + b;
}