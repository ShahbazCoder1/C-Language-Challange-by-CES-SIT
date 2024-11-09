// Day 11 of 30 days Challange by CES SIT
// WRITE A PROGRAM TO PRINT THE FIRST N NATURAL NUMBERS USING A LOOP.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);
    
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}