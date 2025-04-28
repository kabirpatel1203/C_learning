#include <stdio.h>

// Function definition for greeting
void greet() {
    printf("Hello! Welcome to the program.\n");
}

// Function definition for displaying a sum
void displaySum() {
    int num1 = 5, num2 = 10;
    int sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
}


void birthday(char name[],int age) { // parameter list
    printf("Happy Birthday %s. You are %d years old\n" , name, age);
}


double square(double num) {
    double squared =  num * num;
    return squared;
}


int main() {
    // Call the greet function
    greet();
    greet();

    // Call the displaySum function
    displaySum();


    char name[50] = "Kabir";
    int age  = 25;
    birthday(name, age); // passing arguments to the function

    double n = 5;
    double result = square(n); // calling the function and storing the result
    printf("The square of %lf is %.2lf\n", n, result); // printing the result

    return 0;
}

