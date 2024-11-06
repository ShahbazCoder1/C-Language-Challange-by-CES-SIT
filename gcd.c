// Day 26 of 30 days Challange by CES SIT
// Write a program using functions to find the Greatest Common Divisor (GCD) of Two Numbers.

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int n = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, n);
    return 0;
}