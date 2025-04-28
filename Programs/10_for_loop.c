#include <stdio.h>


// for (initialization; condition; increment/decrement) {
//     // Code to execute in each iteration
// }

// The for loop is a control flow statement that allows code to be executed repeatedly based on a given condition.
// It consists of three main parts: initialization, condition, and increment/decrement. The loop continues to execute as long as the condition is true.
// The initialization part is executed once at the beginning of the loop, and it is typically used to declare and initialize a loop control variable.
// The condition part is evaluated before each iteration, and if it evaluates to true, the loop body is executed. If it evaluates to false, the loop terminates.
// The increment/decrement part is executed after each iteration, and it is typically used to update the loop control variable.



int main() {
    for (int i = 0; i < 5; i++) { // Loop runs from i = 0 to i < 5
        printf("Iteration %d\n", i);
    }
    return 0;
}



/// difference between break and continue statements in loops:
// The break statement is used to exit a loop or switch statement prematurely. When a break statement is encountered, the control flow jumps to the statement immediately following the loop or switch.
// It is commonly used to terminate a loop when a certain condition is met or to exit a switch case when a match is found.
// The continue statement, on the other hand, is used to skip the current iteration of a loop and move to the next iteration. When a continue statement is encountered, the remaining code in the loop body for that iteration is skipped, and the loop proceeds to the next iteration. It is commonly used when you want to skip certain values or conditions within a loop without terminating the entire loop.
// The continue statement can be used in for, while, and do-while loops.


// Example of break statement:
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        printf("%d\n", i);
    }
    return 0;
}

// Example of continue statement:
int mai() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // Skip the iteration when i is 5
        }
        printf("%d\n", i);
    }
    return 0;
}