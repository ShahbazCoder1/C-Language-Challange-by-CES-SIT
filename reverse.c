// Day 25 of 30 days Challange by CES SIT
// Practice writing a Program to Reverse a Number using Recursion.

#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev;
    } else {
        int d = num % 10;
        rev = rev * 10 + d;
        return reverseNumber(num / 10, rev);
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int r = reverseNumber(num, 0);

    printf("Reversed Number = %d\n", r);

    return 0;
}
