/*
    4. Read the co-ordinates of two points (x1,y1) and (x2,y2) from user. 
    Compute the midpoints of these two points and print it up to 2 decimal points.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1;
    int x2,y2;
    double midpointX, midpointY;

    printf("Enter x1 and y1: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter x2 and y2: ");
    scanf("%d%d",&x2,&y2);

    midpointX = (x1+x2)/2;
    midpointY = (y1+y2)/2;

    printf("Midpoint is: (%0.2lf,%0.2lf)",midpointX,midpointY);
}