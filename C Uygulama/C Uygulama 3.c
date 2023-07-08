#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    num1 = 55;
    num2 = 148;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("num1 = %d\n", *ptr1);
    printf("num2 = %d\n", *ptr2);
    return 0;
}