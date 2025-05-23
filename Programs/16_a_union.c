// https://www.geeksforgeeks.org/c-unions/


#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);

    strcpy(data.str, "Hello World");
    printf("data.str: %s\n", data.str);

    // Let's print all again:
    printf("\nAfter all assignments:\n");
    printf("data.i: %d\n", data.i);
    printf("data.f: %.2f\n", data.f);
    printf("data.str: %s\n", data.str);

    return 0;
}
