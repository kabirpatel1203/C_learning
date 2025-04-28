// The typedef keyword in C is used to create aliases (alternative names) for existing data types. It helps improve code readability and makes complex data types easier to use.


// typedef existing_type new_name;
// existing_type: The original data type (e.g., int, float, struct).
// new_name: The alias or new name for the data type.
// Why Use typedef?
// Simplifies complex data types (e.g., pointers, structures).
// Improves code readability and maintainability.
// Makes it easier to change data types in the future.


#include <stdio.h>

typedef unsigned int uint; // Create an alias for unsigned int

int main() {
    uint age = 25; // Use the alias instead of unsigned int
    printf("Age: %u\n", age);
    return 0;
}



#include <stdio.h>

// Define a structure
typedef struct {
    char name[50];
    int age;
    float height;
} Person; // Create an alias for the structure

int main() {
    Person p1; // Use the alias instead of struct keyword

    // Assign values
    strcpy(p1.name, "Alice");
    p1.age = 25;
    p1.height = 5.6;

    // Print values
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);

    return 0;
}