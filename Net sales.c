#include <stdio.h>

void main()
{
    float n,g,d;
    printf("Enter gross salary :-");
    scanf("%f",&g);
    d=g*0.1;
    n=g-d;
    printf("Net sales :- %f\n",n);
}