//Write a program to swap two numbers.

#include <stdio.h>
void main() {
    int A , B, temp = 0;
    printf("Enter a Number for 'A': ");
    scanf("%d" , &A);
    printf("Enter a Number for 'B': ");
    scanf("%d" , &B);
    temp = A;
    A = B;
    B = temp;
    printf("After Swapping, value of 'A' = %d\nAfter Swapping, value of 'B' = %d \n", A, B);
}