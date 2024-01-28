/*
    2. Solve the equation: ax^2+bx+c=0 and print the solutions. 
    Read a,b,c from user
    Hint: compute the values of (-b+sqrt(b^2-4ac))/2a and (-b-sqrt(b^2-4ac))/2a; 
    here sqrt is a C function that computes the squared root of a number
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,res1,res2;
    scanf("%lf%lf%lf",&a,&b,&c);

    res1 = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
    res2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a;

    printf("Answers are: %0.2lf and %0.2lf",res1,res2);
}
