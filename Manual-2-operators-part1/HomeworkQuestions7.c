/*
    7. Print the sum of the series:1^2+2^2+...+n^2; read n from user.
*/

#include<stdio.h>

int main()
{
    int n,summation;
    printf("1^2+2^2+...+n^2 For this series enter the value of n: ");
    scanf("%d",&n);
    summation = (n*(n+1)*(2*n+1))/6;
    printf("The sum is: %d",summation);
}