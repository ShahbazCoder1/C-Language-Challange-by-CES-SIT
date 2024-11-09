// Day 15 of 30 days Challange by CES SIT
// WRITE A PROGRAM TO CREATE AND TRAVERSE A 1D ARRAY.

#include <stdio.h>

int main() {
    int arr[10];
    int i;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
