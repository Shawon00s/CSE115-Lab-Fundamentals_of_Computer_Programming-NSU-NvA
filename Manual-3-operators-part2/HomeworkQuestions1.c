/*
    1. Read an integer number n from user. Compute the bitwise AND of n and 1. Do you see a pattern in the result? 
    (Hint: observe the difference in the result when n is odd vs. when n is even)
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",n&1);
}