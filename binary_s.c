// Day 19 of 30 days Challange by CES SIT
// Write a Program to implement Binary Search on a Sorted Array.

#include <stdio.h>
#include <stdlib.h>

int* input(int size) {
    int i;
    int *arr = (int*)malloc(size * sizeof(int));
    printf("\nEnter the elements of the Array (Sorted in Ascending Order)\n");
    for(i = 0; i < size; i++){
        printf("Enter for arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }

    return arr;
}

int search_linear(int ele, int *arr, int size) {
    int ub = size - 1, lb = 0, mid;

    while(lb <= ub){
        mid = (lb + ub) / 2;
        if(arr[mid] == ele)
            return mid;
        else if(arr[mid] < ele)
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    return -1;
}

int main() {
    int size, ele;
    printf("Enter the size of the Array: ");
    scanf("%d", &size);
    
    int *arrInput = input(size);
    
    printf("\nEnter the element which you want to search: ");
    scanf("%d", &ele);
    
    int data = search_linear(ele, arrInput, size);

    if(data != -1)
        printf("\nElement found at index %d\n", data);
    else
        printf("\nElement not found in the array\n");
    
    free(arrInput);
    return 0;
}