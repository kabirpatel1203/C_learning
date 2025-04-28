// A structure in C is a user-defined data type that allows you to group variables of different data types under one name. It is useful for organizing and managing related data.
// https://www.w3schools.com/c/c_structs.php



// struct structure_name {
//     data_type member1;
//     data_type member2;
//     // More members...
// };

// Key Points About Structures
// Grouping Data:

// Structures allow you to group related variables (e.g., name, age, height) into a single unit.
// Accessing Members:

// Use the dot operator (.) to access members of a structure.
// Memory Allocation:

// Each structure variable has its own copy of the members.



#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a structure variable
    struct Person person1;

    // Assign values to the structure members
    strcpy(person1.name, "Alice");
    person1.age = 25;
    person1.height = 5.6;

    // person 2
    struct Person person2 = {"Bob", 30, 6.0};

    // Access and print the structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    //array of structures   
    struct Person people[2] = {person1, person2};


    return 0;
}