#include <stdio.h>



int main(){

    int age;

    printf("Please enter your age:");
    scanf("%d", &age);

    if(age >=18){
        printf("You are an adult\n");
    }

    else if(age >=13 && age < 18){
        printf("You are a teenager\n");
    }
        
    else {
        printf("You are a child\n");
    }





    char grade;
    printf("Please enter your Grade:");
    scanf(" %c", &grade); // must have space before %c to ignore any whitespace characters.

    // use switch case statement if there are too many if else statements.
    // only constant values can be used in switch case statement.
    switch (grade) {
        case 'A':
            printf("You are Great\n");
            break;
        case 'B':
            printf("You are middle class\n");
            break;
        case 'C':
            printf("You are POor\n");
            break;
        default:
            printf("You are very poor\n");
            break;
    }



    // Ternary operator:
    // condition ? expression_if_true : expression_if_false;
    int firstNumber = 10, secondNumber = 20;
    int max = (firstNumber > secondNumber) ? firstNumber : secondNumber;
    printf("The maximum number is: %d\n", max);







    return 0;
}