// Q: Write a program to find the maximum of two numbers using the ternary operator.

#include <stdio.h>

int main() {
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Ternary operator to find the maximum
    max = (num1 > num2) ? num1 : num2;

    printf("The maximum of %d and %d is %d\n", num1, num2, max);
    return 0;
}
