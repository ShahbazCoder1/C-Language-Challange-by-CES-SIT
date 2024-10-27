// Day 20 of 30 days Challange by CES SIT
// Work with Strings: Write a Program to Read a String and Print it.

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);
    return 0;
}