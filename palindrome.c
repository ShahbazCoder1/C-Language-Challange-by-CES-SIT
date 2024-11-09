// Day 13 of 30 days Challange by CES SIT
// WRITE A PROGRAM TO CHECK IF A NUMBER IS A PALINDROME

#include <stdio.h>

int main() {
    int n, num, rev = 0, d;

    printf("Enter an integer: ");
    scanf("%d", &n);

    num = n;

    while (n != 0) {
        d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    if (num == rev)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
