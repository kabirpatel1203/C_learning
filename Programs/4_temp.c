#include <stdio.h>
#include <ctype.h>



int main(){

    char temper;
    double fahren, celsius;
    double value;


    printf("Is the temperature in C or F?:");
    scanf("%c", &temper);

    // fahren = 1.8* value +32;
    // celsius = (value - 32)/1.8;

    if (temper == 'F'){
        printf("what is it in F?");
        scanf("%lf", &value);
        celsius = (value - 32)/1.8;
        printf("The temperature of %lf F in C is %lf", value, celsius);
    }

    else if (temper == 'C'){
        printf("what is it in C?");
        scanf("%lf", &value);
        fahren = 1.8* value +32;
        printf("The temperature of %lf C in F is %lf", value, fahren);
    }

    else {
        printf("Please enter a valid temperature in C or F");
    }

    return 0;

}