// Day 28 of 30 days Challange by CES SIT
// Implement a program using Recursive functions to find the Sum of Digits of a Number.

#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + sumOfDigits(num / 10); 
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = sumOfDigits(num);
    printf("Sum of digits of %d = %d\n", num, sum);
    return 0;
}
