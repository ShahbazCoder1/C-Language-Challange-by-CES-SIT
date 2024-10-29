// Day 22 of 30 days Challange by CES SIT
// Write a Program to Implement Basic Functions (ADDITION, SUBTRACTION).

#include <stdio.h>
int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int main() {
    int num1, num2, choice, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
