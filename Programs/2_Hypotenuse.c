#include <stdio.h>
#include <math.h>


int main(){

    // hypotenuse  = (a**2 + b**2)**1/2

    double a;
    double b;
    double hypotenuse;

    printf("Please enter the value of A:");
    scanf("%lf", &a);

    printf("Please Enter the value of B:");
    scanf("%lf", &b);

    hypotenuse = sqrt(a*a+b*b);
    printf("The hypotenuse with sides %lf and %lf is %lf", a,b,hypotenuse);
    





    return 0;

}