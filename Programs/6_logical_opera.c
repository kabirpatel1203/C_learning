#include <stdio.h>


// Logical operators are used to combine two or more conditions. They are used in conditional statements to evaluate multiple conditions at once.
// The logical operators are:
// 1. AND (&&) - returns true if both conditions are true
// 2. OR (||) - returns true if at least one condition is true  
// 3. NOT (!) - reverses the logical state of its operand. If the condition is true, it becomes false and vice versa.



int main(){

    double weather;

    printf("Please enter waether:");
    scanf("%lf", &weather);


    if(weather <0 && weather>100) {
        printf("IT IS CATASTROPIC\n");
    
    }

    if ( weather !=0){
        printf("it is not zero\n");
    }

    if (weather == 10 || weather == 200){
        printf("it is 10 or 200");
    }


    return 0;

}