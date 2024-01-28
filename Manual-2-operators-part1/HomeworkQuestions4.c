/*
    4. Compute quotient and remainder when you divide x by y (read x, y from user).
    Also, compute quotient and remainder when you divide y by x. Print all these four results.
*/

#include <stdio.h>

int main()
{
    int x,y;
    int quotient1, quotient2, remainder1, remainder2;
    printf("Enter x and y with a space in between: ");
    scanf("%d%d",&x,&y);

    // For dividing x by y
    quotient1 = x / y;
    remainder1 = x % y;
    printf("For x by y -->\t Quotient is: %d and Remainder is: %d",quotient1,remainder1);
    printf("\n");

    // For dividing y by x
    quotient2 = y / x;
    remainder2 = y % x;
    printf("For y by x -->\t Quotient is: %d and Remainder is: %d",quotient2,remainder2);
}
