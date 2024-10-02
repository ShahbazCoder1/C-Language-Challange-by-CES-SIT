/*
Write a program to print this pattern using loop
                    *****
                    *****
                    *****
                    *****
                    *****
*/


#include <stdio.h>
int main() {
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("*"); //printing the pattern
        }
        printf("\n");
    }
    return 0;
}