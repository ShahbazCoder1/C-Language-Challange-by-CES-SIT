// Day 17 of 30 days Challange by CES SIT
/*
PRACTICE WRITING A PROGRAM TO SORT AN ARRAY USING ANY SORTING TECHNIQUE.

ARRAY(64, 34, 25, 12, 22,11}
*/

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = n-1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11};
    int l = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Unsorted array: \n");
    for (i = 0; i < l; i++)
        printf("%d ", arr[i]);
    printf("\n");

    bubbleSort(arr, l);

    printf("Sorted array: \n");
    for (i = 0; i < l; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
