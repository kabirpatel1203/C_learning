#include <stdio.h>

int main(){
    printf("Calculate the Circumference of a circle\n");

    const double PI = 3.14; // constant value of PI
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius); // read the radius from user

    circumference = 2*PI *radius; // calculate the circumference
    printf("the circumference with radius %lf is %lf", radius, circumference); // print the result

    printf("\n");
    area = PI * radius * radius; // calculate the area
    printf("The area of circle with radius %lf is %lf", radius, area);




    return 0;
}