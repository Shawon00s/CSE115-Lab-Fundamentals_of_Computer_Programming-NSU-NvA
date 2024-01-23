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