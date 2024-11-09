// Day 29 of 30 days Challange by CES SIT
// Practice using Pointers to access and modify the Value of a Variable.

#include <stdio.h>

int main() {
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num);
    int *ptr; 
    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);
    printf("Enter a number: ");
    scanf("%d", &(*ptr));
    printf("Modified value of num: %d\n", num);

    return 0;
}
