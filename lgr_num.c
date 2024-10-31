// Day 8 of 30 days Challange by CES SIT
// Write a Program to find the Largest of Three Numbers using nested IF.

#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("%d is the largest number.\n", num1);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("%d is the largest number.\n", num2);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    }

    return 0;
}