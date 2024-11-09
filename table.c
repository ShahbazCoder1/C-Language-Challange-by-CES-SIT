// Day 10 of 30 days Challange by CES SIT
/* 
Practice Using Loops (For, While, Do-While)
Example: Write a program to print the multiplication table of 2 using different types of loops: For, While, and Do-While.
*/

#include <stdio.h>

int main(){
    int i, n;
    printf("Enter the table limit: ");
    scanf("%d" , &n);
    //for loop
    printf("Using 'for' loop multiplication table of 2:\n");
    for(i = 0; i <= n; i++){
        printf("2 × %d = %d \n" , i, (2*i));
    }
    //while loop
    printf("Using 'while' loop multiplication table of 2:\n");
    i = 0;
    while(i <= n){
        printf("2 × %d = %d \n" , i, (2*i));
        i++;
    }
    // do-while loop
    printf("Using 'do-while' loop multiplication table of 2:\n");
    i = 0;
    do{
        printf("2 × %d = %d \n" , i, (2*i));
        i++;
    } while(i <= n);

    return 0;
}