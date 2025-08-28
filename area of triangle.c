#include <stdio.h>

void main()
{
    float l,h,a;
    printf("Enter Length of the triangle :-");
    scanf("%f",&l);
    printf("Enter Height of the triangle :-");
    scanf("%f",&h);
    a=0.5*l*h;
    printf("Area of the triangle :-%f\n",a);
}