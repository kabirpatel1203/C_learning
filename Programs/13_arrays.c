#include <stdio.h>


// An array in C is a collection of elements of the same data type, stored in contiguous memory locations. Arrays are used to store multiple values in a single variable, making it easier to manage large amounts of data.
// Types of Arrays:
// One-Dimensional Array: A list of elements (e.g., [1, 2, 3]).
// Two-Dimensional Array: A table or matrix (e.g., [[1, 2], [3, 4]]).
// Multi-Dimensional Array: Arrays with more than two dimensions.


// --------------------------One Dimensional Array:--------------------------------------------------------

int main() {
    // Declare an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};


    // Print the size of the array
    printf("Size of the array: %lu bytes\n", sizeof(numbers));

    // Print how many elements are in the array 
    printf("Number of elements in the array: %lu\n", sizeof(numbers) / sizeof(numbers[0]));

    // Print the first element of the array
    printf("First element of the array: %d\n", numbers[0]);
    
    // Print the elements of the array using a for loop
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Calculate the sum of the array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}





// -----------------Two Dimensional Array Example:--------------------------------------------------------
#include <stdio.h>

// A two-dimensional array in C is like a table or matrix, where data is stored in rows and columns.

int main() {
    // Declare a 2D array of integers (3 rows and 3 columns)
    int numbers[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // Print the size of the 2D array
    printf("Size of the 2D array: %lu bytes\n", sizeof(numbers));

    // Print how many elements are in the 2D array
    printf("Number of elements in the 2D array: %lu\n", sizeof(numbers) / sizeof(numbers[0][0]));

    // Print the first element of the 2D array
    printf("First element of the 2D array: %d\n", numbers[0][0]);

    // Print the elements of the 2D array using nested for loops
    printf("2D Array elements:\n");
    for (int i = 0; i < 3; i++) { // Loop through rows
        for (int j = 0; j < 3; j++) { // Loop through columns
            printf("%d ", numbers[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    // Calculate the sum of all elements in the 2D array
    int sum = 0;
    for (int i = 0; i < 3; i++) { // Loop through rows
        for (int j = 0; j < 3; j++) { // Loop through columns
            sum += numbers[i][j];
        }
    }
    printf("Sum of all elements in the 2D array: %d\n", sum);

    return 0;
}