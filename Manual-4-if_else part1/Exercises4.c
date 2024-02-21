/*
    Write a C program to check whether an input number is a multiple of only 5 (e.g. 5, 10, 15, ...), only 11 (e.g. 11, 22, 33, ...), 
    both 5 and 11 (e.g. 55, 110, ....), or neither of them (e.g. 2,3, 4, 6, 7, 8, 9, 12, ....).
*/

#include <stdio.h>

int main()

{

    int i;
    printf("Enter a number : ");
    scanf("%d", &i);

    if (i % 5 == 0 && i % 11 != 0)
    {
        printf("Only multiple of 5");
    }
    else if (i % 5 != 0 && i % 11 == 0)
    {
        printf("Only multiple of 11");
    }
    else if (i % 5 == 0 && i % 11 == 0)
    {
        printf("Multiple of both 5 and 11");
    }
    else
    {
        printf("Not multiple of either 5 or 11");
    }
}
