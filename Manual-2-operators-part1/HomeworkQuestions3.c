/*
    3. Find the volume of a (a) cube and (b) cylinder
    Note: Read necessary inputs from user e.g. height and diameter of the cylinder
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    double edge, height, diameter;
    double volumeOfCube, volumeOfCylinder;

    printf("Enter the edge of cude: ");
    // Taking input of the edge for cube's volume
    scanf("%lf", &edge);
    volumeOfCube = pow(edge, 3);
    printf("%0.2lf \n", volumeOfCube);

    printf("Enter the height and the diameter of cylinder: ");
    // Taking input of the height and the diameter for cylinder's volume
    scanf("%lf%lf", &height, &diameter);
    volumeOfCylinder = PI * pow((diameter / 2), 2) * height;
    printf("%0.2lf", volumeOfCylinder);
}