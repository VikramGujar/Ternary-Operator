// Q: Write a program to check if a student has passed or failed using the ternary operator. (Passing mark is 40).

#include <stdio.h>

int main() {
    int marks;
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    // Ternary operator to check pass or fail
    (marks >= 40) ? printf("Student has passed\n") : printf("Student has failed\n");

    return 0;
}
