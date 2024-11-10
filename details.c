// Day 30 of 30 days Challange by CES SIT
// Implement a program to create and use Structures to Store Information (Like Student Details).

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student1;

    printf("Enter student name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = 0;

    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
