#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h> 

int main() {

    // ----------------------1. COMMENTS:------------------------------------------------------------------------------------------------------//


    // this is a single line comment
    /* This is a multi
    line comment*/

    // \n 


    // -----------------------2. PRINTING and Escape Characters:-----------------------------------------------------------------------------------------------------------//
    printf("Hello, World!\n");
    printf("Hello, India!\n");
    printf("Hello, 1\t2\t3\t4");




    //-------------------------- 3. VARIABLES:-----------------------------------------------------------------------------------------------------------//


    // Variable = Allocated space in memroy to store a value. lIke a container
    // we refer to a avriable name to access the stored value.
    // That variable now behaves as if it was the value it contains.
    // but we need to declare what type od data we are storing.
    // So, basically, we have to declare the variable first and then initailize it.

    // data types like int, float, char, double, etc.
    int x; // declaration
    x = 10 ;// initialization
    
    // OR

    int y = 20; // declaration and initialization
    printf("x is %d", x);
    printf("y is %d", y);
    printf("y is %d and x is %d", y, x);

    // we do not have string as string is an object in C.
    // we have char array which is a string in C.
    // we can define like this:
    char name[20] = "Kabir Patel"; // declaration & initialization (array of characters)  
    // has the memory of 20 characters (19 + 1 for null character)
    // if it is empty then the compiler allocates just the enough memory for the string.

    printf("name is %s", name); // %s is used to print string




    // ---------------------4. DATA TYPES--------------------------------------------------------------------------------------//



    int a = 10;
    float b = 3.14;
    double c = 2.718281828;
    char d = 'A';
    char str[] = "Hello, World!";
    long e = 1234567890;
    unsigned int f = 42;
    bool g = true; // 0 for false and 1 for true
    short int h = 32767; // 2 bytes or 16 bits - range is -32,768 to 32,767
    long long int ab = 9223372036854775807; // Maximum value for signed long long
    long long int bc = -9223372036854775807 - 1; // Minimum value for signed long long
    unsigned long long int cd = 18446744073709551615U; // Maximum value for unsigned long long - have to use U at the end

    printf("int: %d\n", a); // 4 bytes or 32 bits - range is -2,147,483,648 to 2,147,483,647
    printf("float: %f\n", b); // 4 bytes or 32 bits - less accuracy and range is -3.4E38 to 3.4E38
    printf("double: %lf\n", c); // 8 bytes or 64 bits - more accuracy and range is -1.7E308 to 1.7E308
    printf("double: %0.13lf\n", c); // how many decimal points to print and range is -1.7E308 to 1.7E308
    printf("char: %c\n", d); // 1 byte or 8 bits and range is -128 to 127
    // unsigned char is 0 to 255. it is basically positive only.
    // char is signed by default. so it can be negative as well.
    // If we go beyond the limit then it is overflow and will restart from the minimum value.
    // for example, if we have 127 and we add 1 to it then it will become -128.
    // if you use format specifier %d then it will print the ASCII value of the character.
    // for example, if we have 'A' then it will print 65.

    
    printf("short int: %d\n", h); // 2 bytes or 16 bits - range is -32,768 to 32,767
    // unsigned short int is 0 to 65,535. it is basically positive only.

    // for mostly it doubles the size if we use unsigned.
    // By default, all are signed. So, if we want to use unsigned then we have to specify it with the unsigned keyword.
    // For example, we can define "unsigned int a = 10;" or "unsigned short int a = 10;" or "unsigned long int a = 10;"" etc.


    // long long int is 8 bytes or 64 bits - range is -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    // unsigned long long int is 0 to 18,446,744,073,709,551,615. it is basically positive only.
    // for example, we can define "unsigned long long int a = 10;" or "unsigned long long int a = 10;"" etc.

    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Signed long long int range: %lld to %lld\n", bc, ab);
    printf("Unsigned long long int range: 0 to %llu\n", cd);
    printf("string: %s\n", str); 
    printf("long: %ld\n", e); // 8 bytes or 64 bits - range is -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    printf("unsigned int: %u\n", f); // 4 bytes or 32 bits - range is 0 to 4,294,967,295
    printf("Boolean g: %d\n", g); // Prints 1 for true and 0 for false






// ------------------5. FORMAT SPECIFIERS:----------------------------------------------------------------- //



// write for all the data types
// %d - int
// %f - float
// %lf - double
// %c - char
// %s - string
// %ld - long int
// %lld - long long int
// %u - unsigned int
// %lu - unsigned long int
// %llu - unsigned long long int
// %x - hexadecimal
// %o - octal
// %e - scientific notation
// %g - general format
// %p - pointer


float item1 = 5.75;
printf("Item 1: %8.2f\n", item1); // %.2f is used to print float with 2 decimal points, 8 is basically minimum width of the field.
// if the number positive then it will be right aligned and if negative then it will be left aligned.



// ------------------------------------------ 6. CONSTANTS---------------------------------------------------//

// Constants are fixed values that do not change during the execution of a program.
// They are used to represent values that are not expected to change, such as mathematical constants, physical constants, or configuration values.

 const float pi = 3.14; // pi is a constant value
 printf("pi is %f\n", pi); // pi is a constant value and cannot be changed.




// ------------------------------ 7. Arithmetic Operators---------------------------------------------------//


 // Arithmetic operators are used to perform mathematical operations on operands.
    // + - addition
    // - - subtraction
    // * - multiplication
    // / - division
    // % - modulus (remainder of division)
    // ++ - increment (increase by 1)
    // -- - decrement (decrease by 1)
    // += - add and assign
    // -= - subtract and assign
    // *= - multiply and assign
    // /= - divide and assign
    // %= - modulus and assign
    // ++a - pre-increment (increment before using the value)
    // a++ - post-increment (increment after using the value)
    // --a - pre-decrement (decrement before using the value)
    // a-- - post-decrement (decrement after using the value)

    int num1 = 10;
    int num2 = 5;
    int sum = num1 + num2; // addition

    printf("Sum: %d\n", sum); // prints 15
    printf("Difference: %d\n", num1 - num2); // prints 5



// ------------------------------ 8. Augmented Assignment Operators---------------------------------------------------//

// Augmented assignment operators are shorthand for performing an operation and assigning the result to a variable in one step.
int abc = 10;
abc += 5; // equivalent to a = a + 5;
printf("a after += 5: %d\n", abc); // prints 15   





// ------------------------------------- 9. User Input---------------------------------------------------//


// User input is taken using scanf() function. It is used to read formatted input from the standard input (keyboard).


int userInput;
char userChar[20];

printf("Enter an integer: ");
scanf("%d", &userInput); // %d is used to read an integer value
printf("You entered: %d\n", userInput); // prints the value entered by the user



printf("Enter a String: ");
scanf(" %s", &userChar); // %c is used to read a character value. Note the space before %c to ignore any whitespace characters.
printf("You entered: %s\n", userChar); // prints the character entered by the user


// use fgets() to read a string with spaces



// ------------------------------ 10. Math Functions---------------------------------------------------//


// Math functions are used to perform mathematical operations on numbers. They are defined in the math.h header file.


double squareRoot = sqrt(16.0); // square root of 16
double power = pow(2.0, 3.0); // 2 raised to the power of 3
double absoluteValue = fabs(-5.0); // absolute value of -5
double sineValue = sin(30.0); // sine of 30 degrees (in radians)
double cosineValue = cos(30.0); // cosine of 30 degrees (in radians)
double tangentValue = tan(30.0); // tangent of 30 degrees (in radians)
double logarithmValue = log(10.0); // natural logarithm of 10
double exponentialValue = exp(2.0); // e raised to the power of 2
double roundValue = round(3.6); // round 3.6 to the nearest integer
double floorValue = floor(3.6); // round down 3.6 to the nearest integer
double ceilValue = ceil(3.6); // round up 3.6 to the nearest integer
double maxValue = fmax(3.0, 5.0); // maximum of 3.0 and 5.0
double minValue = fmin(3.0, 5.0); // minimum of 3.0 and 5.0
// double randomValue = rand() % 100; // random number between 0 and 99

printf("Square root of 16: %lf\n", squareRoot); // prints 4.0
printf("2 raised to the power of 3: %lf\n", power); // prints 8.0
printf("Absolute value of -5: %lf\n", absoluteValue); // prints 5.0
printf("Sine of 30 degrees: %lf\n", sineValue); // prints -0.499999
printf("Cosine of 30 degrees: %lf\n", cosineValue); // prints 0.866025  
printf("Tangent of 30 degrees: %lf\n", tangentValue); // prints -0.577350
printf("Natural logarithm of 10: %lf\n", logarithmValue); // prints 2.302585
printf("e raised to the power of 2: %lf\n", exponentialValue); // prints 7.389056
printf("Round 3.6 to the nearest integer: %lf\n", roundValue); // prints 4.0
printf("Round down 3.6 to the nearest integer: %lf\n", floorValue); // prints 3.0
printf("Round up 3.6 to the nearest integer: %lf\n", ceilValue); // prints 4.0
printf("Maximum of 3.0 and 5.0: %lf\n", maxValue); // prints 5.0
printf("Minimum of 3.0 and 5.0: %lf\n", minValue); // prints 3.0
// printf("Random number between 0 and 99: %lf\n", randomValue); // prints a random number between 0 and 99











    return 0;
}