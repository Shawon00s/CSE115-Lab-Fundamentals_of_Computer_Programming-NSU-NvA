// 1. Compute the value of 5x^3-4x^2+√(x)+3; read x from user

#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Enter the value for x: ");
    scanf("%f",&x);
    
    float result = 5*pow(x,3)-4*pow(x,2)+sqrt(x)+3;

    printf("Answer: %0.2f",result);
}