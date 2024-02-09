/*
    1. Write a C program to enter month number and print number of days in month
*/

#include <stdio.h>

int main()
{
    printf("Enter the number of month: ");
    int i;
    scanf("%d",&i);

    if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
    {
        printf("31 days");
    }
    else if(i == 2)
    {
        printf("28 days or 29 days");
    }
    else
    {
        printf("30 days");
    }
}