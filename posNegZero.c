// Take a number input from user by scanf and check weather the number is positive,  negative or zero

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    (n>0)?printf("Number is positive"):(n<0 ? printf("Nunber is negative") : printf("Number is O"));
    return 0;
}