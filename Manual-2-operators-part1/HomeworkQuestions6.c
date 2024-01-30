/*
    6. Print the sum of the series:1+2+...+n; read n from user (Hint: 1+2+...+n= n(n-1)/2)
*/

#include<stdio.h>

int main()
{
    int n,sum_of_natural_numbers;
    printf("1+2+...+n For this series enter the value of n: ");
    scanf("%d",&n);
    sum_of_natural_numbers = (n*(n+1))/2;
    printf("The sum is: %d",sum_of_natural_numbers);
}