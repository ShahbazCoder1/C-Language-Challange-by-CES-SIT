// Day 6 of 30 days Challange by CES SIT
// Write a program to find the Largest of Two Numbers using IF-ELSE.

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is the largest number.\n", num1);
    } else if (num2 > num1) {
        printf("%d is the largest number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }
    return 0;
}