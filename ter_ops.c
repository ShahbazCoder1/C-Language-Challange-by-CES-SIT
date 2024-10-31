// Day 7 of 30 days Challange by CES SIT
// Implement a Program using the Ternary (Conditional) Operator.

#include <stdio.h>
int main(){
    int num1, num2, max;
    printf("Enter a Number: ");
    scanf("%d", &num1);
    printf("Enter another Number: ");
    scanf("%d", &num2);
    max = (num1 > num2) ? num1 : num2;
    printf("The maximum number is: %d\n", max);
    return 0;
}