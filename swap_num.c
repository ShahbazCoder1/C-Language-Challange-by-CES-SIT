// Day 27 of 30 days Challange by CES SIT
// Write a program to Swap Two Variables Using Call by Value and Call by Reference.

#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside Swapping by Value: a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside Swapping by Reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call by value
    swapByValue(num1, num2);

    // Call by reference
    swapByReference(&num1, &num2);
    return 0;
}
