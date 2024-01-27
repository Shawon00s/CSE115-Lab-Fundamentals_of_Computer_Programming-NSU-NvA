/*
    1. Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, quotient
    and remainder of the two numbers.

    Input:
    Insert first number: 10
    Insert second number: 5
    
    Output:
    Sum = 15
    Product = 50
    Difference = 5
    Quotient = 2
    Remainder = 0
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Insert first number: ");
    scanf("%d",&num1);
    printf("Insert second number: ");
    scanf("%d",&num2);

    printf("Sum = %d",num1+num2);
    printf("\n");
    printf("Product = %d",num1*num2);
    printf("\n");
    if(num1>num2)
    {
        printf("Difference = %d",num1-num2);
        printf("\n");
    }
    else
    {
        printf("Difference = %d",num2-num1);
        printf("\n");
    }
    printf("Quotient = %d",num1/num2);
    printf("\n");
    printf("Remainder = %d",num1%num2);
    printf("\n");
}
