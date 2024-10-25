// Day 18 of 30 days Challange by CES SIT
// Implement a program to Search for an Element in an Array (Linear Search).

#include <stdio.h>
#include <stdlib.h>

int* input(int size) {
    int i;
    int *arr = (int*)malloc(size * sizeof(int));

    for(i = 0; i < size; i++){
        printf("Enter for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    return arr;
}

int search_linear(int ele, int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == ele) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size, ele;
    printf("Enter the size of the Array: ");
    scanf("%d", &size);
    
    int *arrInput = input(size);
    
    printf("Enter the element which you want to search: ");
    scanf("%d", &ele);
    
    int data = search_linear(ele, arrInput, size);

    if(data != -1)
        printf("Element found at index %d\n", data);
    else
        printf("Element not found in the array\n");
    
    free(arrInput);
    return 0;
}