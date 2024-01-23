#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter a: ");
    scanf("%d",&a);
    
    printf("Enter b: ");
    scanf("%d",&b);

    int temp=0;
    temp=a;
    a=b;
    b=temp;

    printf("After swapping, a:%d and b:%d",a,b);
}