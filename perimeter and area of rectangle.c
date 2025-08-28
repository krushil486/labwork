#include <stdio.h>

void main()
{
    float l,b,p,a;
    printf("Enter length of the rectangle :-");
    scanf("%f",&l);
    printf("Enter breadth of the rectangle :-");
    scanf("%f",&b);
    p=2*(l+b);
    a=l*b;
    printf("Perimeter of the rectangle :- %f\n",p);
    printf("Area of the rectangle :- %f\n",a);

}