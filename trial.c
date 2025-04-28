#include <stdio.h>

int main() {
    int num = 25;
    int *ptr = &num;

    printf("Address of num: %p\n", &num);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 50;  // Changing the value of num through ptr

    printf("New value of num: %d\n", num);

    return 0;
}
