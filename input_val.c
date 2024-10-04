//Day 3 of 30 days Challange by CES SIT
// Write a program to take input from the user and print the values.

#include <stdio.h>
int main(){
    int A;
    double B;
    char C;
    float D;
    printf("Enter a Number: ");
    scanf("%d", &A);
    printf("Enter a Decimal Number: ");
    scanf("%lf", &B);
    getchar();
    printf("Enter a Character: ");
    scanf("%c", &C);
    printf("Enter a Float Number: ");
    scanf("%f", &D);
    printf("A = %d (int data type)\nB = %lf (double data type)\nC = %c (char data type)\nD = %f (float data type)\n", A, B, C, D);
    return 0;
}