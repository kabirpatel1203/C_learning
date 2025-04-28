// A nested loop is a loop inside another loop. The inner loop executes completely for each iteration of the outer loop. Nested loops are commonly used for tasks like working with multi-dimensional arrays, patterns, or grids.
// for (initialization; condition; increment/decrement) {
//     for (initialization; condition; increment/decrement) {
//         // Code for the inner loop
//     }
//     // Code for the outer loop
// }



#include <stdio.h>

int main() {
    // Outer loop for rows
    for (int i = 1; i <= 5; i++) {
        // Inner loop for columns
        for (int j = 1; j <= 5; j++) {
            printf("%d\t", i * j); // Print the product
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}