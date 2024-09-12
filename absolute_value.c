// Q: Write a program to find the absolute value of a number using the ternary operator.

#include <stdio.h>

int main() {
    int num, abs_value;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ternary operator to find absolute value
    abs_value = (num < 0) ? -num : num;

    printf("The absolute value of %d is %d\n", num, abs_value);
    return 0;
}
