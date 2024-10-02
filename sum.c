//Write a program to print sum of N Natural Numbers.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a Number: ");
    scanf("%d" , &n);
    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }
    printf("Sum of %d Natural Numbers = %d \n", n, sum);
    return 0;
}