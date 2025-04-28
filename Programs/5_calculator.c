#include <stdio.h>


int main(){

    char operator;
    double num1, num2, result;

    printf("Please Enter num1:");
    scanf("%lf", &num1);
    printf("Please Enter num2:");  
    scanf("%lf", &num2);

    printf("Please select what you want to do from the following:\n");
    printf(" Press 1 for Addition\n");
    printf(" Press 2 for Subtraction\n");   
    printf(" Press 3 for Multiplication\n");
    printf(" Press 4 for Division\n");
    printf(" Press 5 for Modulus\n");
    scanf(" %c" , &operator); // note the space before %c to ignore any whitespace characters.

    switch(operator){
        case '1':
            result = num1 + num2;
            printf("result is %26.4lf", result);
            break;

            case '2':
            result = num1 - num2;
            printf("result is %lf", result);
            break;

            case '3':
            result = num1 * num2;
            printf("result is %lf", result);
            break;

            case '4':
            result = num1 / num2;
            printf("result is %lf", result);
            break;

            // case '5':
            // result = num1 % num2;
            // printf("result is %lf", result);
            // break;


            default:
            printf("Please enter a valid operator\n");
            break;
    }









    return 0;

}