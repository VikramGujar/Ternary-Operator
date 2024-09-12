// Q: Write a program to check if a number is positive, negative, or zero using the ternary operator.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ternary operator to check positive, negative, or zero
    (num > 0) ? printf("%d is positive\n", num) : (num < 0) ? printf("%d is negative\n", num) : printf("The number is zero\n");

    return 0;
}
