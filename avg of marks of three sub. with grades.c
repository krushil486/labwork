#include <stdio.h>

void main()
{
    int a,b,c,d;

    printf("Marks of maths =");
    scanf("%d",&a);

    printf("Marks of phy =");
    scanf("%d",&b);

    printf("Marks of chem =");
    scanf("%d",&c);

    d=(a+b+c)/3;

    if (a && b && c>35 && d>=70)
    {
        printf("avg. of Marks =%d\n",d);
        printf("Distinction\n");
    }
    else if (a && b && c>35 && d>=60)
    {
        printf("avg. of Marks =%d\n",d);
        printf("First\n");
    }
    else if (a && b && c>35 && d>=50)
    {
        printf("avg. of Marks =%d\n",d);
        printf("Second\n");
    }
    else if (a && b && c>35 && d>=35)
    {
        printf("avg. of Marks =%d\n",d);
        printf("Third\n");
    }
    else
    {
        printf("FAIL\n");
    }
}