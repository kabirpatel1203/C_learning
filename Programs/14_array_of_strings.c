// An array of strings in C is essentially a 2D character array, where each row represents a string, and each column represents a character in that string.

// char array_name[number_of_strings][max_string_length];



// Example 1: Basic Array of Strings
#include <stdio.h>

int main() {
    // Declare and initialize an array of strings
    char fruits[3][20] = {
        "Apple",
        "Banana",
        "Cherry"
    };

    // Print all strings in the array
    printf("Fruits:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}



// Example 2: Accessing and Modifying Strings

#include <stdio.h>
#include <string.h>

int main() {
    // Declare an array of strings
    char cities[3][20] = {
        "New York",
        "Los Angeles",
        "Chicago"
    };

    // Print the original strings
    printf("Original Cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", cities[i]);
    }

    // Modify a string
    strcpy(cities[1], "San Francisco"); // Replace "Los Angeles" with "San Francisco"

    // Print the modified strings
    printf("\nModified Cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", cities[i]);
    }

    return 0;
}


// Example 3: Find the Longest String

#include <stdio.h>
#include <string.h>

int main() {
    // Declare an array of strings
    char animals[4][20] = {
        "Elephant",
        "Dog",
        "Cat",
        "Giraffe"
    };

    // Find the longest string
    int max_length = 0;
    char longest[20];
    for (int i = 0; i < 4; i++) {
        if (strlen(animals[i]) > max_length) {
            max_length = strlen(animals[i]);
            strcpy(longest, animals[i]);
        }
    }

    printf("The longest animal name is: %s\n", longest);

    return 0;
}



// Example 4: Sorting an Array of Strings


#include <stdio.h>
#include <string.h>

int main() {
    // Declare an array of strings
    char names[5][20] = {
        "Zara",
        "Alice",
        "Bob",
        "Charlie",
        "Eve"
    };

    // Sort the strings alphabetically
    char temp[20];
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) { // Compare strings
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Print the sorted strings
    printf("Sorted Names:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}