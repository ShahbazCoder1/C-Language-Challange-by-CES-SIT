// Day 5 of 30 days Challange by CES SIT
// Practice using IF-ELSE for simple decision making.
// Write a program to check whether the number is even or odd.

#include <stdio.h>
int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d" , &n);
    if(n%2==0)
        printf("%d is a Even Number \n", n);
    else
        printf("%d is a Odd Number \n", n);
    return 0;
}