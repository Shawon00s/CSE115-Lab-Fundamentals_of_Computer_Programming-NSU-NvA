/*
    3. Compute the volume of a sphere; read the radius from user.
*/

#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main()
{
    float r, volumeOfSphere;
    printf("Enter the radius of sphere: ");
    scanf("%f",&r);

    volumeOfSphere = (4 * PI * pow(r,3))/3;
    printf("Volume of shpere is: %0.2f",volumeOfSphere);
}
