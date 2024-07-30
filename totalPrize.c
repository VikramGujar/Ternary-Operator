// Take a input from user as the total prize he is going to pay for purchased items and then
//  , if user spending less than 1000 then don't give discount if he is spending more than
//   1000 then give 5% discount and if user spending more than 5000 give discount of 10% and
//    then print how much he has to pay

#include <stdio.h>

int main() {
    int totalPrize;
    printf("Enter prize: ");
    scanf("%d", &totalPrize);

    
    (totalPrize > 1000) ? 
        (totalPrize > 5000 ? printf("You got 10 percent discount you have to pay: %.2f \n",totalPrize-(totalPrize*0.10)) : printf("You got 5 percent discount you have to pay: %.2f \n",totalPrize-(totalPrize*0.05))) 
        : printf("You are not eligible for discount\n");

    return 0;
}