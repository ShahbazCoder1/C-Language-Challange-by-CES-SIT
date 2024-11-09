// Day 16 of 30 days Challange by CES SIT
/*
IMPLEMENT A PROGRAM TO FIND THE LARGEST AND SMALLEST ELEMENT IN AN ARRAY.

ARRAY(23, 45, 12, 67, 34, 89, 5)
*/

#include <stdio.h>

int main() {
    int arr[] = {23, 45, 12, 67, 34, 89, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int lr = arr[0];
    int sm = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > lr) {
            lr = arr[i];
        }
        if (arr[i] < sm) {
            sm = arr[i];
        }
    }

    printf("Largest element: %d\n", lr);
    printf("Smallest element: %d\n", sm);

    return 0;
}
