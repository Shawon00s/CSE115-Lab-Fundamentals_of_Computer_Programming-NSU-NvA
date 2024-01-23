#include<stdio.h>

int main()
{
    float num1, num2, num3;
    float avg;
    printf("Insert first number: ");
    scanf("%f",&num1);
    printf("Insert second number: ");
    scanf("%f",&num2);
    printf("Insert third number: ");
    scanf("%f",&num3);

    avg=((num1+num2+num3)/3);

    printf("The average is: %f",avg);
}