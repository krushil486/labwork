#include <stdio.h>

void main()
{
    int a,b,c,avg,total;
    printf("Enter marks of subject A :- ");
    scanf("%d",&a);
    printf("Enter marks of subject B :- ");
    scanf("%d",&b);
    printf("Enter marks of subject C :- ");
    scanf("%d",&c);
    if (a||b||c > 100)
        {
        printf("INVALID");
    }
    else
    {
        total=a+b+c;
        avg=total/3;
        printf("Total marks :- %d\n",total);
        printf("Average marks:- %d\n",avg);
    }
}