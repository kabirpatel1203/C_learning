// An enum (enumeration) in C is a user-defined data type that consists of a set of named integer constants. It is used to assign names to integral values, making the code more readable and maintainable.


// enum enum_name {
//     constant1,
//     constant2,
//     constant3,
//     // More constants...
// };


// enum_name: The name of the enumeration.
// constant1, constant2, ...: The named constants, which are assigned integer values starting from 0 by default.
// Why Use enum?
// Improves code readability by using meaningful names instead of numbers.
// Makes the code easier to maintain and debug.
// Helps in defining a set of related constants.



// Key Points About enum
// Default Values:

// By default, the first constant in an enum is assigned the value 0, and subsequent constants are incremented by 1.
// Custom Values:

// You can assign custom values to constants. If a constant is not explicitly assigned a value, it takes the value of the previous constant + 1.
// Type:

// enum constants are essentially integers.
// Use Cases:

// Representing days of the week, months, traffic signals, sizes, etc.
// Scope:

// enum constants are scoped to the enum type. If you need to use the same constant name in different contexts, use different enum types.



#include <stdio.h>

enum Months {
    January = 1,  // Start from 1
    February,     // 2
    March,        // 3
    April = 10,   // Custom value
    May,          // 11
    June          // 12
};

int main() {
    printf("January: %d\n", January);
    printf("April: %d\n", April);
    printf("June: %d\n", June);

    return 0;
}



#include <stdio.h>

enum TrafficLight {
    Red,
    Yellow,
    Green
};

int main() {
    enum TrafficLight signal = Yellow;

    switch (signal) {
        case Red:
            printf("Stop!\n");
            break;
        case Yellow:
            printf("Get Ready!\n");
            break;
        case Green:
            printf("Go!\n");
            break;
        default:
            printf("Invalid signal.\n");
    }

    return 0;
}



#include <stdio.h>

typedef enum {
    Small = 1,
    Medium,
    Large
} Size;

int main() {
    Size tshirt = Medium;

    printf("T-shirt size: %d\n", tshirt); // Output: 2

    return 0;
}