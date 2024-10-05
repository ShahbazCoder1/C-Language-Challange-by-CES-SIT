//Day 4 of 30 days Challange by CES SIT
//Perform arithmetic operations (Addition, Subtraction, Multiplication, Division, Modulus).

#include <stdio.h>
int main() {
    int num1, num2;
    char ch;

    printf("Simple Arithmetic Operations Program\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &ch);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(ch) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        case '%':
            if(num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Error! Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
}