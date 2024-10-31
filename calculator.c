// Day 8 of 30 days Challange by CES SIT
// Implement a Program using Switch-Case to Simulate a Simple Menu. OR Create a Simple Calculator using Switch-Case.

#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter a Number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter a Number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", (int) (num1), (int) (num2), (int) (num1 + num2));
            break;
        case '-':
            printf("%d + %d = %d\n", (int) (num1), (int) (num2), (int) (num1 - num2));
            break;
        case '*':
            printf("%d + %d = %d\n", (int) (num1), (int) (num2), (int) (num1 * num2));
            break;
        case '/':
            if (num2 != 0) {
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
