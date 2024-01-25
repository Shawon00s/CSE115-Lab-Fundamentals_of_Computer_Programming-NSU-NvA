/*
    Write a program that reads in 3 numbers and prints their average.

        Input:
        Insert first number: 3 
        Insert second number: 8 
        Insert third number: 2

        Output:
        The average is: 4.3
*/

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
