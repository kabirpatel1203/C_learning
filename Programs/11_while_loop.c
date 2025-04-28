#include <stdio.h>
#include <string.h>  // Include string.h for string manipulation functions
// While Loop: Basic Tutorial
// A while loop is used to execute a block of code repeatedly as long as a given condition is true. The condition is checked before the loop body is executed.

// while (condition) {
//     // Code to execute while the condition is true
// }

// DO NOT USE FSCAN IF WHITESPACE OR FOR WHILE LOOPS. USE FGETS INSTEAD.



// ----------- Basic while loop example --------------
int main() {
    int i = 1;

    // Print numbers from 1 to 5
    while (i <= 5) {
        printf("%d\n", i);
        i++; // Increment i
    }



// ----------- Using while loop to validate user input --------------

    char name[50]; // Declare the name array

    // Keep prompting the user until they enter a valid name
    while (1) {
        printf("Please enter your name: ");
        fgets(name, sizeof(name), stdin); // Read the input including spaces

        // Remove the newline character from the input
        name[strcspn(name, "\n")] = '\0';

        if (strlen(name) > 0) {
            break; // Exit the loop if the user enters a valid name
        }

        printf("You did not enter your name. Try again.\n");
    }

    printf("Hello, %s!\n", name); // Greet the user after they enter their name


// ----------- Using do while loop example --------------
// while loop checks the condition for the first time before executing the loop body. If the condition is false, the loop body will not be executed at all.
// The do while loop, on the other hand, executes the loop body at least once before checking the condition. This means that even if the condition is false, the loop body will be executed once.
// do {
//     // Code to execute
// } while (condition);

// Aspect 
// | while Loop 
// | do-while Loop

// Condition checked 
// | Before the loop body (pre-test loop) 
// | After the loop body (post-test loop)


// Guarantees execution? 
// | No, it may not execute at all if the condition is false initially 
// | Yes, it executes at least once


// Typical use case 
// | When you may not want to execute the loop at all (condition can be false initially) 
// | When you want to ensure the loop runs at least once, regardless of the condition



// Example 
// | Checking if a user input meets a condition before running the loop 
// | Asking a user for input and ensuring they are asked at least once



int number = 1;
int sum =0 ;

do{
    printf("Enter a number above 0: ");
    scanf("%d", &number); // Read the number from the user
    if (number > 0){
        sum += number; // Add the number to the sum
    }
    else if (number < 0){
        printf("You entered a negative number. Exiting the loop.\n");
    }
}while(number > 0); 










    return 0;
}