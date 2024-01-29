/*
    5. Read a temperature in Celsius and print its Fahrenheit equivalent (Hint: C=(F-32)*5/9)
*/

#include <stdio.h>

int main()
{
    float C;

    printf("In celcius: ");
    // Taking the value of C(Celcius) from the user
    scanf("%f",&C);

    float F = (C * 9/5) + 32;

    printf("In Farenhite: %0.2f",F);
}